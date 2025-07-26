/*Write a program to find the square of the distance between two
points. (For a more advanced problem, find the actual distance. This problem
involves using the standard function sqrt. Use your help system to find out more
about how to use this function.*/
/*Thinking process was as follows I created a mid-point then calculated the
combined distance*/

#include <stdio.h>
#include <string.h>
#include <math.h>

char line[100];
int point_1; //
int actual_dist;// actual distance covered
int final;

int main(void){
    printf("enter point_1 distance"); //input first distance 
    fgets(line,sizeof(line),stdin); 
    sscanf(line,"%d",&point_1);

    actual_dist = point_1*point_1;//the square of the distance
    final = sqrt(actual_dist);
    printf("the actual distance covered is %d\t",final);
    return (0);

}
