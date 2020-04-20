#include <iostream>

int main(){
    char x;
   find:
  scanf("%c",&x);
  printf("%c\n",x);
  if(x!='q') goto find; 
}


//for는(식선언;조건문;변환식){구조}