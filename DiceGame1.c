#include<stdio.h>
#include<stdlib.h>
int GetRandom(int min, int max);
int main(){
    int ran,total = 0;
    printf("Rolling dice...\n");
    for(int i=1; i<=2; i++){
        ran = GetRandom(1,6);
        printf("Die %d: %d\n", i, ran);
        total += ran;
    }
    printf("Total value: %d\n",total);
    if(total>7){
        printf("You won\n");
    } else{
        printf("You lost\n");
    }
    return 0;
}
int GetRandom(int min, int max){
    return min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));
}