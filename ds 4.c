#include<stdio.h>
int main()
{
	int n,i,t1=0,t2=1,nextterm;
	printf("enter number of elements:");
	scanf("%d",&n);
	printf("fabonacci series\n:");
	for(i=1;i<=n;i++)
	{
	printf("%d",t1);
	nextterm=t1+t2;
	t1=t2;
	t2=nextterm;
	}
	return 0;
}