/*computes the total and average of five numbers.*/

#include <stdio.h>

int main(void)
{
    int total [5] = {2,4,6,8,12}; 
    int Total;
    int average;

    /*int total[5];
    total[0] = 2;
    total[1] = 4;
    total[2] = 6;
    total[3] = 8;
    total[4] = 12; can also be used to initialize the array
    but it is not recommended as it is less readable.
    */

  
    Total = total[0] + total[1] + total[2] + total[3] + total[4]; /*Array numbers*/
    average = Total /5;

    printf("total is %d\tand the average is %d\t", Total,average); /*display output*/

    return (0);
}
