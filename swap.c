#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

// void swap_max(int [], int, int );
void ssort(int [], int);

int main(void)
{
    int array[]={56,61,86,26,19,56,75,95,1,2,35,22};
    printf("\n");
    for(int i=0;i<12;i++)
    {
      printf("%d ",array[i]);  
    }
    printf("\n\n");
   ssort(array,12);
   printf("\n\n");
}

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
