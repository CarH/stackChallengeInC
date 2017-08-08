#include <stdio.h>
#include <limits.h>
#include "stack.h"

/**
 * Perform some tests in stack
 * 
 */
int main(int argc, char const *argv[])
{
	initializeStacks();

	printf("MIN: %d. Epected: %d \n", min(), INT_MIN);

	printf("Pushed 2\n");
	push(2);
	printf("MIN: %d. Epected: 2\n", min());

	printf("Pushed 4\n");
	push(4);
	printf("MIN: %d. Epected: 2\n", min());

	printf("Pushed 4\n");
	push(4);
	printf("MIN: %d. Epected: 2\n", min());

	printf("Pushed 1\n");
	push(1);
	printf("MIN: %d. Epected: 1\n", min());

	printf("Pushed 1\n");
	push(1);
	printf("MIN: %d. Epected: 1\n", min());


	printf("Popped %d\n", pop());
	printf("MIN: %d. Epected: 1\n", min());

	printf("Popped %d\n", pop());
	printf("MIN: %d. Epected: 2\n", min());

	printf("Popped %d\n", pop());
	printf("MIN: %d. Epected: 2\n", min());

	printf("Popped %d\n", pop());
	printf("MIN: %d. Epected: 2\n", min());

	printf("Popped %d\n", pop());
	printf("MIN: %d. Epected: %d\n", min(), INT_MIN);
	
	return 0;
}