#include <stdio.h>

int main()
{
	int a = 10;
	int *pa = &a;
	
	printf("a = %x\n", a);     // value of variable a
	printf("&a = %x\n", &a);   // address of variable a
	printf("pa = %x\n", pa);   // value of variable pa 
	printf("&pa = %x\n", &pa); // address of variable pa
	printf("*pa = %x\n", *pa); // value of referenced by variable a
	
	return 0;
}