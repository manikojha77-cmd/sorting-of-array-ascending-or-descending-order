 #include<stdio.h>
int main()
{
	int n,i,j,temp=0;
	printf("Enter the array size:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{	
			if(a[i]<a[j])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		   }
		}
	}
	printf("The descending order is:");
	for(i=0;i<n;i++)
	{
		printf("%d,",a[i]);
	}
	return 0;
}
