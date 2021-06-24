/*
 * kuyruk.c
 *
 *  Created on: Nov 16, 2020
 *  Full Name: Cemal Celimli
 * 	Number: 18110131059
 */

#include <stdio.h>
#include "kuyruk.h"

//Ekleme ve cikarma dizi uzerinde cevrimsel olarak calisacak.

void enqueue(queue *Q, int x){
//Kuyruga ekleme fonksiyonu. Kuyruk doluysa ekleme yapmamali. 
	if(Q->tail==size){
		printf("\nKuyruk Dolu!");
	}
	else
	{
		Q->tail=Q->tail+1;
		Q->deger[Q->tail]=x;
	}
}
int dequeue(queue *Q){
	//Kuyruktan cikarma fonksiyonu. Kuyruk bossa cikarma yapmamali.
	if(Q->head==Q->tail){
		printf("\nKuyruk Bos!");	
	}
	else{
		Q->head=Q->head+1;	
	}
}
void print_display(queue *Q){
	for(int i=Q->head+1; i<=Q->tail; i++){
		printf("%d-",Q->deger[i]);
	}	
}



