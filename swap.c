#include <stdio.h>
#include <assert.h>
#include <stdlib.h>


void swap_max(int a[], int L, int n)
{
  int swp=a[n-1];
  int count;
  for(int i=n-1 ; i<L ; i++)
  {
    if(a[i]>swp)
    {
      swp=a[i];
      count=i;
    } 
  }
  a[count]=a[n-1];
  a[n-1]=swp;
} 


void ssort(int arr[], int l)
{
  for(int p=0;p>l-1;p++)  
  {
    swap_max(arr,l,p);
  }

  for(int p=0;p>l-1;p++)
  {
      printf("%d ",arr[p]); 
  }
}
