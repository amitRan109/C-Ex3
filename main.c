#include <stdio.h>
#include "isort.h"
#define SIZE 50

int main()
{
    int arr[SIZE];
    for (int i=0;i<SIZE;i++)
    {
        scanf(" %d",arr+i); 

    }
    
    insertion_sort(arr,SIZE);

    for (int j=0;j<SIZE-1;j++)
    {
         printf("%d,",*(arr+j));
    }
    printf("%d\n",*(arr+SIZE-1));
    return 0;

}