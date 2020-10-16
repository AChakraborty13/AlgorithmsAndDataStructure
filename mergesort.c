# include<stdio.h>
void merge(int a[],int min,int mid,int max)
{
	int b[30],i,j,k;
	for(i=min;i<=max;i++)
	b[i]=a[i];
	i=min;
	j=mid+1;
	k=min;
	while(i<=mid && j<=max)
	{
		if(b[i]<b[j])
		{
			a[k]=b[i];i++;k++;
		}
		else
		{
			a[k]=b[j];j++;k++;
		}
	}
	while(i<=mid)
	{
		a[k]=b[i];i++;k++;
	}
	
	
		while(j<=max)
		{
			a[k]=b[j];j++;k++;
		}
}
void msort(int min,int max,int a[])
{
	int mid;
	if(max>min)
	{
	
		mid=(min+max)/2;
		msort(a,min,mid);
		msort(a,mid+1,max);
		merge(a,min,mid,max);
	}
}
void main()
{
	int a[30],n,i;
	printf("Enter the size of the array: ");
		scanf("%d",&n);
	printf("Enter the %d elements :",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	msort(a,0,n-1);
	printf("\n After sorting \n");
	for(i=0;i<n;i++)
		printf("\t%d",a[i]);
	
}
