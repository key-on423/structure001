#include <stdio.h>

struct book 
{
	char name[30];
	char author [30];
	double price;

};
int main()
{
	struct book one; 
	printf("����������\n");
	scanf("%s", &one.name);
	printf("������������\n");
	scanf("%s", &one.author);
	printf("�������Ȿ��ļ۸�\n");
	scanf("%lf", &one.price);
	printf("<<%s>>  --- %s  for %.2lfԪ\n", one.name, one.author, one.price);
	printf("Done!");
	return 0;
}