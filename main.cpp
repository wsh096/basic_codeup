#include <iostream>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", a<<b );
    }

//int a=1, b=10; 
//printf("%d", a << b); 
//2^10 = 1024 가 출력된다.
//밀어낸다는데 이해가 잘 안 되네...
//a = 1 이면 값의 결과의 a^b가 2^b가 됨???
//메모리값 절약//안전성 iostream이 우수
//진짜 그냥 비트연산이어서 그럼