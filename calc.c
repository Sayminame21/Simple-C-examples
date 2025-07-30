/*This a four function calculctor that adds,subtracts,divides and multiplies values*/ 

#include <stdio.h>
#include <string.h>

char line[100];
int value;
char operator;
int result;

int main(void){

	result = 0; //program begins with the expression 0

	while(1){

        printf("the result is %d\n",result); // input results
		printf("input the value and operator\n"); //input value and operator
		
		fgets(line,sizeof(line),stdin);
		sscanf(line,"%d %c",&value,&operator);

		if(value == 'q'){
			break;
		}
		switch(operator){  //addition operator
			case '+' :
			result+=value;
			break; 
		}
		switch(operator){ //subtraction  operator
			case '-' :
			result-=value;
			break; 

		}
		switch(operator){ //divison operator
			case '/' :
			result/=value;
			break; 
		}
		switch(operator){  // multiplication operator
			case '*' :
			result*=value;
			break; 
		}
	}
    printf("the result is %d/n",result);


}


