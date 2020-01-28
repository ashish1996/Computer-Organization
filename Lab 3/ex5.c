#include <stdio.h>

int main()
{
  int carry = 0, primeBase =2, x;

	while(carry ==0){
		printf("Number [1-100]: ?\n");
		scanf("%d",&x);
		if(x==0){
			printf("Done\n");
			break;
		}

		if(x>100){
			printf("Invalid Number\n");
			break;
		}
		
	        if(x==1){
                        printf("Non-prime (special case)\n");
               // break;
		}

		for(primeBase =2; primeBase <= x; primeBase++){
			/* if(x==1){
                        printf("Non-prime (special case)\n");
               		 break;
			}*/
			if(x%primeBase == 0){
				if(x==primeBase){
					printf("Prime\n");
					break;
				}
				printf("Non-prime, divisible by %d\n", primeBase);
				break;
			}	
		}
		
} 
  return;
}
