#include <iostream>

int main(){
//일단 비워두고 입력 받으려 하는 상태
char data[51]="";
scanf("%s",data);
printf("%s",data);
}

//문자 하나는 %c였지만 %string문자배열은 %s로 하고 아예 내장 함수여서 &data와 같은 형태가 불필요