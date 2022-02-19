#include "stack.h"

void stack::create_stack(int sz, STACK_ERR *err) 
{
	if (sz <= 0) {
		if (err != NULL)
			*err = EINVARG;
		fprintf(stderr, "Size error\n");
		return NULL;
	};
	if ((arr = (int*)malloc(sz * sizeof(int))) == NULL) {
		fprintf(stderr, "Array ERROR\n");
		return NULL;
	}
	size = sz;
	crt = 0;
}

void stack::remove_stack(STACK_ERR *err) 
{
	if ((arr == NULL) {
		fprintf(stderr, "Array ERROR\n");
		return NULL;
	}
	free (arr);
}

int stack::pop(STACK_ERR *err) 
{
	if (crt == 0) {
		fprintf(stderr, "Stack is empty\n");
		return -1;
	}
	return arr[crt++];
}

void stack::push(int val, STACK_ERR *err) 
{
	if (crt == size) {
		fprintf(stderr, "Stack is full\n");
		return;
	}
	arr[crt++] = val;
}
	