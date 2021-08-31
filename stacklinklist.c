#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head=NULL,*tail=NULL,*n,*t,*i;
void insert(int num){
    n=(struct node*)malloc(sizeof(struct node));
    n->data=num;
    n->next=NULL;
    if(head==NULL){
        head=n;
        tail=n;
    }
    else{
        n->next=head;
        head=n;
    }
}
void delete(){
    if(tail>head){
        printf("There is no element to delete \n");
    }
    else{
        t=head;
        printf("The element deleted is %d\n",head->data);
        head=head->next;
        free(t);
    }
}
void display(){
   printf("The elements in the stack are:"); 
    i=head;
    while(i!=NULL){
        printf("%d\n",i->data);
        i=i->next;
    }
}
void main(){
    printf("WELCOME TO MY  STACK PROGRAM USING LINKED LIST");
    int con=0;
    int cho=0;
    do{
        printf("OPTIONS AVAILABLE:\n1.INSERTION\n2.DELETION\n3.DISPLAY\n4.EXIT\n");
        scanf("%d",&cho);
         int num;
        switch(cho){
            case 1:
            printf("ENTER THE NUMBER YOU WANT TO STORE:\n");
            scanf("%d",&num);
            insert(num);
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 4:
            con=1;
            break;
            default:
            break;
        }
       
    }while(con!=1);
}
