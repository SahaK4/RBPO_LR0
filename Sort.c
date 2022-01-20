#include "Person.h"

void Sort(struct Person* persons, int count, enum SortType sortType)
{
	switch (sortType)
	{
	case 1:
	{
		for (int i = 0; i < count - 1; i++)
		{
			for (int j = 0; j < count - 1; j++)
			{
				if (CompareStrings(persons[j].surname, persons[i + 1].surname) > 0)
				{
					struct Person tmp = persons[j];
					persons[j] = persons[i + 1];
					persons[i + 1] = tmp;
				}
				if (CompareStrings(persons[j].name, persons[i + 1].name) > 0 && CompareStrings(persons[j].surname, persons[i + 1].surname) == 0)
				{
					struct Person tmp = persons[j];
					persons[j] = persons[i + 1];
					persons[i + 1] = tmp;
				}
				if (CompareStrings(persons[j].middlename, persons[i + 1].middlename) > 0 && CompareStrings(persons[j].surname, persons[i + 1].surname) == 0 && CompareStrings(persons[j].name, persons[i + 1].name) == 0)
				{
					struct Person tmp = persons[j];
					persons[j] = persons[i + 1];
					persons[i + 1] = tmp;
				}
				if (persons[j].age - persons[i + 1].age > 0 && CompareStrings(persons[j].surname, persons[i + 1].surname) == 0 && CompareStrings(persons[j].name, persons[i + 1].name) == 0 && CompareStrings(persons[j].middlename, persons[i + 1].middlename) == 0)
				{
					struct Person tmp = persons[j];
					persons[j] = persons[i + 1];
					persons[i + 1] = tmp;
				}
			}
		}
		break;
	}
	case 0:
	{
		for (int i = 0; i < count - 1; i++)
		{
			for (int j = 0; j < count - 1; j++)
			{
				if (CompareStrings(persons[j].surname, persons[i + 1].surname) < 0)
				{
					struct Person tmp = persons[j];
					persons[j] = persons[i + 1];
					persons[i + 1] = tmp;
				}
				if (CompareStrings(persons[j].name, persons[i + 1].name) < 0 && CompareStrings(persons[j].surname, persons[i + 1].surname) == 0)
				{
					struct Person tmp = persons[j];
					persons[j] = persons[i + 1];
					persons[i + 1] = tmp;
				}
				if (CompareStrings(persons[j].middlename, persons[i + 1].middlename) < 0 && CompareStrings(persons[j].surname, persons[i + 1].surname) == 0 && CompareStrings(persons[j].name, persons[i + 1].name) == 0)
				{
					struct Person tmp = persons[j];
					persons[j] = persons[i + 1];
					persons[i + 1] = tmp;
				}
				if (persons[j].age - persons[i + 1].age < 0 && CompareStrings(persons[j].surname, persons[i + 1].surname) == 0 && CompareStrings(persons[j].name, persons[i + 1].name) == 0 && CompareStrings(persons[j].middlename, persons[i + 1].middlename) == 0)
				{
					struct Person tmp = persons[j];
					persons[j] = persons[i + 1];
					persons[i + 1] = tmp;
				}
			}
		}
		break;
	}
	}

}