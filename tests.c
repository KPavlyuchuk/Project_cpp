#include "stack.h"
#define N 10

int main() {
	printf("Test 1: Create\n");
	stack * s;
	if((s = create_stack(-1)) != NULL)
		printf("test 1.1 failed\n");
	else 
		printf("test 1.1 passed\n");
	////
	if ((s = create_stack(N)) == NULL)
		printf("test 1.2 failed\n");
	else 
		printf("test 1.2 passed\n");
	////
	printf("Test 2: Push\n");
	int i = 0;
	for (i = 0; i < N; i++)
		push(s,i);
	push(s, 10);
		printf("test 2.1 passed\n");
	for (i = 0; i < N; i++) {
		int j = pop(s);
		if (j == -1)
			printf("test 2.2 failed\n");
		else 
			printf("test 2.2 passed\n");
		printf("%d\n", j);
	}
	push(NULL, 1);
		printf("test 2.3 passed\n");
	/////
	printf("Test 3: Pop\n");
	if (pop(s) != -1)
		printf("test 3.1 failed\n");
	else 
		printf("test 3.1 passed\n");
	pop(NULL);
		printf("test 3.2 passed\n");
	/////
	printf("Test 4: Remove\n");
	remove_stack(s);
	printf("test 4.1 passed\n");
	return 0;
}