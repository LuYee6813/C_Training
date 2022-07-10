#include <stdio.h>
int max(int,int);

int main(){
    printf("%d\n",max(7,20));    
}

int max(int a, int b){
    return a > b ? a : b;
}