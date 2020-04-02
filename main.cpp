#include <iostream>

int main(){

char a, b;
scanf("%c %c", &a, &b); 
printf("%c %c", b, a);

}

//여기서는 %c%c로 붙여쓰게 되면 문자가 구분이 안 되기 때문에 입력 값도 떨어뜨려서 해준다.!
//%d%d는 가능