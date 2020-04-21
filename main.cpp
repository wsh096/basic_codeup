#include <iostream>

int main(){
    int i,j,k, c=0,r,g,b; 
    
    scanf("%d%d%d",&r,&g,&b);
    
    for(i=0;i<r;i++)
      for(j=0;j<g;j++)
        for(k=0;k<b;k++)
        {
          printf("%d %d %d\n",i, j, k);
          c++; //C++을 통해서 반복횟수의 경우의 수를 출력할 수 있다!         
        }printf("%d",c);
}
          //i<r을 통해서 0~n-1까지 구할 수 있어서 n개를 구할 수 있다!
//빛의 강약에 따라 0 ~ n-1 까지 n가지의 빛 색깔을 만들 수 있다.

