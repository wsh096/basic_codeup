#include <iostream>

int main(){
    long int h,b,c,s; 
    
    scanf("%ld%ld%ld%ld",&h,&b,&c,&s);
    printf("%.1f MB",float(h*b*c*s)/(1024*1024*8));
}
          //i<r을 통해서 0~n-1까지 구할 수 있어서 n개를 구할 수 있다!
//빛의 강약에 따라 0 ~ n-1 까지 n가지의 빛 색깔을 만들 수 있다.
//(1024*1024*8)_이게 메가바이트 단위
///long int로 해야지 메가바이트 정도 단위의 값을 음수로 바뀌지 않고 취급 가능
