#include <stdio.h>
#include "isort.h"
void shift_element (int *arr,int i)
{
    for(int j =i;j>0;j--)
    {
        *(arr+j) = *(arr+j-1);
    }

} 

void insertion_sort(int *arr, int len)
{
    for (int i=1;i<len;i++)
    {
        int j=i-1;
        while((arr+i)<(arr+j) && j>=0)
        {
            j--;
        }
            
        int num=*(arr+i);
        shift_element(arr+j+1,i-j-1);
        *(arr+j+1)=num;
    }
}