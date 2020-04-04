#include <iostream>

int main(){
  unsigned int a, b;
  scanf("%u %u",&a, &b);
  printf("%u", a%b);
}

//나머지 출력에는 cpp에서는 %를 사용한다
//음이 아닌 정수를 하기 위해서 unsigned를 사용
