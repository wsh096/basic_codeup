#include <iostream>

int main(){
    int a,b; 
    
    scanf("%d",&b);
    for(a=1;a<=b;a++){////for 반목문에서 가운데의 조건이 빠진 경우 무한 반복된다.
      if(a%3==0)
      continue;//참이면 건너 띄고 반복함
      printf("%d ",a);
    }
}