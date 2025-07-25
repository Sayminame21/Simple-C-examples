/*takes a first name and a last name and combines the two strings.*/
/*s.....strcpy(string1, string2)Copy string2 into string1.......
......strcat(string1, string2)Concatenate string2 onto the end of string1....
......length = strlen(string)Get the length of a string.......*/

#include <stdio.h>
#include <string.h>

char name[50]; /*first name of person*/
char name_2[20]; /*second name of person*/
char full_name[70];/* name in full*/
int main(void)
{
    strcpy(name,"Emmanuel"); /*names are initialized*/
    strcpy(name_2,"Michelo"); 

    strcat(full_name, "Emmanuel");
    strcat(full_name, name_2);
    printf("%s\n",full_name);
    return(0);
}