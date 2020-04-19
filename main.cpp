#include <iostream>

int main(){
    int a;
    scanf("%d",&a);
    switch(a){
        case 3:
        case 4:
        case 5:
        printf("spring");
        break;
        case 6:
        case 7:
        case 8:
        printf("summer");
        break;
        case 9:
        case 10:
        case 11:
        printf("fall");
        break;
        case 12:
        case 1:
        case 2:
        printf("winter");
        break;
        default:
        printf("it is wrong. please, retry!");
        //break;//있으나 없으나 차이 없음
            }
}
//A는 아스키코드로 65에 해당하기 때문에 스위치의 정수만 사용이 가능한 사용에서 주소를 이용해서 사용이 가능!
//숫자는 따로 ''필여 없음!