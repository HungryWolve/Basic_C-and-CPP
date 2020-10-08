#include<stdio.h>
int max(int,int);

void main(){
    int a,b;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    int result;
    result = max(a,b);
    

}
int max(int a,int b){return a>b?a:b;}
