#pragma once
#include "Structures.h"

//Проверка ФИО на правильность
bool name_load_check(System::String^ name)
{
	for each (auto element in name)
	{
		if (!System::Char::IsLetter(element)) return 0;
	}
	return 1;
}

//Проверка телефона на правильность
bool phone_load_check(System::String^ phone)
{
	if (!phone->Length) return 1;
	for (int i = 0; i != phone->Length; i++)
	{
		if (phone[i] == '+' && i == 1) continue;
		else if (!System::Char::IsDigit(phone[i])) return 0;
	}
	if (phone[0] == '+' && phone->Length < 11) return 0;
	else if (phone->Length < 10) return 0;
	return 1;
}

//Проверка емейла на правильность
bool email_load_check(System::String^ email)
{
	if (email->Length)
	{
		if (System::Char::IsLetter(email[0]) || System::Char::IsDigit(email[0]) || email[0] == '_' || email[0] == '-')
		{
			if (1 != email->Length)
			{
				int i = 1;
				for (; i != email->Length; i++)
				{
					if (System::Char::IsLetter(email[i]) || System::Char::IsDigit(email[i]) || email[i] == '_' || email[i] == '-' || email[i] == '.') continue;
					else break;
				}
				if (i != email->Length)
				{
					if (email[i] == '@' && i + 1 != email->Length && email[i - 1] != '.')
					{
						i++;
						if (System::Char::IsLetter(email[i]) || System::Char::IsDigit(email[i]) || email[i] == '_' || email[i] == '-')
						{
							for (i++; i != email->Length; i++)
							{
								if (System::Char::IsLetter(email[i]) || System::Char::IsDigit(email[i]) || email[i] == '_' || email[i] == '-') continue;
								else break;
							}
							if (i != email->Length)
								if (email[i] == '.')
								{
									for (i++; i != email->Length; i++)
									{
										if (System::Char::IsLetter(email[i]) || System::Char::IsDigit(email[i]) || email[i] == '_' || email[i] == '-') continue;
										else if (email[i] == '.' && email[i - 1] != '.') continue;
										else break;
									}
									if (i == email->Length && email[email->Length - 1] != '.') return 1;
								}

						}
					}

				}
			}
		}
	}
	else return 1;
	return 0;
}

//Удаление индекса массива
System::Void delete_index(array<Contact^>^% mass, int index)
{
	if (mass->Length)
	{
		array<Contact^>^% temp = gcnew array<Contact^>(mass->Length - 1);
		for (int i = 0; i != temp->Length; i++)
		{
			if (i < index) temp[i] = mass[i];
			else temp[i] = mass[i + 1];
		}
		mass = temp;
	}
}

//Удаление повторений в массиве
System::Void delete_equals(array<Contact^>^% mass)
{
	for (int i = 0; i != mass->Length; i++)
		for (int j = i + 1; j != mass->Length; j++)
			if (mass[i]->surname == mass[j]->surname &&
				mass[i]->name == mass[j]->name &&
				mass[i]->patronymic == mass[j]->patronymic &&
				mass[i]->phone == mass[j]->phone &&
				mass[i]->email == mass[j]->email)
			{
				if (mass[j]->favourite) mass[i]->favourite = true;
				delete_index(mass, j);
				j--;
			}
}