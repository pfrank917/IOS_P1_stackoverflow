 // Stack overflow example program

#include <stdio.h>
#include <stdlib.h>

/* Main ========================================================= */
int main(int argc, char * argv[])
{
    //declare password variable and allocate memory
    char  *shortpword = (char*) malloc(12*+1);
    //char *shortpword;
    shortpword = argv[1];

    //declare integer to check if user is authenticated
    int logintoken = 0;

    printf("Login token currently reads: %d \n", logintoken);

    printf("Here is your passcode as you entered it: %s \n", shortpword);

  //validate password

  if(logintoken == 0)
    printf("Login DENIED \n");
  else
    printf("Login ACCEPTED \n");

    printf("Login token currently reads: %d \n", logintoken);

}
