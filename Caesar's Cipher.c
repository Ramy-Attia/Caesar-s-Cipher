#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char ch;


int main (){
/*the next two lines are used as pointers to files I will be using in this code*/
FILE *pfile;
FILE *second;

pfile = fopen("clear_message.txt","r");/*this line and the following if statement opens the 'clear_message' file and reads it with the if statement used as error handling if the file does not open*/
if (pfile == NULL){
    printf("error opening this file!\n");
    return 1;
}
second = fopen("secretMessage.txt","w");/*this line and the following if statement opens the 'secretMessage' file with 'w' to write to the file with the if statement used as error handling if the file does not open*/
if (second == NULL){
    printf("error opening this file!\n");
    return 1;
}
while ((ch= fgetc(pfile))!= EOF){/*the following while loop will read a character in the 'clear_message'file
        and then using the if statement will add 3 to the ASCII value of the character then print it in the
        'secretMessage' file as a character and it will continue doing so until the error code EOF is reached by program meaning the end of the file */
 if (ch >= 'A' && ch <= 'Z') {

             ch = ch + 3;
             printf("%c", ch);
        }

        else if (ch >= 'a' && ch <= 'z') {

            ch= ch + 3;
            printf("%c", ch);
        }

        else {
            printf("%c", ch);
        }


fprintf(second,"%c",ch);

}

/*the next two lines will close the two files used*/
fclose(pfile);
fclose(second);
}
