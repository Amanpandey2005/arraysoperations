#include<stdio.h> 
#include<conio.h> 
#include<stdlib.h>
void display(int arr[], int n)
{
    for (int i = 0 ; i < n ; i++)
    {
        printf(" %d ", arr[i]);

    }
    

}
int main(){
    int arr[40] = {2,4,6,7,8,9,6};
    display(arr, 7);

    return 0;
}