#include <stdlib.h>
#include <stdio.h>

class stack {
	int size;
	int crt;
	int * arr;	
};

typedef enum {
	ESUCCESS = 0,
	EINVARG,
	EFULL,
	EEMPTY,
	EALLOC
} STACK_ERR;

public:
	void create_stack(int size, STACK_ERR *err);
	void remove_stack (STACK_ERR *err);
	int pop(STACK_ERR *err);
	void push (int val, STACK_ERR *err);

private:
	int size;
	int crt;
	int *arr;