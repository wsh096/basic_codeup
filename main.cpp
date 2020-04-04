#include <iostream>

int main(){
  unsigned int a, b;
  scanf("%d %d",&a, &b);
  printf("%d\n%d\n%d\n%d\n%d\n%.2f\n", a+b, a-b,a*b,a/b,(float)a/b);
}

//C언어에서 정수/정수 연산의 결과는 정수(몫)로 계산된다.
//실수/정수, 정수/실수, (float)정수/정수, 정수/(float)정수 등의 연산 결과는 실수 값으로 계산된다.//