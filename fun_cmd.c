#include "Person.h"

struct Person* fun_cmd(const int argc, char** argv, unsigned long* count)
{
	struct Person* ptr = NULL;
	*count = 0;
	for (int i = 1; i < argc; i++)
	{
		if (!CompareStrings(argv[i], "-person"))
		{
			(*count)++;
			ptr = (struct Person*)realloc(ptr, (*count) * sizeof(struct Person));
			ptr[(*count) - 1] = defperson;
		}
		else
		{
			if (!CompareStrings(argv[i], "--fn"))
			{
				i++;
				ptr[(*count) - 1].name = malloc(strlen(argv[i]) + 1);
				strcpy(ptr[(*count) - 1].name, argv[i]);
			}
			else
			{
				if (!CompareStrings(argv[i], "--ln"))
				{
					i++;
					ptr[(*count) - 1].surname = malloc(strlen(argv[i]) + 1);
					strcpy(ptr[(*count) - 1].surname, argv[i]);
				}
				else
				{
					if (!CompareStrings(argv[i], "--mn"))
					{
						i++;
						ptr[(*count) - 1].middlename = malloc(strlen(argv[i]) + 1);
						strcpy(ptr[(*count) - 1].middlename, argv[i]);
					}
					else
					{
						if (!CompareStrings(argv[i], "--age"))
						{
							i++;
							sscanf_s(argv[i], "%u", &ptr[(*count) - 1].age);
						}
						else {
							puts("Неверный аргумент");
							exit(0);
						}
					}
				}
			}
		}
	}
	return ptr;
}