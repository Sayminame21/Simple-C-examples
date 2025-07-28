#include <stdio.h>
#include <string.h>

char line[100];
long int value;
long int value_2;
char operator;
long int result;

int main(void){
	result= 0;
	printf("The result is :%ld\n",value); //the starting point

	printf(" press q to quit/n"); //quits program
	printf("insert value and operator:\n"); //display input message
	fgets(line,sizeof(line),stdin); // input value
	sscanf(line,"%ld%c",&value,&operator);


	while(1){
		if(value == 'q'){
			break;
		}

			if(operator == '+'){ //used to input the addition operator
			result+=value;
			printf("the result is: %ld\n",result);
		}
			if(operator == '-'){ //used to input the subtraction operator 
			result-=value;
			printf("the result is:%ld\n",result);
		}
			if(operator == '*'){ //used to input the multiplication operator
			result*=value;
			printf("the result is :%ld\n",result);
		}
			if(operator /= '/'){ //used to input the division operator
				if(value <= 0 ){
					printf("error detected");
					break;
				}
			result/=value;
			printf("the result is %d\n",result);
		}
		printf("result is :%ld\n",result);
		continue;

		return (0);
	}






}
