#include <iostream>

int main(){
  unsigned int a, b, c;
  scanf("%d %d %d",&a, &b, &c);
  printf("%d\n%.1f", a+b+c, (float)(a+b+c)/3);
}

//정수를 실수로 바꿔주고 (float)/소수점 1째 자리까지 나오게 .1f 사용//평균 갯수만큼 괄호로 나누기