#include <stdio.h>
#include <string.h>
#define LEN 20

void i_to_a(char *str, int num, int base) {
    int i = 0;
    int j=0;

    while(num != 0) {
        str[i++] = num%base+'0';
        num = num/base;
    }

    for(j=0; j<i/2; ++j) {

        char c = str[j];
        str[j] = str[i - j - 1];
        str[i - j - 1] = c;

    }
}

main() {
    char String[LEN];
    int myInt=1;

    while(myInt !=0) {

        int i = 0;
        for (i = 0; i < LEN; i++) {
            String[i] = '\0';
        }

        scanf("%d", &myInt);
        if (myInt == 0) {
            String[0] = '0';
            printf("%s\n", String);
        } else {
            i_to_a(String, myInt, 10);
            printf("%s\n", String);
        }

        //return;
    }

}
