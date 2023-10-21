#include<stdio.h>  
#include<math.h>                         //run using gcc calc.c -o calc
                                            //run .\calc

int main()  {

    char opt;
    double x, y, res;

                                                       //error removed by eliminating while (1) loop
      printf("WHAT TO PERFORM : \n (+, -, *, /, ^, $)\n");           
      scanf("%c", &opt); 

      if (opt != '+' && opt != '-' && opt != '*' && opt != '/' && opt != '^' && opt != '$') {
        printf("INVALID operation\n");
        return 1;
    }

      printf("ENTER ANY TWO NUMBERS : \n");
      scanf("%lf %lf", &x, &y);

    switch(opt)  {

      case '+': 
       printf("%.2lf + %.2lf = %.2lf \n",x, y, x+y);
       break;

      case '-' :
       printf("%.2lf - %.2lf = %.2lf\n", x, y, x-y);
       break;

      case '*':
       printf("%.2lf * %.2lf = %.2lf\n", x, y, x*y);
       break;

       case '/' :
       if (y == 0) {
                printf("Division by zero is not allowed.\n");
            } else {
       printf("%.2lf / %.2lf = %.2lf\n", x, y, x/y);   }
       break; 

       case '^' :
       printf("%.2lf^%.2lf = %.2lf\n", x, y, pow(x,y) );
       break;

       case '$' : 
       if (y == 0) {
                printf("Taking the 0th root is not allowed.\n");
            } else {                                                          //for y th root of x
       printf("%.2lf^(1/%.2lf) = %.2lf\n", x, y, pow(x, 1/y));    }
       break;
        
       default : 
       printf("INVALID");
    }
  
    return 0;
}
          
    
