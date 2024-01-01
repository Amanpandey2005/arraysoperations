#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct myclass{
    int total_marks;
    int obtained_marks;
    int *ptr;
};

void createarray(struct myclass *a , int tmarks, int omarks){
    a -> total_marks = tmarks ;
    a -> obtained_marks = omarks;
    a -> ptr = (int *)malloc(tmarks * sizeof(int));

}

void showmarks(struct myclass *a){
    for (int  i = 0; i < a -> obtained_marks ; i++)
    {
        printf("%d\n", a -> ptr [i]);
    }
    
}

void setmarks(struct myclass *a){
    int n;
    for (int i = 0 ; i < a -> obtained_marks ; i++)
    {
        printf("Enter an element is  =  ");
        
        scanf("%d", &n);
        (a -> ptr)[i]= n;
    

    }
    
}

int main()
{
    struct myclass marks ;
    createarray(&marks , 100, 10);
    printf("we are running set values now\n");
    setmarks(&marks);

    printf("we are running show values now\n");
    showmarks(&marks);

    return 0;
}

