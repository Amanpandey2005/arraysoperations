#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void display(int arr[], int n){
    for (int i = 0; i<n ; i++ )
    {
        printf(" %d ", arr[i]);
    }
}
void deletion(int arr[], int size, int index ){
    for (int i = index ;  i < size-1 ; i++)
    {
         arr[i]= arr[i+1];
    }
}


int main(){
    int arr[100] = {1,3,5,6,8,9};
    int size = 6 , element = 4 , index = 3;
    display(arr, size);
    deletion(arr, size, index);
    size -= 1;
    display(arr, size);
    return 0;
}