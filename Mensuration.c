/*Write a program that prints the perimeter of a rectangle given its
height and width. perimeter = 2 ·(width + height)*/


#include <stdio.h>
#include <string.h>

char line [100];
int width;
int height;
int perimeter;

int main(void){

    printf("enter width\n"); //input width
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%d",&width);

    printf("enter height\n"); //input height
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%d",&height);

    perimeter = 2 * (height + width); //calculate perimeter
    printf("%d\n",perimeter); //output 



}








