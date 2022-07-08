#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 模擬擲骰子6000次的機率統計(次數)
int main(){
    srand(time(0));
    int d1=0,d2=0,d3=0,d4=0,d5=0,d6=0;
    int dice;
    for (int i = 0; i <= 6000; i++){
        dice = rand() % 6 + 1;
        switch(dice){
            case 1: d1+=1;break;
            case 2: d2+=1;break;
            case 3: d3+=1;break;
            case 4: d4+=1;break;
            case 5: d5+=1;break;
            case 6: d6+=1;break;
        }
    }
    
    printf("數字1:%d -> %f\n",d1,(d1 / 6000.0)*100);
    printf("數字2:%d -> %f\n",d2,(d2 / 6000.0)*100);
    printf("數字3:%d -> %f\n",d3,(d3 / 6000.0)*100);
    printf("數字4:%d -> %f\n",d4,(d4 / 6000.0)*100);
    printf("數字5:%d -> %f\n",d5,(d5 / 6000.0)*100);
    printf("數字6:%d -> %f\n",d6,(d6 / 6000.0)*100);

    return 0;
}