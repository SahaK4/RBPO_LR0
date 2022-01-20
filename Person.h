#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
struct Person
{
	char* surname;
	char* name;
	char* middlename;
	unsigned int age;
};
enum SortType
{
	asc = 0,
	desc = 1
};

extern struct Person defperson;
int CompareStrings(const char* lhs, const char* rhs);
void showData(const struct Person* Obj, const int count);
struct Person* fun_cmd(const int argc, char** argv, unsigned long* count);
void Sort(struct Person* persons, int count, enum SortType sortType);
