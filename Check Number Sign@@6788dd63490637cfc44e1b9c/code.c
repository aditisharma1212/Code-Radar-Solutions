#include<stdio.h>
int main(){
    float a;
    scanf("%f",&a);
    if(a>0){
        printf("Positive");
    }
    else if(a<0){
        printf("Negative");
    }
    else{
        printf("Zero");
    }
}