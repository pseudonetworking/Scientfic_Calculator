#include <stdio.h>
#include <math.h>

int main (void) {
    char operation;
    double num_one;
    double num_two;
    double result;
    while(1){
    printf("Enter your operation OR S for SQRT, L for logarithm\n");
    scanf(" %c" , &operation);
    if (operation == '+' || operation == '-' || operation == '*' || operation == '/' || operation == 'S' || operation == 'L') {
     printf(" %c selected.\n", operation);
     printf("Enter first number.\n");
     scanf(" %lf" , & num_one);
        printf("%lf\n" , num_one);
        if (operation == 'S') {
          result = sqrt(num_one);
         printf("The square root is %lf\n" , result);
       } else if (operation == 'L') {
              result = log(num_one);
             printf("%lf" , result);
           }
         else  {
               printf("Enter second number.\n");
     scanf(" %lf" , & num_two);
      printf(" %lf\n" , num_two);
           if (operation == '+') {
              result = num_one + num_two;
               printf("%lf\n" , result);
            }
           if (operation == '-') {
               result = num_one - num_two;
              printf("%lf\n" , result);
            }
          if (operation == '*') {
             result = num_one * num_two;
             printf("%lf\n" , result);
          }
            if (operation == '/') {
              if (num_two == 0.0) {
                printf("Undefined. Hint: You cannot divide by 0.\n");
              } else {
               result = num_one / num_two;
               printf("%lf\n" , result);
              }
            }
     }
    }
    else {
      printf("Invalid.\n");
      return 0;
    }
  }
  }
