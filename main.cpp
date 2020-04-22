#include <iostream>

int main(){
    long int a,b,c ,s,i; 
    
    scanf("%ld%ld%ld%ld",&a,&b,&c,&s);
    for(i=1;i<s;i++){////for 반목문에서 가운데의 조건이 빠진 경우 무한 반복된다.
      a= a*b+c;
      
      //참이면 건너 띄고 반복함
      
    }printf("%ld ",a);
}