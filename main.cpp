#include <iostream>

int main(){
    int m;
    
    reget:
    scanf("%d", &m);
    while(m==0) goto end;
    printf("%d\n", m);
    while(m!=0) goto reget;
    
    end:
    return 0;
  
  //1070의 문제의 if를 while로 바꿔주면 끝!


    //n의 숫자를 입력한다.
    //m의 값이 들어가고 밑에 점차 횟수는 줄어든다.
    //5가 1이 되면 마지막회차가 된다. 총 5번을 할 수 있다. 
    //끝
        
         
    
        //break;//있으나 없으나 차이 없음
           
}
//A는 아스키코드로 65에 해당하기 때문에 스위치의 정수만 사용이 가능한 사용에서 주소를 이용해서 사용이 가능!
//숫자는 따로 ''필요 없음!