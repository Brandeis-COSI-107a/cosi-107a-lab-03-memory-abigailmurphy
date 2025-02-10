#include <stdio.h>
#include <stdlib.h>

int x;

void testFunction(){
	
}



int main(int argc, char **argv){
	int stack_variable;
	const char *ptr = "Initialized data";
	

	printf("stack variable: %p\n", &stack_variable);
	printf("initialized data: %p\n", ptr);
	printf("uninitialized variable: %p\n", &x);
	printf("main: %p\n", main);
	printf("function: %p", testFunction);
	

}
