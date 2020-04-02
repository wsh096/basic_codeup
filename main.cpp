#include <iostream>

int main(){
  char d[20];
  scanf("%s",d);
  for(int i=0; d[i] != '\0'; i++)
  {
  printf("\'%c\'\n",d[i]);
  }
}
//문자로는 '\0', 아스키문자의 정수값은 0을 의미하며 NULL 로도 사용할 수 있다.
//!=아니다 기호
//for문(초기식(문자타입 알려줘야 함;조건식;변환식)