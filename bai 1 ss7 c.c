#include<stdio.h>
int main(){
	int number;
	for(number = 1; number<=100;number++){
		if(number % 3 == 0){
			printf("boi so cua 3 la Fizz\n:");
		}
		if(number % 5 == 0){
			printf("boi so cua 5 la Buzz\n:");
		}
		if(number % 5 == 0 && number % 3 == 0){
			printf("boi cua so 3 va 5 la Fizz Buzz\n:");
		}
		printf("cac so nguyen tu 1 den 100 la :%d/n", number);
	}
}
