#include <iostream>

int main(){
    int a,i; 
    
    scanf("%d",&a);
    
    for(i=1;i<=a;i++){
      if(i%10==3||i%10==6||i%10==9){
        printf("%s ","X");
        }else{
          printf("%d ",i);
          }
    }
} 
//20까지 커버되는 삼육구
//for{
//  for{
//구조 가능!!
//}}

