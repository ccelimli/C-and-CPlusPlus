/*
 * main.c
 *
 *  Created on: Nov 16, 2020
 *  Full Name: Cemal Celimli
 * 	Number: 18110131059
 */

#include <stdio.h>
#include "kuyruk.h"


int main(){
	queue q1;
	queue *p;
	q1.head=0;
	q1.tail=0;
	p=&q1;

	enqueue(p,4);
	 print_display(p);
	 printf("\n");
	enqueue(p,5);
	 print_display(p);
	  printf("\n");
	enqueue(p,6);
	 print_display(p);
	  printf("\n");
	enqueue(p,7);
	 print_display(p);
	  printf("\n");
	enqueue(p,8);
	 print_display(p);
	  printf("\n");
	enqueue(p,9);
	 print_display(p);
	  printf("\n");
	dequeue(p);
	 print_display(p);
	  printf("\n");
	dequeue(p);
	 print_display(p);
	  printf("\n");
	dequeue(p);
	 print_display(p);
	  printf("\n");
	dequeue(p);
	 print_display(p);
	  printf("\n");
	dequeue(p);
	 print_display(p);
	  printf("\n");
	dequeue(p);
	 print_display(p);
	  printf("\n");
	enqueue(p,1);
	 print_display(p);
	  printf("\n");
	enqueue(p,2);
	 print_display(p);
	  printf("\n");
	enqueue(p,3);
	 print_display(p);
	  printf("\n");
	dequeue(p);
	 print_display(p);
	  printf("\n");
	dequeue(p);
	 print_display(p);
	  printf("\n");
	dequeue(p);
	 print_display(p);
	  printf("\n");
	dequeue(p);
	 print_display(p);
	  printf("\n");
	enqueue(p,4);
	 print_display(p);
	  printf("\n");
	enqueue(p,5);
	 print_display(p);
	  printf("\n");
	enqueue(p,6);
	 print_display(p);
	  printf("\n");
	dequeue(p);
	 print_display(p);
	  printf("\n");
	dequeue(p);
	 print_display(p);
	  printf("\n");
	dequeue(p);
	 print_display(p);
	  printf("\n");
	dequeue(p);
	 print_display(p);
	  printf("\n");
	dequeue(p);
	 print_display(p);
	  printf("\n");
	dequeue(p);
	 print_display(p);
	  printf("\n");
	dequeue(p);
	 print_display(p);
	  printf("\n");
	dequeue(p);
	print_display(p);
	  printf("\n");

	return 0;
}




