#include <iostream>

int main(){
    int sum=0;
    int i, n;
    scanf("%d", &n);
    for(i=0;i<=n;i++){
      if(i%2==0)sum=sum+i;
      //printf("%d\n",sum);전부 과정을 다 보여줌!   
    }printf("%d",sum);
}

//for는(식선언;조건문;변환식){구조}