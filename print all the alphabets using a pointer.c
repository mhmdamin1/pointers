//  mohamed amin


#include <stdio.h>
#include <stdlib.h>

int main()
{

    int* p;

	printf("The Alphabets are : \n");

	int i;
	p= &i;

	for(i = 'A'; i <= 'Z'; i++){

	    printf("%c ", *p);
	}

    return 0;
}
