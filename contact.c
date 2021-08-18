#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"


void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size++;//设置通讯录最初只有0个元素
}


void AddContact(struct Contact* ps)
{
	if (ps->size >= MAX)
	{
		printf("full\n");
	}
	else
	{
		printf("input name:>");
		scanf("%s", ps->data[ps->size].name);
		printf("input age:>");
		scanf("%d", &(ps->data[ps->size].age));
		printf("input sex:>");
		scanf("%s", ps->data[ps->size].sex);
		printf("input tele:>");
		scanf("%s", ps->data[ps->size].tele);
		printf("input addr:>");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("AddContact success!");
	}
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size==0)
	{
		printf("empty!");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\t\n", "name", "age", "sex", "tele", "addr");
		for (int i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\t\n", 
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr
				);
		}
	}
}
