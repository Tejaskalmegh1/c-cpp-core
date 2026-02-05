#include<stdio.h>
int main()
{
    int n = 10;
    int * ptr = &n;
    printf("\n Value of n : %d",n);
    printf("\n Address of n : %p",&n);

    printf("\n Value of ptr : %p",ptr);
    printf("\n Address of ptr : %p",&ptr);
    printf("\n %d ",*ptr);  

    printf("\n size of ptr is : %lu",sizeof(ptr));

    return 0;
}