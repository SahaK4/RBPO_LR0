#include "Person.h"

void showData(const struct Person* Obj, const int count)
{
    //system("cls");
    printf("� \t ������� \t ��� \t\t �������� \t �������\n");
    printf("======================================================================\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d \t %s \t %s \t %s \t %d\n", (i + 1), Obj[i].surname, Obj[i].name, Obj[i].middlename, Obj[i].age);
    }
}