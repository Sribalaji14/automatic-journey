
#include  <stdio.h>
#include <math.h>
int main(){

    printf("===== ===== ===== CALCULATOR ===== ===== =====\n");
    float a = 0.0f;
    float b = 0.0f;
    float tot = 0.0f;
    char operator = '\0';

    printf("ENTER THE FIRST NUMBER: ");
    scanf("%f", &a);

    printf("ENTER THE SECOND NUMBER: ");
    scanf("%f", &b);

    printf("WHAT OPERATION TO PEROFRM (+,-,*,/): ");
    scanf (" %c", &operator );

    switch(operator){
        case '+':
        tot = a + b;
        printf("THE TOTAL IS %f", tot);
        break;

        case '-':
        tot = a - b;
       printf("THE TOTAL IS %.2f", tot);
       break;
       case '*':
       tot = a * b;
       printf("THE TOTAL IS %.2f", tot);
       break;
       case '/':
       if(b== 0){
        printf("CANNOT DIVIDE BY ZERO!!");
       }else
       {
        tot = a / b;
        printf("THE TOTAL IS %.2f", tot);

       }
       break;



       default:
       printf("ENTER AN operator");
       break;

    }
}
