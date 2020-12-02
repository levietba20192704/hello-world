#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
char *Viet(char* ten)
{
	int size=-1;
	while(ten[size+1]!='\0')
	{
		size+=1;
	}
	for(int i=size-1;i>=0;i--)
	{
		if((ten[i]==' ')&&(ten[i-1])!=' '){
			ten[i]='\0';size-=i;continue;
		}
	}
	for(int i=0;i<size;i++)
	{
		if((ten[i]==' ')&&(ten[i+1])==' ')
		{
			ten[i]=ten[i+1];
			i--;
		}
	}
	size=-1;
	while(ten[size+1]!='\0')
	{
		size+=1;
	}
	if(ten[0]==' ')
	{
		for(int i=0;i<size;i++){
			ten[i]=ten[i+1];
		}
	}
	size=size-1;
	for(int i=0;i<size;i++)
	{
		if((ten[i]==' ')&&(ten[i+1]!=' '))
		{
			ten[i+1]=ten[i+1]-97+65;
		}
	}
}
int main()
{
	char ten[100];
	gets(ten);
	*Viet(ten);
	puts(ten);
}
