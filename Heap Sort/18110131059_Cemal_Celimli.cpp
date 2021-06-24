#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
  void swap(int *a, int *b) {
    int temp=*a;
    *a=*b;
    *b = temp;
  }
  void heapify(int arr[], int n, int i) {
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    if (left<n && arr[left]>arr[largest])
      largest=left;
    if (right<n && arr[right]>arr[largest])
      largest=right;
    if (largest!=i) {
      swap(&arr[i], &arr[largest]);
      heapify(arr, n, largest);
    }
  }
  void heapSort(int arr[], int n) {
    for (int i=n/2-1; i>=0; i--){
      heapify(arr, n, i);    	
		}
    for (int i = n - 1; i >= 0; i--) {
      swap(&arr[0], &arr[i]);
      heapify(arr, i, 0);
    }
  }
  void print_array(int arr[], int n) {
    for (int i = 0; i < n; ++i)
      printf("%d-", arr[i]);
    printf("\n");
  }
  int main() {
	srand(time(NULL));
 	clock_t start_t, end_t;
	start_t=clock();// time start
    int c ;
    	printf("Dizinin Eleman Sayisini Giriniz: ");
				scanf("%d",&c); 
		int arr[c],i,sayi;
   	printf("\nDizinin Orijinal Hali: ");
		for(i=0;i<c;i++){
 		sayi= rand()%100;
 		arr[i]=sayi;
		printf("%d-",arr[i]);
		}
		printf("\n\n--------------------------------\n\n");
    int n=sizeof(arr)/sizeof(arr[0]);
    heapSort(arr, n);
    printf("Heap Sort Siralamasi: ");
    print_array(arr, n);
  	end_t = clock(); // time end  

		printf("\n\n\n\n----------Toplam Calisma Suresi : %.3f saniye-----------\n", (double)(end_t - start_t) / CLOCKS_PER_SEC);        
    return 0;
  }
