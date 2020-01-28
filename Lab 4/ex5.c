#include <stdio.h>
/*long int multiplyNumbers(int n);

int main()
{

int n;
do{ 
  
    printf("Enter a positive integer: ");
    scanf("%d", &n);

 
    printf("Factorial of %d = %ld", n, multiplyNumbers(n));
  printf("\n"); 
   } while(n!=0);


printf("\n");


}










long int multiplyNumbers(int n)
{
    if (n >= 1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}
*/


main()
{
  int i, f;

  do{
    printf("Enter a number: ");
    scanf("%d", &i);
    f = factorial(i);
    printf("%d! = %d\n", i, f);
  } while(i!=0);
  return;
}

int factorial(int i){
  if(i==0 || i==1){
    return 1;
  } 
  else{
    return i * factorial(i-1);
  }
}
