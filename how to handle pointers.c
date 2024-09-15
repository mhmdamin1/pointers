// MOhamed Amin

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int m = 22;
   int* p;


   printf("Address of m = %p \n",&m);
   printf("value of m = %d\n",m);

   p=&m;
   printf("Now p is assigned with the address of m.\n");

   printf("Address of m = %p\n",p);
   printf("value of m = %d\n",*p);

   m = 32;
   printf("The value of m assigned to 32 now.");
   printf("Address of m = %p\n",p);
   printf("value of m = %d\n",*p);

   *p=7;
   printf("The pointer variable p is assigned with the value 7 now.\n");
   printf("Address of m = %p\n",&m);
   printf("value of m = %d\n",m);


    return 0;
}
