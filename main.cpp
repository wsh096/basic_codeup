#include <iostream>

int main(){
    long int a,b,s,i; 
    
    scanf("%ld%ld%ld",&a,&b,&s);
    for(i=1;i<s;i++){////for 반목문에서 가운데의 조건이 빠진 경우 무한 반복된다.
      a*=b;
      
      //참이면 건너 띄고 반복함
      
    }printf("%ld ",a);
}