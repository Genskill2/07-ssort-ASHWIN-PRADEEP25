#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

void swap_max(int a[], int l, int n)
{
  int swp=a[n-1];
  int count;
  for(int i=n-1 ; i<l ; i++)
  {
    if(a[i]>swp)
    {
      swp=a[i];
      count=i;
    } 
  }
  printf("%d\n\n",swp);
  a[count]=a[n-1];
  a[n-1]=swp;

  for(int i=0;i<l;i++)
  {
      printf("%d ",a[i]);  
  }
}

int main(void)
{
    int arr[]={56,61,86,26,19,56,75,95,1,2,35,22};
    printf("\n");
    for(int i=0;i<12;i++)
    {
      printf("%d ",arr[i]);  
    }
    printf("\n\n");
   swap_max(arr,12,4); 
   printf("\n\n");
   
}
