#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

int main(int argc, char *argv[]) 
{
	add('1');
	add('3');
	add('2');
	add('4');
	add('7');
	add('0');
	add('9');
	print();
	printf("\n");
	
	insert(2,'6');
	print();
	printf("\n");
	
	printf("%d", size());
	return 0;
}
