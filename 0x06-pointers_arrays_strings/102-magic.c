#include <stdio.h>

int main(void)
{
	int k;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * Write your code
	 * Don't forget:
	 * you can't use a in new line of code
	 * you can't modify p
	 * you can write only one statement
	 * You are not allowed to code anything else than the line of code
	 */
	*(p + 5) = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
