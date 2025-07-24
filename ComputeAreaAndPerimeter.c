/* Write a program to compute the area and perimeter of a rectangle
with a width of three inches and a height of five inches. What changes must be made
to the program so that it works for a rectangle with a width of 6.8 inches and a
length of 2.3 inches?*/

#include <stdio.h>

int main(void)
{
    int area,perimeter,width,height;  /*declaration of integers variables*/
    float area_2,perimeter_2,width_2,height_2;/*declaration of floating point variables*/

    width = 3;
    height = 5;
    width_2 = 6.8;
    height_2 = 2.3;

    printf("integer area and perimeter\n");
    area = width * height; /*area and perimeter using integers*/
    perimeter = width + height; 
    printf("%2d\t%2d\n",area,perimeter);

    printf("floating point area and perimeter\n");
    area_2 = width_2 * height_2; /*area and perimeter using floating point*/
    perimeter_2 = width_2 + height_2; 
    printf("%2.2f\t%2.2f\n",area_2,perimeter_2);

   

}