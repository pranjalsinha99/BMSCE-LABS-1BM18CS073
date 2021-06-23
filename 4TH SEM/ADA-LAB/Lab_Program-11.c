#include<stdio.h>
int main()
{
	int t,n,i,j,ele,a[50];
	printf("Enter the number of testcases\n");
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		printf("\nEnter the number of elements in array and element to be searched\n");
		scanf("%d %d",&n,&ele);
		
		printf("Enter the elements of array\n");
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
		}
	for(j=0;j<n;j++)
		{
			if(a[j]==ele)
                        
		
			{
				printf("1 (Element is present)\n");
				break;
			}}
			
		if(ele!=a[j])
                   
			printf("-1 (Element is not present)\n");
			
      }
	return 0;
}
