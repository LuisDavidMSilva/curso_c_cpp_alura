#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int a = 3;
	int b = abs(-3);
	
	//double pontos = a / (double)b; //casting
	//printf("%d %d\n", a, b);
	
	int segundos = time(0);
	
	srand(segundos);	
	
	int n1 = rand();
	int n2 = rand();
	
	printf("%d %d\n", n1, n2);
}
