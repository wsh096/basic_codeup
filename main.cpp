#include <iostream>

int main(){

int y, m, d;
scanf("%d.%d.%d",&y,&m,&d);
printf("%04d.%02d.%02d",y,m, d);
}

//마지막 출력 때 %02를 사용하거나 그 이상의 숫자를 사용해서 yyyy.mm.dd의 형태를 지정해줄 수 있다.