#include <iostream>

int main(){
    int sum=0;
    int i,n;//합쳐서 int i, n, s=0;으로 써도됨!
   scanf("%d", &n);
   for(i=0; sum<n;i++){//sum<n이 없어도 알아서 종료할 시점을 밑의 브레이크가 찾아주므로 여백으로 ;  ;둬도 된다!
     sum=sum+i;//sum+=i라고 써도 됨
     if(sum>=n)
     break;
     
     
   
   }
   printf("%d",i);
}

//if() break;//는 종료 구문이다!

