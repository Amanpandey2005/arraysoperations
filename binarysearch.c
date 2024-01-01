#include<stdio.h>
#include<stdlib.h>
int binarysearch(int arr[], int size , int element)
{
  int low, mid, high  ;
  low = 0;
  high = size -1 ;

  while (low <= high)
  {
     mid =(low + high)/2;

     if (arr[mid] == element){
        return mid;
     }
     if(arr[mid]<element)
     {
        low = mid + 1 ;
     }
     else
      {
     high = mid -1 ;
      }
    }
        return -1;
}
int main(){
    // sorted array for binary search 
    int arr[100] = {2,3,4,5,6,7,8,9,10,11,12,23,45,67,89,100,234,678,908};
    int size = 19;
    // This is more accurate way to passing array into the functions..
    int element = 6;
    int searchindex = binarysearch(arr, size, element);
    printf("The element %d is found at index %d", element, searchindex);
    return 0;
}