#include <iostream>

int main(){
    int a;
    
    reload:
    
    scanf("%d", &a);
    if(a ==0) goto end;
    printf("%d\n", a);
    if(a!=0) goto reload;

    end:
    return 0;
    
    
        
         
    
        //break;//있으나 없으나 차이 없음
           
}
//A는 아스키코드로 65에 해당하기 때문에 스위치의 정수만 사용이 가능한 사용에서 주소를 이용해서 사용이 가능!
//숫자는 따로 ''필요 없음!