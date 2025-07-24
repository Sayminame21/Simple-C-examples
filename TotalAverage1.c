/*computes the total and average of five numbers.*/

#include <stdio.h>

 int total [5]; /*Array is created*/
 int Total;
 int average;

int main(void)
{
   

    total[0] = 2;
    total[1] = 4;
    total[2] = 6;
    total[3] = 8;
    total[4] = 10;

    Total = total[0] + total[1] + total[2] + total[3] + total[4]; /*Array numbers*/
    average = Total /5;

    printf("total is %d\tand the average is %d\t", Total,average); /*display output*/

    return (0);
}
