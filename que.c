#include<stdio.h>
int first=-1,last=-1;
int Que[100];
void insert(int num){
    if(last>=100){
        printf("QUE IS FULL!!!\n");
    }
    else{
    if(first==-1 && last==-1){
        first=0;
        last=0;
        Que[first]=num;
    }
    else{
        last=last+1;
        Que[last]=num;
    }
    }
    
}
void delete(){
    if(last<=-1){
        printf("QUE CANN'T BE DELETED...\n");
    }
    else{
        first++;
        printf("**ELEMENT DELETED SUCCESSFULLY** \n");
    }
}
void  display(){
    printf("THE ELEMENTS IN THE LIST IS :");
    for(int i=first;i<=last;++i){
        printf("%d\n",Que[i]);
    }
}
void main(){
    int n,x=0;
    printf("HI, WELCOME TO MY QUE PROGRAM");
    while(x!=1){
    printf("\n OPERATIONS AVAILABLE\n1.ENQUE\n2.DEQUE\n3.DISPLAY\n4.EXIT\n WHICH ONE YOU PREFER (PRESS THAT NUMBER)");
    scanf("%d",&n);
    switch(n){
    case 1:
    printf("ENTER THE NUMBER TO BE INSERTED");
    int number;
    scanf("%d",&number);
    insert(number);
    break;
    case 2:
    delete();
    break;
    case 3:
    display();
    break;
    case 4:
    x=1;
    break;
    }
    }
}
