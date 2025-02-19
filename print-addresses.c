#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){

	for (int i = 1; i < argc; i++) {
        	long int decimalAddress = strtol(argv[i], NULL, 10);
        	long int fortyeight = decimalAddress & 0xFFFFFFFFFFFF; 
        	
        	printf("0x%012lX\n", fortyeight);
    	}

}
