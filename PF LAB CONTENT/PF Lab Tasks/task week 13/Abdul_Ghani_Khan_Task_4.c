#include<stdio.h>
int main()
{
	int arr[15];
	int count=0;
	int unique=0;
	printf("Enter the elements in the array:");
	for(int i=0;i<15;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<15;i++)
	{
		count=0;
		for(int j=0;j<15;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
			}
		}
		if(count==1)
		{
			printf("\nUnique is %d ",arr[i]);
			unique++;
		}
	}
	printf("\nThere Are %d Total Unique Numbers",unique);
	return 0;
	
}
