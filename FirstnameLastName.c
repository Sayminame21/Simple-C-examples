/*Suppose we wanted to change our name program to ask the user for his first and
last name*/

#include <stdio.h>
#include <string.h>

//Arrays 

char first [20];
char last [20];
char full [40];

int main(void)
{ 
    //input first name and initialize it
    printf("what is your first name\n");
    fgets(first,sizeof(first),stdin);
     first[strlen(first)-1] = '\0';  //trims off the extra character
   

    //input last name and initialize it
    printf("what is your last name\n");
    fgets(last,sizeof(last),stdin);
    last[strlen(last)-1] = '\0';

    strcpy(full,first);
    strcat(full," ");
    strcat(full,last);
   
    
    printf("my name is %s\n",full);
    return(0);

    

}