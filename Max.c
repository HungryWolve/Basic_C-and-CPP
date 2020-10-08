#include<stdio.h>
int max(int a,int b){
    if(a>b)
        return a;
    else 
        return b;
}

void main(){
    int a,b;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    int result;
    result = max(a,b);
    

}
