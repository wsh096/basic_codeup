#include <iostream>

int main(){
    int sum=0;
    int i,n;
   scanf("%d", &n);
   for(i=0; sum<n;i++){
     if(sum<n)sum=sum+i;
   printf("%d",i);
   }printf("%d",i-1);
}



//마지막 i=11을 넣었을 때 값이 더 커지므로 값을 실행하지 않고 종료하는데 그 종료값이 11이므로 -1을 한 값을 출력해야 마지막 값을 볼 수 있다.

//for는(식선언;조건문;변환식){구조}

//