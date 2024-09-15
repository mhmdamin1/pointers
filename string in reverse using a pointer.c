// mohamed amiin

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char str[100];

	char*ptr = str;

	printf("Input a string : ");
	scanf("%s",ptr);

	int i;
	for(i=strlen(ptr)-1; i >=0 ; i--){
		printf("%c", *(ptr+i));


    }
    return 0;
}

