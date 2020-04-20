#include <iostream>

int main(){
    char x, y='a';
    scanf("%c", &x);
    while(x>'a'-1){
      printf("%c ",y++);
      x--;
      
    }
}
//문자열의 반복을 위해서는 높은 값,만큼 또는
//낮은 값 만큼의 반복이 필요!