#include<stdio.h>

void main(){
    int age;
    printf("enter age");
    scanf("%d",&age);

    if(age>18){
        printf("adult");
    }
    else{
        printf("not adult");
    }
}