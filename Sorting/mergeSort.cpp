#include<bits/stdc++.h>
void merge(int a[],int l, int mid ,int r)
{
	int i=l,j=mid+1,k=0;
	int b[50];
	while((i<=mid )&&( j<=r))
	{
		if(a[i]<a[j])
		{
			b[k++]=a[i++];
		}
		else
		{
			b[k++]=a[j++];
		}
	}
	while(i<=mid)
	{
		b[k++]=a[i++];
	}
	while(j<=r)
	{
		b[k++]=a[j++];
	}
	int m=0;
	for(int i=l;i<=r;i++)
	{
		a[i]=b[m++];
	}
}
void mergeSort(int a[],int l,int r)
{
	//DIvide recurring function
	if(l<r)
	{
		int mid = (l+r)/2; //divide the array into two halfs
		//recursivelly calling the function on the two halfs
		mergeSort(a,l,mid);  
		mergeSort(a,mid+1,r);
		//merging the sorted the two sorted arrays to get the final sorted array
		merge(a,l,mid,r);
	}
}

int main()
{
	int a[] = {5,54,32,96,10};
	int n=5;
	printf("Array before sorting:- ");
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);
	mergeSort(a,0,n-1);
	printf("\nArray after sorting:- ");
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);
}
