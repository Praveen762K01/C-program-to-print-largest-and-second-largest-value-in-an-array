// c program to find largest and second largest element in array
#include <stdio.h>
int main()
{
	int i,n,large,second_large,arr[100];
	printf("Enter the value of n : ");
	scanf("%d",&n);
	for (i=0; i<n; i++)
	{
		printf("Enter value for arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	large=arr[0];
	for(i=0; i<n; i++)
	{
		if(large<arr[i])
		{
			large=arr[i];
		}
	}
	second_large=arr[1];
	for(i=0; i<n; i++)
	{
		if(large != arr[i])
		{
			if(second_large<arr[i])
			{
				second_large=arr[i];
			}
		}
		
	}
	printf("The array elements are \n");
	for(i=0; i<n; i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("The largest value is : %d\n",large);
	printf("The second_largest value is : %d",second_large);
}
