#include<stdio.h>
#include<math.h>

int main()
{
    int num1,num2;
    char op;
    
    printf("Enter the two numbers :\n");
    scanf("%d %d", &num1 , &num2);            // read numbers
    
     printf("Enter the operator:\n"); 
     
       scanf(" %c",&op);                        //read operator
     
    switch(op)
    {
        case '+':                                //addition
        printf("The Result is :%d",(num1+num2));
        break;
        
          case '-':                            // substraction
        printf("The Result is :%d",(num1-num2));
        break;
        
          case 'x':                             //multiplication
        printf("The Result is :%d",(num1*num2));
        break;
        
          case '/':                                //division
        printf("The Result is :%d",(num1/num2));
        break;
        
        
        default:
        printf("Invalid Operator");
        break;
    }
}
