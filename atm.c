#include<stdio.h>
int main()
{
	int x;
	float y;
	scanf("%d",&x);
	scanf("%f",&y);
	if(y>0.0 && y<=2000.00)
	{
		if(x>=0 && x<=2000)
		{
			if(x+0.5<=y)
			{
				if(x%5==0)
				{
					printf("%0.2f",y-x-0.5);
				}
				else
				{
					printf("%0.2f",y);
				}
			}
			else
			{
				printf("%0.2f",y);
			}	

		}
	}	
	return 0;
}