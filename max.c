#include<stdio.h>
int main()
{
	int n,i,max,min,prodmin,prodmax;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	prodmin=a[0];
	prodmax=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
			prodmin*=min;

		}
		if(a[i]>max)
		{
			max=a[i];
			prodmax*=max;
		}
	}
	if(prodmin>prodmax)
		printf("%d",prodmin);
	else
		printf("%d",prodmax);

	return 0;
}
	