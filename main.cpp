#include <iostream>

int main(){
    int a,b,c, day; 
    
    scanf("%d%d%d",&a,&b,&c);
    ////for 반목문에서 가운데의 조건이 빠진 경우 무한 반복된다.
      for(day=1; ;day++){
      
      if(day%a==0&&day%b==0&&day%c==0)
      
      break;
      }printf("%d ",day);
      //참이면 건너 띄고 반복함
     
}