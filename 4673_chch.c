#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

// 각 자리를 더해서 새로운 수를 만드는 함수
int sum_num(int n){
    int sum;
    char mid[10];
    sum = n;
    sprintf(mid, "%d", n); // 현재 문자 5가 mid에 저장되어있음
    for (int i=0; i<strlen(mid); i++){
        sum += mid[i]-48; // 문자 5의 아스키 코드값이 53이므로 48을 빼서 5로 만들어주어야 
    }
    return sum;
}

int main() 
{ 
    // 각 자리를 더해서 새로운 수를 만드는 함수를 만들고 10000이하의 수를 다 넣어서 돌린 결과를 배열로 저장
    // 그 후에 10000에 있는 숫자와 비교해서 없는 애들만 프린트하기
  int not_self_num[10001], check_num[10001], self_num[10001];
  for (int i=1; i <10001; i++){
    not_self_num[i] = sum_num(i);
  }
  for (int i=1; i<10001; i++){
    check_num[i]=i;
  }
  for (int i=0; i<10001; i++){
    for (int j=0; j<10001; j++)
      if(check_num[i] != not_self_num[j]){
        self_num[i]=check_num[i];
      }
  }
  for (int i=0; i<sizeof(self_num)/sizeof(int); i++){
    printf("%d\n", self_num[i]);
  }
     
    return 0; 
}

