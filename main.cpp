#include <iostream>

int main(){
  int a,b,c,d,e;
  scanf("%1d%1d%1d%1d%1d",&a,&b,&c,&d,&e);
  
  printf("[%d]\n[%d]\n[%d]\n[%d]\n[%d]\n",a*10000,b*1000,c*100,d*10,e*1);
  }

//문자로는 '\0', 아스키문자의 정수값은 0을 의미하며 NULL 로도 사용할 수 있다.
//!=아니다 기호
//for문(초기식(문자타입 알려줘야 함;조건식;변환식)