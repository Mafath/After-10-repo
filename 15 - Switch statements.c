#include <stdio.h>

int main() {
	
//	char grade;
//	
//	printf("Enter a letter grade: ");
//	scanf("%c", &grade);
//	
//	if(grade == 'A'){
//		printf("Perfect!");
//	}
//	else if(grade == 'B'){
//	printf("You did good!");
//	}
//	else if(grade == 'C'){
//	printf("You did okay!");
//	}
//	else if(grade == 'D'){
//	printf("At least it's not an F");
//	}
//	else if(grade == 'F'){
//	printf("You FAILED!");
//	}
//	else{
//	printf("Please enter a valid grade");
//	}
	
	char grade;
	
	printf("Enter a letter grade: ");
	scanf("%c", &grade);
	
	switch(grade) {
		case 'A':
			printf("Perfect!");
			break;
		case 'B':
			printf("You did good!");
			break;
		case 'C':
			printf("You did okay!");
			break;
		case 'D':
			printf("At least it's not an F");
			break;
		case 'F':
			printf("You FAILED!");
			break;
		default:
			printf("Please enter a valid grade");
	}
	
	
	return 0;
}
