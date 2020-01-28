#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
main() {
    char *str;
       str = (char *) malloc(20);
     int i;
    int total;
   do {

       fgets(str, 20, stdin);
       total = a_to_i(str);
       printf("%d\n", total);
   }while(total!=0);
    return 0;

}


int a_to_i(char* str){
int total =0;
int i;
 int length = strlen(str);
    for( i=0;i<strlen(str)-1;i++){
        if((int)str[i]==0){
            return total;

        }
        else{
            total = total*10 + ((int)str[i]-48);

        }
    }
    //total= total*10 + ((int)str[length-1]-48);
    return total;
}


