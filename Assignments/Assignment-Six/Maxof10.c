// Accept 10 nos. and print minimum, maximum out of them

#include<stdio.h>
int main()
{
    int arr[10], MaxNumber, MinNumber, i;

    printf("\n Enter 10 Numbers: ");
    for ( i = 0; i < 10; i++) {
        scanf("%d",&arr[i]);
    }

    for ( i = 0; i < 10; i++)
    {
        if (arr[0] < arr[i]) {
            MaxNumber = arr[i] ;
        }
        else {
            MinNumber = arr[i] ;
        }        
    }
    
    printf("\n Maximum Number : %d",MaxNumber);
    printf("\n Minimum Number : %d",MinNumber);
    
    return 0;
}