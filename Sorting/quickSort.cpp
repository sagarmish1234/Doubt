#include<bits/stdc++.h>
using namespace std;
int partition(int a[],int l ,int r)
{
	int start = l+1,end=r;
	while(start<=end)
	{
		while(1)
		{
			if(a[start]>a[l]||start>end)
			break;
			else
			start++;
		}
		while(1)
		{
			if(a[end]<a[l]||end<start)
			break;
			else
			end--;
		}
		int temp = a[start];
		a[start] = a[end];
		a[end] = temp; 
	}
	int temp = a[l];
	a[l] = a[end];
	a[end] = temp;
	return end;
}
void quickSort(int a[],int l, int r)
{
	if(l<r)
	{
		int p = partition(a,l,r);
		quickSort(a,l,p-1);
		quickSort(a,p+1,r);
	}
}

int main()
{
	int a[] = {5,54,32,96,10};
	int n=5;
	printf("Array before sorting:- ");
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);
	quickSort(a,0,n-1);
	printf("\nArray after sorting:- ");
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);
}




