#include <iostream>

int main(){
    int a;
    scanf("%d",&a);
    if(a<=100&&a>=90){
        printf("%s","A");  
    }
    else{
      if(a<=89&&a>=70){
        printf("%s","B");
      }
      else{
        if(a<=69&&a>=40){
          printf("%s","C");
        }
        else{
          if(a<=39&&a>=0){
            printf("%s","D");
          }
        }
      }
    }
}

