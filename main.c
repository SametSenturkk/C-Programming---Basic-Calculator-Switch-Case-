#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Turkish");
	
	int number1,number2,result;
	char operation;
	
	printf("Bir Say� Giriniz: ");
	scanf("%d",&number1);
	printf("�kinci Say�y� Giriniz: ");
	scanf("%d",&number2);
	
	printf("��lem Se�iniz (+ - / *): ");
	scanf(" %c",&operation);
	
	if(operation=='+'){
		printf("Toplam: %d",number1+number2);
		
	}
	else if(operation=='-'){
		printf("Toplam: %d",number1-number2);
	}
		else if(operation=='*'){
		printf("Toplam: %d",number1*number2);
	}
		else if(operation=='/'){
		printf("Toplam: %d",number1/number2);
	}
}
