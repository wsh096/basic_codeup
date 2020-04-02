#include <iostream>

int main(){

char data[2001];
fgets(data,2000,stdin);
printf("%s",data);
}

//fgets( ) 를 사용하면 공백문자가 포함되어잇는 문장을 입력받아 저장할 수 있다.
//char data[51] = ""; //최대 50문자까지 저장 가능