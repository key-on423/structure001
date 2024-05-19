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
	printf("请输入书名\n");
	scanf("%s", &one.name);
	printf("请输入作者名\n");
	scanf("%s", &one.author);
	printf("请输入这本书的价格\n");
	scanf("%lf", &one.price);
	printf("<<%s>>  --- %s  for %.2lf元\n", one.name, one.author, one.price);
	printf("Done!");
	return 0;
}