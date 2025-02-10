#include <stdio.h>
int main(int argc, char **argv){

	int firstInt = 978;
	int *pointer;
	
	char testArray[200];
	char *arrayPoint;
	
	printf("size of char is %lu\n", sizeof(char));
	printf("size of short is %lu\n", sizeof(short));
	printf("size of int is %lu\n", sizeof(int));
	printf("size of long is %lu\n", sizeof(long));
	printf("size of long long is %lu\n", sizeof(long long));
	printf("size of float is %lu\n", sizeof(float));
	printf("size of double is %lu\n", sizeof(double));
	printf("size of char * is %lu\n", sizeof(char *));
	printf("size of int * is %lu\n", sizeof(int *));
	printf("size of long * is %lu\n", sizeof(long *));
	
	printf("The size of my character array is %lu\n", sizeof(testArray));
	arrayPoint = testArray;
	printf("The size of my character pointer is %lu\n", sizeof(arrayPoint));
	
	pointer = &firstInt;
    	printf("The size of my int pointer is %lu\n", sizeof(pointer));
    	printf("The size of what my integer pointer points at is %lu\n", sizeof(*pointer));
	

}
