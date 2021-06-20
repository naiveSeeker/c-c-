#include <stdio.h>

int main(void) {
	//This will give a warning. \c is an unknown escape sequence.  
	printf("\cHello world!\n");
}
