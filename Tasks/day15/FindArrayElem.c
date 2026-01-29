// Find an Array Element 

#include<stdio.h>
int main()
{
    int arr[5], findElement, i, Number = 1;

    printf("\n Enter Array Elements: ");
    for (i = 0; i < 5; i++) {
        scanf("%d",&arr[i]);
    }

    printf("\n Enter Element to find: ");
    scanf("%d",&findElement);
    for ( i = 0; i < 5; i++) {
        if (findElement == arr[i]) {
           printf("\n %d Element found on index no. %d \n",findElement,i);
           Number = 2;
        }
    }

    (Number & 1) ? printf("\n %d Element Not found",findElement) : printf(""); 
    
    return 0;
}