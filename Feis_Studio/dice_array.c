#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 模擬擲骰子6000次的機率統計(次數)
int main(){
    srand(time(0));
    int d[]={0,0,0,0,0,0};
    int dice;
    for (int i = 0; i <= 6000; i++){
        dice = rand() % 6 + 1;
        switch(dice){
            case 1: d[0]++;break;
            case 2: d[1]++;break;
            case 3: d[2]++;break;
            case 4: d[3]++;break;
            case 5: d[4]++;break;
            case 6: d[5]++;break;
        }
    }
    
    printf("數字1:%d -> %f\n",d[0],(d[0] / 6000.0)*100);
    printf("數字2:%d -> %f\n",d[1],(d[1] / 6000.0)*100);
    printf("數字3:%d -> %f\n",d[2],(d[2] / 6000.0)*100);
    printf("數字4:%d -> %f\n",d[3],(d[3] / 6000.0)*100);
    printf("數字5:%d -> %f\n",d[4],(d[4] / 6000.0)*100);
    printf("數字6:%d -> %f\n",d[5],(d[5] / 6000.0)*100);

    return 0;
}