#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
int func3(int N){
    //강제 형변환
    double a;
    a = sqrt(N);
    if((a - (int)a) == 0){
       return 1;
    }
    else 
        return 0;
}


int main(){
    int N;
    scanf("%d", &N);
    printf("%d", func3(N));
    return 0;
}