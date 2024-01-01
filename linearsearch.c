#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int linearsearch(int arr[], int size , int element){
    for (int i = 0 ; i<size ; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
        else
        return -1;
    }
    
}
int main(){
    int arr[100] = {2,8,8,7,9,6,4,90,78,65,45};
    int size = sizeof(arr);
    int element = 98;
    int searchindex = linearsearch(arr, size, element);
    printf("the element %d is at index %d", element,searchindex);
    return 0;
}