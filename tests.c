#include "stack.h"


int main() {
	int i = 0;
	stack * s = create_stack(10);
	for (i = 0; i < 10; i++)
		push(s,i);
	for (i = 0; i < 10; i++)
		printf("%d\n", pop(s));
	remove_stack(s);
	return 0;
}