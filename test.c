#include<stdio.h>

void swap(int x,int y)
{
	int temp=0;
	temp=x;
	x=y;
	y=temp;
}
int main()
{
	int a=10;
	int b=58;
	swap(a,b);
	return 0;
}