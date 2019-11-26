#include<stdio.h>
int main()
{
	int a,b,i;
	printf("你想比较几个数字？");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		scanf("%d",&b);
		if(b%10+(b/10)%10+(b/100)%10==(b/1000)%10+(b/10000)%10+(b/100000)%10)
		printf("You are lucky!\n");
		else printf("Wish you good luck.\n");
	}
	return 0;
 } 
