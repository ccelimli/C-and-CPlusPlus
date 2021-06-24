/*
 * stack.c
 *
 *  Created on: Nov 16, 2020
 *  Full Name: Cemal Celimli
 * 	Number: 18110131059
 * 
 */
#include <stdio.h>
#include "stack.h"

bool stack_empty(stack *s){
	//Yiginin bos olup olmadigini belirtecek fonksiyon
	if (s->top==0){
		return true;
	}
	else
	{
		return false;
	}
}
bool stack_full(stack *s){
	if(s->top==3){
		return 1;
	}
	else{
		return 0;
	}
}

void push(stack *s, int x){
	//Yigina ekleme yapacak fonksiyon. Eger yigin doluysa "Yigin Dolu" uyarisi verecek ve ekleme yapmayacak
	if(stack_full(s)){
		printf("\nStack is full ");
	}
	else{
		s->top=s->top+1;
		s->sk[s->top]=x;
		
	}
	printf("\n");
}

int pop(stack *s){
	//Yigindan çıkarma yapacak fonksiyon. Eger yigin bossa "Yigin Bos" uyarısı verecek ve çıkarma yapmayacak.
	if(stack_empty(s)){
		printf("Stack is empty ");
	}
	else{
		int item;
		item=s->sk[s->top];
		s->top--;
		
		return item;
	}
}
