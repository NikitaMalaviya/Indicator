#include<stdio.h>

main()
{
	char str[100],*p;
	int i=0;
	printf("enter any string=");
	gets(str);
	p=str;
	for(i=0;*p !='\0';i++)
	{
		p++;
	}
	printf("length of string:%d",i);
}