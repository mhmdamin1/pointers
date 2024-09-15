// BY----> Mohamed Amiin

#include <stdio.h>
#include <stdlib.h>
struct Sdata{

    char name[15];
    int ID;
};
int main()
{
    int i;
	struct Sdata emp1={"mostafa",2005};

	struct Sdata emp2={"mohamed",2002};

	struct Sdata *arr[2]={&emp1,&emp2};

	struct Sdata *(*p)[2]=arr;

	for(i=0;i<2;i++)
	{
	printf("employee%d name: %s \n",i+1,(*(*p+i))->name);
	printf("employee%d id: %d\n",i+1,(*(*p+i))->ID);
	}

    return 0;
}
