/*
 * dene.c
 * 
 *  Created on: Nov 16, 2020
 *  Full Name: Cemal Celimli
 * 	Number: 18110131059
 * 
 */
//Bu dosyayla deneme yapıp ekleme ve çıkarma işlemlerinin doğru çalışıp çalışmadığını görebilirsiniz.
#include <stdio.h>
#include "stack.h"


int main(){
int x;
	stack s1;
	stack *s;
	s=&s1;
	s->top=0; //Baslangicta top degerini sifirlamamiz lazim.
	push(s,4);

	for(int i=1; i<=s->top; i++){
		printf("%d-",s->sk[i]);
	}

	push(s,5);

	for(int i=1; i<=s->top; i++){
		printf("%d-",s->sk[i]);
	}

	push(s,6);

	for(int i=1; i<=s->top; i++){
		printf("%d-",s->sk[i]);
	}

	push(s,7);

	printf("Yiginin son hali: ");
	for(int i=1; i<=s->top; i++){	
		printf("%d-",s->sk[i]);
	}

	printf("\n");

	printf("-----------------------------------\n");
	
	for(int i=s->top; i>=1 ;i--){	
		printf("%d-",s->sk[i]);
	}

	printf("\n");

	x=pop(s);

	for(int i=s->top; i>=1 ;i--){	
		printf("%d-",s->sk[i]);
	}

	printf("\n");
	x=pop(s);

	for(int i=s->top; i>=1 ;i--){	
		printf("%d-",s->sk[i]);
	}

	printf("\n");

	x=pop(s);

	for(int i=s->top; i>=1 ;i--){	
		printf("%d-",s->sk[i]);
	}

	x=pop(s);
	return 0;
}
