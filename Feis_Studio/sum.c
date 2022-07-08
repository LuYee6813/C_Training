#include <stdio.h>
int sum(int);
void main(){
    int N;
    printf("N=");scanf("%d",&N);
    printf("1~%d sum is %d\n",N,sum(N));
}

// solution 1 (for loop)
// int sum(int N){
//     int total = 0;
//     for(int i = 0; i <= N; i++){
//         total += i;
//     }
//     return total;
// }

// solution 2 (recursion)
int sum(int N){
    if (N == 1){
        return 1;
    }
    return sum(N-1) + N;
}
