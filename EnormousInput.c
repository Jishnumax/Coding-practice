#include<stdio.h>
int main()
{
	int n,k;
	int i,count=0;
	scanf("%d%d",&n,&k);
	int t[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&t[i]);
	}
	for(i=0;i<n;i++)
	{
		if(t[i]%k==0)
			count++;		
	}
	printf("%d",count);
	return 0;
}