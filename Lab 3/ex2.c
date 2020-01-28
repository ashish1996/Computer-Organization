#include <stdio.h>


main()
{
  float a, b, c, d, e;
  
  printf("Enter five floating-point numbers:\n");
  scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);


float Sum = a + b + c + d + e;
float Product = a*b*c*d*e;
float mean = Sum/5;

  printf("Sum is %.4f\n", Sum );
printf("Mean is %.4f\n", mean);
 printf("Product is %.4f\n", Product);
  
  return;
}
