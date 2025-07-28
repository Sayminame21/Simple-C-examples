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
	
	printf("insert value and operator:\n"); //display input message
	printf("or press q to quit");
	fgets(line,sizeof(line),stdin); // input value
	sscanf(line,"%ld%c",&value,&operator);

	printf("insert value\n"); //display input message
	fgets(line,sizeof(line),stdin); // input value
	sscanf(line,"%ld",&value_2);

	while(1){
		if(value == 'q'){
			break;
		}

			if(operator == '+'){ //used to input the addition operator
			result=value+value_2;
			printf("the result is: %ld\n",result);
		}
			if(operator == '-'){ //used to input the subtraction operator 
			result=value-value_2;
			printf("the result is:%ld\n",result);
		}
			if(operator == '*'){ //used to input the multiplication operator
			result=value*value_2;
			printf("the result is :%ld\n",result);
		}
			if(operator == '/'){ //used to input the division operator
				if(value == 0 & value_2 == 0){
					printf("error detected");
				}
			result=value/value_2;
			printf("the result is %d\n",result);
		}

		return (0);
	}






}
