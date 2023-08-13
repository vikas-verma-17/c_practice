#include<stdio.h>
#include<conio.h>

void main(){
    printf("hello");
    int s;
    printf("\n Enter input : ");
    scanf("%d", &s);
    printf("This is input val : %d",s);

    for(int i=0;i<5;i++){
        printf("\nThis is %d", i);
    }
}