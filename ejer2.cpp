#include <stdlib.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
//
//   3 notas de alumnos y promedio/5
//
//   nf = ((n1*2)+n2+(n3*2))/5
//
void ejer2();
int main(int argc, char** argv) 
{
	ejer2();
}
void ejer2()
{

	//
	float n1,n2,n3,nf;
	int c;
	system("cls");	
	printf("\n\t\t ejer 2 - 3 NOTAS DE ALUMNOS Y PROMEDIO / 5");	
	printf("\n\t\t************************************************\n");	 
	c=1;
	do
	{
		//
		printf("\n\t\tIngrese nota 1: ");
	 	scanf("%f",&n1);	
		printf("\n\t\tIngrese nota 2: ");	
		scanf("%f",&n2);
		printf("\n\t\tIngrese nota 3: ");	 
		scanf("%f",&n3);
		nf=((n1*2)+n2+(n3*2))/5;	
		printf("\n\t\tLA NOTA FINAL ES $ %4.2f\n ",nf);
		c++;
	}while(c<=3);	
}
