#include <stdio.h>
void print_stars(int i);

int main(){
    int N;
    printf("N = ");
    scanf("%d",&N);

    int i;
    for (i=1; i<=N; i++){ // 印 N 行
        print_stars(i);
        printf("\n");
    }
    return 0;
}

// void 代表不回傳值
void print_stars(int i){
    int j;
    for (int j=1; j <= i; j++){ // 印 N 個 *
        printf("*");
    }
    return;
}