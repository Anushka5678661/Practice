
#include<stdio.h>
int main()
{
 int n, i, j;
 printf("Enter the number of students: ");
 scanf("%d" , &n);
 int arr[n];
 for(i=0; i<n; i++)
 {
    printf("Enter there marks: ");
    scanf("%d", &arr[i]);
 }
 printf("Index number of students marks less than 35 \n");
for (j=0; j<n; j++)
 { if(arr[j]<35)
   printf("%d\n", j);
 }

 return 0;
}