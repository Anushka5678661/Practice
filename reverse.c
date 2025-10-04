
#include<stdio.h>
int main()
{
    int n, i, j ;
    printf("Enter the numbers of element:");
    scanf("%d" , &n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        printf("Enter the elements:\n");
        scanf("%d" ,&arr[i]);
    }
    printf("Reversed ");
    for(j=n-1; j>=0; j--)
    {
        printf("%d", arr[j]);
    }
    return 0;
}