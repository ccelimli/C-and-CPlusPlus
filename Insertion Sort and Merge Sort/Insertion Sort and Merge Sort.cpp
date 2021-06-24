#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

void insertionSort(int array[], int n);
void merge(int array[], int l, int m, int r);
void mergeSort(int array[], int l, int r);

int main(){
	srand(time(NULL));
	clock_t start_t, end_t, start_t_2,end_t_2, start_t_3,end_t_3;
	start_t_3 = clock();
	int deger,i;
	printf("Dizinin Eleman Sayisi: ");
	scanf("%d",&deger);
	int dizi[deger];
//Orjinal hali
	printf("Dizi:\n");
    for( i=0; i<deger; i++){
        dizi[i]=rand()%10000; // sayi araligini 0  ile 10000 arasinda tuttum
		printf("%d-",dizi[i]);
    }
    printf("\n");
//Insertion Sort
		start_t = clock();
    insertionSort(dizi,deger);
     printf("\nInsertion Sort: \n");
    for( i=0; i<deger; i++){
    	printf("%d-", dizi[i]);
		} 
		end_t = clock();     
    printf("\n");
//Merge Sort
		start_t_2 = clock();	
    mergeSort(dizi,0,deger-1);
    printf("\nMerge Sort: \n");
    for( i=0; i<deger; i++){
    	printf("%d-", dizi[i]);
		} 
		end_t_2 = clock(); 
		end_t_3 = clock();   
		printf("\n");
    printf("\n");
		printf("Insertion Sort Calisma Zamani: %f saniye\n",(double)(end_t - start_t) / CLOCKS_PER_SEC); // Dizi eleman sayisini küçükk girdigim zaman Insertion Sortta hesaplanamayacak kadar kisa sure islemi tamamliyor ve bu yuzden sonuc 0 cikiyor. Ama eleman sayisini buyuk girdigimde(Orn:1000) Insertion Sort suresi hesaplaniyor.
		printf("Merge Sort Calisma Zamani: %f saniye\n",(double)(end_t_2 - start_t_2) / CLOCKS_PER_SEC);
    printf("Toplam Calisma Suresi : %.3f saniye\n", (double)(end_t_3 - start_t_3) / CLOCKS_PER_SEC);        
		getch();
    return 0;
}
void insertionSort(int array[], int n)
{
   int i, deger, j;
   for (i=1; i<n; i++)
   {
       deger=array[i];
       j=i-1;
       while(j>=0 && array[j]>deger)
       {
          array[j+1]=array[j];
          j=j-1;
       }
       array[j+1]=deger;
   }
}
void merge(int array[], int l, int m, int r){
  int i, j, k;
  int n1=m-l+1;
  int n2 =r-m;
  int L[n1],R[n2];
  for (i=0; i<n1; i++){
  	L[i]=array[l+i];
	}
  for (j=0; j<n2; j++){
    R[j]=array[m+1+j];
	} 
  i=0;
  j=0;
  k=l;
  while (i < n1 && j < n2){
  	if (L[i] <= R[j]){
      array[k] = L[i];
      i++;
    }
    else{
      array[k]=R[j];
      j++;
    }
    k++;
    }
    while(i<n1)
    {
    	array[k]=L[i];
      i++;
      k++;
    }
    while(j<n2)
    {
      array[k]=R[j];
      j++;
      k++;
    }
}
void mergeSort(int array[], int l, int r)
{
    if(l<r)
    {
        int m=l+(r-l)/2;
        mergeSort(array, l, m);
        mergeSort(array, m+1, r);
        merge(array, l, m, r);
    }
}
