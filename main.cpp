#include <iostream>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", (a&&!b)||(!a&&b) );
    }
//논리연산자 !(not), &&(and), ||(or), xor은? (a&&!b)||(!a&&b)//복잡하게 되어 있네 golanf은 a^b임 쉬움