#include"header.h"
#include<stdio.h>

   int x = 0;

   static void print()
   {
    printf("hello inside increment\n");
   }

void increment()
{
 
    print();
}

