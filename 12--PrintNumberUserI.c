#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d\n",&n);

    for(int i = 1;i<=n;i++){
        printf("%d\n",i);
    }
    return 0;
}