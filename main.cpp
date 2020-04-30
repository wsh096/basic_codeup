#include <iostream>

int main(){
  int n, i, j, x, y, a[20][20]={};//x,y 배열 생성
  scanf("%d",&n);
  for(i=1;i<=n;i++){//n번 반복하게 만들기
  scanf("%d%d",&x,&y);
  a[x][y]=1;//이 과정을 통해서 n번의 입력이 가능해지고 입력된 값은a[][]의 빈 배열의 특정 부분을 1로 바꾸어준다.
  }//바꾸었으니까 출력을 해준다.
  for(i=1;i<=19;i++){
    for(j=1;j<=19;j++){
      printf("%d ",a[i][j]);
      //printf("\n");j기준으로 줄 바꿈이 생기면 전부 일직선!
    }
    printf("\n");//줄바꿔줌 i를 기준으로 줄 바뀜!
  }
}
    
