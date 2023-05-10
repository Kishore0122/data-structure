#include<stdio.h>
int main()
{
	int n,i,t1=0,t2=1,nextterm;
	printf("enter an intiger:\n");
	scanf("%d",&n);
    printf("fabinosis series\n");
	for(i=1;i<=n;i++)
{printf("%d",t1);
	nextterm=t1+t2;
	t1=t2;
	t2=nextterm;
}
	return 0;
}