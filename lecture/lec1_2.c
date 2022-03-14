#include <stdio.h>

int func2(int arr[], int N){
    for (int i=0; i<N; i++){
        for (int j=1; j<N; j++){
            if(arr[i] + arr[j]==100){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int a;
    int arr[10] = {1,52,48};
    a = func2(arr, 3);
    printf("%d", a);
    return 0;
}