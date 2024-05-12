
#include<stdio.h>
#include<stdlib.h>
#include"header.h"
#include <string.h>
void reverse( char *s)
{
    int n = strlen(s);
    int left = 0, right = n-1;
    for( int i=0; i < n/2; i++)
    {
        char preserve = s[i];
        s[i] = s[n-i-1];
        s[n-i-1] = preserve;
    }
}

 int factorial(int num)
{
    if( num == 0) return 1;
    
    return num * factorial( num - 1);
}


struct node
{
    int x;
    int y;
    /* data */
};

// static void print()
// {
//     print("print inside main\n");
// }

void reverse2( int *arr, int n)
{
   // int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n", n);
    for( int i=0; i<n/2; i++)
    {
        int preserve = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = preserve;
    }
}
/*
int main()
{
    // increment();
    // increment();

    // x+=10;
    // int sum1 = sum();
    // printf("X= %d\n", x);
    // printf("sum = %d", sum1);

    char s[200]="hellos";
    int arr[5] = {1, 2,3, 4, 5};
    struct node var;

    var.x = 20;
    var.y= 40;

    reverse(s);
    reverse2(arr, 5);

    for( int i=0; i<5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("reverse = %s", s);
    printf("x = %d\t x = %d\n", var.x, var.y);

}
*/
 
int main(void)
{
    int i;
    int *ptr = (int *) malloc(5 * sizeof(int));
 
    for (i=0; i<5; i++)
        *(ptr + i) = i;
 
    for( int i=0; i<5; i++)
    {
        printf("%u\n", ptr+i);
    }
    printf("%u ", ptr++);
    printf("%d ", (*ptr)++);
    printf("%d ", *ptr);
    printf("%d ", *++ptr);
    printf("%d ", ++*ptr);

    //printf("factorial = %d \n", factorial(5));

    print();
}