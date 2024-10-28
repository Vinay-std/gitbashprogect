#include<stdio.h>
void selectionsort(int a[],int n);
void selectionsort(int a[],int n)
{
	int i,pos,j,temp;
	for(i=0;i<n-1;i++)
	{
		pos = i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[pos])
			pos=j;
		}
		if(i!=pos)
		{
			temp=a[i];
			a[i]=a[pos];
			a[pos]=temp;
		}
	}
}
int main()
{
	int a[100],n,i;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	printf("enter the array elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	selectionsort(a,n);
	printf("after sorting\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
}

