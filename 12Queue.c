#include<stdio.h>
#define MAX 100

int front=0;
int rear=-1;
int queue[MAX];

void enque(int data){
    if(rear ==MAX-1){
        printf("the queue is full\n");
    }
    else{
        rear++;
        queue[rear]=data;
    }
}
int deque(){
    if(rear<front){
        printf("the queue is empty\n");
        return 0;
    }
    else{
        int item=queue[front];
        front++;
        return item;
    }
}
int peek(){
    if(rear<front){
        printf("the queue is empty\n");
        return 0;
    }
    else{
        return queue[front];
    }
}
void display(){
    if(rear<front){
        printf("the queue is empty\n");
    }
    else{
        for(int i=front;i<=rear;i++){
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}

int main(){
    int choice,item;
    while(1){
        printf("\nEnter your choice\n1.add element last\n2.remove element first\n3.front element\n4.display all elements\n5.exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("eneter element to add ");
                scanf("%d",&item);
                enque(item);
                break;
            case 2:
                printf("The item removed is: %d\n",deque());
                printf("The updated elements are: ");
                display();
                break;
            case 3:
                printf("The front item is: %d\n",peek());
                break;
            case 4:
                printf("the elements are: ");
                display();
                break;
            case 5:
                return 0;
            default:
                printf("invalid choice");
        }
    }
    return 0;
}