#include <stdio.h>
#include <string.h>

#define NUM 25
#define LEN 1000


main()
{
    char temp[1000];
    int i = 0;
    char Strings[NUM][LEN];

    printf("Please enter %d strings, one per line:\n", NUM);
    for(i; i<25; i++){
        fgets(&Strings[i][0], LEN,stdin);
    }


    i=0;
    puts("\nHere are the strings in the order you entered:");
    for (i; i<25; i++){
        printf("%s",Strings[i]);
    }

    int j=1,k=0,l=0,m=0, sorted=1;   // line 26
    i=1;




    for(k=0;k<25;k++){
        for(i=1;i<25;i++){

            if(strcmp(Strings[i],Strings[i-1])<0){


                strcpy(temp,Strings[i-1]);
                strcpy(Strings[i-1],Strings[i]);
                strcpy(Strings[i],temp);

            }}}
    puts("\nIn alphabetical order, the strings are:");
    for(i=0;i<NUM;i++){
        printf("%s",Strings[i]);
    }
    return 0;
}
