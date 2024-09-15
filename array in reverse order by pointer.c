// BY---> Mohamed Amiin

#include<stdio.h>
int main()
{
	int arr[10];
	int i,n=5;
	int *p=arr;

	printf("the elements of array:\n");

	for(i=0;i<n;i++){
	    scanf("%d",p);
        p++;
	}

    p=&arr[n-1];

	for(i=n;i>0;i--)
	{
		printf("element[%d]=%d\n",i,*p);
		p--;
	}
	return 0;
}
