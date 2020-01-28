#include <stdio.h>  /* Need for standard I/O functions */
#include <string.h> /* Need for string functions */
#include <stdlib.h>


#define NUM 25   /* number of strings */
#define LEN 1000  /* max length of each string */

main()
{
    char* Strings[NUM];
    char temp[LEN];

    printf("Please enter %d strings, one per line:\n", NUM);

    int i;
    for (i=0; i<NUM; i++ ) {

        fgets(temp, LEN,stdin);
        Strings[i] = (char *)malloc(strlen(temp)+1);
        strcpy(Strings[i],temp);
    }
    puts("\nHere are the strings in the order you entered:");

    for (i=0; i<25; i++){
        printf("%s",Strings[i]);
    }

    /* Bubble sort */
    /* Write code here to bubble sort the strings in ascending alphabetical order
       Your code must meet the following requirements:
          (i) The comparison of two strings must be done by strcmp() or strncmp().
         (ii) The swap of two strings must be done by swapping pointer values.
              You must not swap two string using strcpy()/strncpy() or using your
              own loop to swap them a character at a time.
    */

    int k;
    char *tempReg;
    char *tempReg2;




    for(k=0;k<25;k++){
        for(i=1;i<25;i++){


            if(strcmp(Strings[i-1],Strings[i])>0){
                tempReg= Strings[i];
                tempReg2= Strings[i-1];
                Strings[i]=tempReg2;
                Strings[i-1]=tempReg;

            }}}

    /* Output sorted list */

    puts("\nIn alphabetical order, the strings are:");
    /* Write a for loop here to print all the strings. */
    for (i=0; i<25; i++){
        printf("%s",Strings[i]);
    }

    /* Write a loop here to use free() to free up space allocated
       for all of the strings above.  */

    for(i=0;i<25;i++){
        free(Strings[i]);
    }

    return 0;
}
