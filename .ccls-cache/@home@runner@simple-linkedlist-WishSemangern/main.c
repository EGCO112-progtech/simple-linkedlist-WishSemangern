//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
    //int c=5;
  struct node a,b,*head ;
  typedef struct node Node;
  typedef Node* NodePtr;
  NodePtr tmp;
  
 /*     a.value = c;
      a.next=&b;
      head=&a;
      b.value=head->value+3;*/
  
 NodePtr p = (NodePtr)malloc(sizeof(Node));
p->value =1;
head = p;
tmp = head;
// int i,n=4;
  for(int i=1 ; i<5 ; i++){
    p->next = (NodePtr)malloc(sizeof(Node));
    p = p->next;
    p->value=tmp->value +i;
    tmp = tmp->next;
    }
    
  //printf("%d\n", head ->value ); //what value for 5
 // printf("%d\n", head ->next->value ); //what value for 8
  
/*  Exercise I
    1. Add 1 more than at the end
    2. Add value(11)
    3. Make next become NULL
 */
/*printf("Ex1\n");
  struct node ex1;
      b.next = &ex1;
      ex1.value = 11;
      ex1.next = NULL ;
      //printf("%d\n", ex1.value );
      printf("%d\n", b.next->value);*/
      //printf("%d\n", head ->next->next->value);
      //printf("%d\n",b.next);
  
/*  Exercise II
        1. Add 1 more than at the begining!!!!
        2. Add value (2)
*/
  /*printf("Ex2\n");
  struct node ex2;
      ex2.value=2;
      ex2.next=&a;
      head =&ex2;
      printf("%d->",head->value);
      printf("%d->",head->next->value);
      printf("%d->",head->next->next->value);
      printf("%d->NULL\n",head->next->next->next->value);
  
    typedef struct node* NodePtr;
    NodePtr tmp=head;*/ //add temp value to faciliate
        
    /*  Exercise III Use loop to print everything
        int i,n=5;
        for(i=0;i<n;i++){
            printf("%3d", tmp->value);
          // What is missing???
        }
    */
 //printf("Ex3\n");
 /* tmp = head;
  int i,n=4;
    for(i=0 ; i<n ; i++){
      printf("%d->",tmp->value);
      tmp = tmp -> next;
    }*/
 
   /*  Exercise IV change to while loop!! (you can use NULL to help)
       
         while(){
            printf("%3d", tmp->value);
           // What is missing???
        }
    */
 // printf("Ex4\n");
  tmp = head;
  while(tmp != NULL){
    printf("%d  ", tmp -> value);
    tmp = tmp -> next;
  }

  
 /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
         //use a loop to help
          
     */
//printf("Ex5\n");
/*  NodePtr p = (NodePtr)malloc(sizeof(Node));
  p->value = c;
  for(i=0 ; i<n ; i++){
    p->next = (NodePtr)malloc(sizeof(Node));
    p = p->next;
    p->value=c+i+1;

   }
*/
   
  
  
//NodePtr ex5 = (struct node *)malloc(sizeof(struct node)*5)
  
    /*  Exercise VI Free all node !!
         //use a loop to help
          
     */
  printf("\n");
  
  //printf("Ex6\n");
  while(head != NULL){
    tmp = head;
    head = head->next;
    printf("%d  ",tmp->value);
    free(tmp);
    }
    return 0;
}
