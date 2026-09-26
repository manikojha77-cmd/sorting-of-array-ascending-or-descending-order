#include <stdio.h>
int main()
{
    int n, i, j, min, temp=0;
    printf("Enter the array size:");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 4; i++)
    {
        min = i;
        for(j = i + 1; j < 5; j++)
        {
            if(a[j] > a[min])
            {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    printf(" Descending order a array\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
