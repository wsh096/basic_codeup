#include <iostream>
int main(){
    int a;
    scanf("%d",&a);
    printf("%d", ~a);
}
//비트단위연산자~(bitwise not), &(bitwise and), |(bitwise or), ^(bitwise xor),<<(bitwise left shift), >>(bitwise right shift)
//~n = -n - 1//-n = ~n + 1 과 같은 관계로 표현된다.
//예를 들어 1이 입력되었을 때 저장되는 1을 32비트 2진수로 표현하면        00000000 00000000 00000000 00000001 이고,
//~1은 11111111 11111111 11111111 11111110 가 되는데 이는 -2를 의미한다.
//이 관계를 그림으로 그려보면 마치 원형으로 수들이 상대적으로 배치된 것과 같다.

