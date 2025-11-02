//In C, defining functions inside main is not allowed. Functions should be defined outside of main.
//declare all variables at one side
//scanf("%d",&ch); if after %d if a space present then it takes 2 elements 

//  warning: implicit declaration of function 'exit' [-Wimplicit-function-declaration]
//                  exit(0);           
//                  ^~~~
// 11Stack.c:83:17: warning: incompatible implicit declaration of built-in function 'exit'
// 11Stack.c:83:17: note: include '<stdlib.h>' or provide a declaration of 'exit'





#include<stdio.h>
#define MAX 100
 
    int stack[MAX];
    int top=-1;

    void push(int data){
        if(top==MAX-1){
            printf("overflow\n");
        }
        else{
            top++;
            stack[top]=data;
        }
    }
    int pop(){
        if(top==-1){
            printf("underflow(The stack is empty)\n");
            return 0;
            
        }
        else{
            int item=stack[top];
            top--;
            return item;
        }
    }
    int peek(){
        if(top==-1){
            printf("the stack is empty\n");
            return 0;
        }
        else{
            return stack[top];
        }
    }
    void display(){
        if(top==-1){
            printf("The stack is empty\n");
        }
        else{
            int i;
            for(i=0;i<=top;i++){
                printf("%d ",stack[i]);
            }
        }
        printf("\n");
    }
int main(){
    int ch,item;
    while (1){
        printf("enter your choice\n1.push\n2.pop\n3.top element\n4.dispalay elements\n5.exit\n");
        scanf("%d",&ch); 

        switch (ch){
            case 1:
                printf("enter element to add: ");
                scanf("%d",&item);
                push(item);
                break;
            case 2:
                printf("the deleted element is %d \n",pop());
                break;
            case 3:
                printf("the top element is: %d\n",peek());
                break;
            case 4:
                printf("the elements are: ");
                display();
                break;
            case 5:
                return 0;               //we can use exit(0) but it produce error above 
            default:
                printf("invalid choice\n");
                break;  
        }    
    }
    return 0;
}