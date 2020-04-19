#include <iostream>

int main(){
    char a;
    scanf("%c",&a);
    switch(a){
        case 'A':
        printf("best!!!");
        break;
        case 'B':
        printf("good!!");
        break;
        case 'C':
        printf("run!");
        break;
        case 'D':
        printf("slowly~");
        break;
        default:
        printf("what?");
        break;//있으나 없으나 차이 없음
            }
}
//A는 아스키코드로 65에 해당하기 때문에 스위치의 정수만 사용이 가능한 사용에서 주소를 이용해서 사용이 가능!
