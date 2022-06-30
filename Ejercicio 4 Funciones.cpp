//Carlos Moya C.I: 31317884
//Ejercicio 4 Funciones
#include <stdio.h>
#include <math.h>
float ecuacion(float a, float b, float c)
{
	float x1, x2, elevado;
	elevado = pow(b, 2.0)-4*a*c;
	if(elevado > 0.0)
	{
		printf("\t\tLas dos raices son reales");
		x1 = ((-b+sqrt(elevado))/(2.0*a));
		x2 = ((-b-sqrt(elevado))/(2.0*a));
		printf("\n\tEl valor de x1=%.2f y el valor de x2=%.2f", x1,x2);
	}
	else{
		if(elevado == 0.0)
		{
			x1=(-b)/(2.0*a);
			x2=(-b)/(2.0*a);
			printf("\t\tLa ecuacion solo tiene una raiz");
			printf("\n\tEl valor de x1=%.2f y el valor de x2=%.2f", x1,x2);
		}
		else{
			printf("\t\tNo exixte raiz real");	
		}
	}
	return elevado;
}
float ecuacion(float a, float b, float c);
main()
{
	float xs, xv, xl, resultado;
	printf("\t\tIngrese el valor de a ");
	scanf("%f", &xs);
	printf("\t\tIngrese el valor de b ");
	scanf("%f", &xv);
	printf("\t\tIngrese el valor de c ");
	scanf("%f", &xl);
	resultado = ecuacion(xs,xv,xl);
	return 0;
}