#include <stdio.h>


main()
{
int HW;
int print=1;
printf("Please enter a number from 1 to 5:\n");


 scanf("%d", &HW);

if(HW < 1 || HW >  5){
printf("Number is not in the range from 1 to 5\n");
return; 
}

while(HW > 0){
printf("%i Hello World\n", print);
HW = HW - 1;
print = print +1;
}

  
  return;
}
