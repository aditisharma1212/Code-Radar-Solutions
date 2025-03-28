#include<stdio.h>
int main(){
    int i,j,rows;
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(j=1;j<=n+1-i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}