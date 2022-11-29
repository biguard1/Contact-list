#pragma once
#include "Structures.h"

bool name_load_check(System::String^ name)
{
	for each (auto element in name)
	{
		if (!System::Char::IsLetter(element)) return 0;
	}
	return 1;
}

bool phone_load_check(System::String^ phone)
{
	if (phone == "+") return 0;
	for (int i = 0; i != phone->Length; i++)
	{
		if (phone[i] == '+' && i == 1) continue;
		else if (!System::Char::IsDigit(phone[i])) return 0;
	}
	return 1;
}

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