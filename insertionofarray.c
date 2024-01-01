#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void display(int arr[], int n)
{
    for (int i = 0; i< n ; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}

int insertion(int arr[], int element , int index, int size, int capacity)
{
    if( size >= capacity )
    {
        return -1;
    }

    for(int i = size-1 ; i >= index ; i--)
    {
        arr[i+1]= arr[i];
    }
    arr[index] = element;
    return 1;
}

int main(){
    int arr[100]= {3,8,9,7,6,5};
int element = 65 ,  size = 6 , index = 2, capacity = 100;
display(arr, size);
insertion(arr, element, index, size , capacity);
size += 1 ;
display(arr,size);
return 0;

}