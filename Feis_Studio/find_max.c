#include <stdio.h>
int main(){
    int v[]={13,35,23,56,34,36};
    int v_length = (int)(sizeof(v)) /sizeof(v[0]);
    int max = v[0];
    for (int i = 0; i < v_length; i++){
        if (v[i] > max) max = v[i];
    }
    printf("max is:%d\n",max);
}