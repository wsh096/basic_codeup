#include <iostream>
int main(){
  int i, n ,s=0;
  scanf("%d", &n);
  for(i=0; ;i++){
    s+= i;
    if(s>=n) break;
  }
  printf("%d", i);
  return 0;//없어도 됌
}
