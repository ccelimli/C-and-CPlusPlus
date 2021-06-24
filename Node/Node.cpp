/*
		Coded by: Cemal Celimli
							18110131059
							
		Date: 26 December 2020 - 22.11
*/

#include <stdio.h>
#include <stdlib.h>


  struct node{
    int data;
    struct node* left;
    struct node* right;
  };

  struct node* root=NULL;

  struct node* new_node (int key){  // Yeni bir dugum olusturma
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=key;
    temp->left=NULL;
    temp->right=NULL;

    if(root==NULL){
      root=temp;
    }
    return temp;
  };
  void order(struct node *root){ 
    if(root != NULL){
      order(root->left);
      printf("%d-", root->data);
      order(root->right);
    }
  }
  struct node* add(struct node* node, int key){ // ekleme yapan fonksiyon
    if(node==NULL){
      return new_node(key);
    }
    if(key<node->data){
      node->left=add(node->left, key);
    }
    else if(key > node->data){
      node->right = add(node->right, key);
    }
    return node;
  }
  struct node* del(struct node* root, int key){
    struct node* p;
    struct node* q;
      if (root=NULL){
        return NULL;
      }
      if(root->data==key){
        if(root->left==root->right){ //Silmek istediğimiz rootun hic cocugu yoksa
        free(root); 
        return NULL;
        }
        else{
          if (root->left == NULL){ // Silmek istedigimiz dügümün bir tane cocugu varsa
            p = root->right;
            free(root);
            return p;
          }
          else if(root->right==NULL){
            p=root->left;
            free(root);
            return p;
          }
          else{ // Dugumun iki cocugu varsa
            p=q=root->right;
            while(p->left==NULL){
              p=p->left;
            }
            p->left=root->left;
            free(root);
            return q;
          }
        }
      }
  };
  int main(){
    int secenek;
    int sayi;
    int sayi_1;
    char choose;

			start:
      printf("1- Sayi ekle");
      printf("\n2- Sirala\n");
      printf("\n3- Sil\n");
      printf("\n\nSeceneginiz: ");
      	scanf("%d", &secenek);
      
      switch(secenek){
        case 1:
        	printf("Eklemek istediginiz sayiyi giriniz: ");
          	scanf("%d", &sayi);
        	add(root, sayi);
        break;
        
        case 2:
          order(root);
        	break;
        case 3:
          printf("Silmek istediginiz: sayiyi giriniz: ");
            scanf("%d",sayi_1);
          del(root,sayi_1);
      }
      
			printf("\n\nYeni bir islem yapmak istiyor musunuz?(Y/N): "); // yeni bir ekleme durumun,  olusturulan agacin siralanmasi yada programin sonlandirilmasi icin kullaniciya secenek sunuldu.
				scanf("%s", &choose);
			
			if(choose== 'y'  || choose=='Y'){
				goto start;
			}
			
			else if (choose == 'n' || choose == 'N'){
				goto finish;
			}
			finish:
    return 0;
  }
