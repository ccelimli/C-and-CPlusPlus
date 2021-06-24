/*
 * stack.h
 *
 *  Created on: Nov 16, 2020
 *  Full Name: Cemal Celimli
 * 	Number: 18110131059
 * 
 */

#ifndef STACK_H_
#define STACK_H_
#include <stdbool.h>
#define size 3
typedef struct st{
	int top;
	int sk[size];
}stack;

bool stack_empty(stack *s);

void push(stack *s, int x);

int pop(stack *s);


#endif /* STACK_H_ */
