#include<stdio.h>
int main()
{
	
	int arr[5],n,c,d,i,j;
	scanf("%d",&n);
	for( i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for (i=0;i<n;i++)
	printf("%d",arr[i]);
	for ( i=0;i<n;i++)
	{for ( j=0;j<n;j++)
	 if (arr[i]==arr[j+1] && arr[i]<arr[j+1])
	    printf("%d%d",arr[i],arr[j+1]);
	 else if (arr[i]>arr[j+1])
	 c=arr[i]+arr[j+1];
	 d=c-arr[j+1];
	 c=c-d;
	 printf("%d\t%d",c,d);   
	}
	return 0;
}
	
	
	

