#include <stdlib.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
//
//   notas de alumnos y promedio
//
void ejer1();
int main(int argc, char** argv) 
{
	ejer1();
}
void ejer1()
{

	//
	float n1,n2,n3,promedio,c;
	char op;
	op='S';
	system("cls");	
	printf("\n\t\t ejer 1 - 3 NOTAS DE ALUMNOS Y PROMEDIOS");	
	printf("\n\t\t************************************************\n");	 
	c=1;
	do
	{
		//
		printf("\n\t\tIngrese nota 1 ");
	 	scanf("%f",&n1);	
		printf("\n\t\tIngrese nota 2 ");	
		scanf("%f",&n2);
		printf("\n\t\tIngrese nota 3 ");	 
		scanf("%f",&n3);
		promedio=(n1+n2+n3)/3;	
		printf("\n\t\tEL PROMEDIO  ES $ %4.2f\n ",promedio);
		c++;
	}while(c<=3);	
}
