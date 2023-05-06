#include<stdio.h>
int main()
{
	int n,i,sum;
	{
		printf("enter number of elements in a set:");
	}
	scanf("%d",&n);
	int set[n];
{	
	printf("enter set of numbers:");
}
for(i=0;i<n;i++)
    scanf("%d",&set[i]);
    {
    	printf("\n even:");
	}
	for(i=0;i<n;i++)
	if(set[i]%2==0)
	sum+=i;
	{
		printf("%d",set[i]);
}
    {
	printf("\n odd:");
}
for(i=0;i<n;i++)
if(set[i]%2==1)
sum+=i;
printf("%d",set[i]);
return 0;
}