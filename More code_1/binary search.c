#include<stdio.h>
#include<conio.h>
#define SIZE 20
int main()
{
  int arr[SIZE],n,i,val;
  printf("enter the size of array:");
  scanf("%d",&n);
  printf("enter the elements of array:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  BubbleSort(arr,n);
  printf("Array has been sorted!\n");
  printf("enter the value to be searched:");
  scanf("%d",&val);
  BSearch(arr,n,val);
  return 0;
}
void BubbleSort(int arr[],int n)
{
  int i,j,temp=0;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-1-i;j++)
    {
      if(arr[j]>arr[j+1])
      {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }
}

void BSearch(int arr[],int n,int val)
{
  int start,end,mid,found=0;
  start=0,end=n-1;
  while(start<=end)
  {
    mid=(start+end)/2;
    if(arr[mid]==val)
    {
      found=1;
      printf("%d found  in the array\n",val);
      break;
    }
    else if(arr[mid]>val)
    {
      end=mid-1;
    }
    else
    {
      start=mid+1;
    }
  }
  if(found==0 && start>end)
  {
    printf("%d not found in the array\n",val);
  }
}
