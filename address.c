
#include<stdio.h>
int main ()
{
    int i;
    int arr[5]={1,1,2,1,1};
    for(i=0;i<5; i++)
    {
    printf("%p\n", &arr[i]);
    }
}