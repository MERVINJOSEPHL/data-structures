#include<stdio.h>
int stack[100],n,top=-1,tail=-1;
void insert();
void delete();
void display();
int main()
{
    int z;
    printf("WELCOME TO PROGRAM OF STACKING\n");
    printf("Enter the number of elements in the stack\n");
    scanf("%d",&n);
    int a = 1 ;
    while(a==1){
        
        printf("Enter your choice:\n1.insert\n2.delete\n3.display\n4.exit \n");
        scanf("%d",&z);
        switch(z){
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("The session has ended\n");
                a=0;
                break;
            default:
                printf("Enter your choice from any of the above\n");
        }
    }

}
void insert(){
    if(top>n-2){
        printf("stack is full\n");
    }
    else{
    int num;
    printf("Enter the element to be inserted:\n");
    scanf("%d",&num);
    stack[top+1]=num;
    top++;
    }
}
void delete(){
    if(top==tail){
        printf("element cann't be deleted\n");
    }
    else{
        int dis = stack[top];
        top=top-1;
        printf("The deleted element is : %d\n",dis);
    }
}
void display()
{
    for (int j=0;j<=top;j++){
        printf("%d",stack[j]);
    }
}
