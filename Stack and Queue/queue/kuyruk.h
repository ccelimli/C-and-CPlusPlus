/*
 * kuyruk.h
 *
 *  Created on: Nov 16, 2020
 *  Full Name: Cemal Celimli
 * 	Number: 18110131059
 */

#ifndef KUYRUK_H_
#define KUYRUK_H_
#include <stdio.h>
#define size 5

typedef struct q{
	int head;
	int tail;
	int deger[size];
}queue;


void enqueue(queue *Q, int x);

int dequeue(queue *Q);

void print_display(queue *Q);
#endif /* KUYRUK_H_ */
