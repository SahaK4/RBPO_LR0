#include "Person.h"
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Rus");
	struct Person* arr;
	unsigned long count;
	enum SortType sortType;

	arr = fun_cmd(argc, argv, &count);
	printf("Выберите порядок сортировки: \n0 - по возрастанию\n1 - по убыванию\n: ");
	scanf_s("%d", &sortType);
	Sort(arr, count, sortType);
	showData(arr, count);

	return 0;
};