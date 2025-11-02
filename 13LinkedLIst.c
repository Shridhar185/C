//struct Node*...pointer to a node structure
//**head_ref.....pointer to a pointer to a node structure
//head_ref.......used to modify actual head of linked list
//we allocate memory for node structure note for pointer.....for...sizeof(struct Node)
//head always points to start of linked list


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct Node{
    int data;
    struct Node* next;
};

void addFront(struct Node **head_ref,int new_data){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    if(newnode==NULL){
        printf("memory allocation failed!");
        return;
    }
    newnode->data=new_data;
    newnode->next=*head_ref;
    *head_ref=newnode;
}


void addLast(struct Node **head_ref,int new_data){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    if(newnode==NULL){
        printf("memory allocation failed!");
        return;
    }
    newnode->data=new_data;
    newnode->next=NULL;
    if(*head_ref==NULL){
        *head_ref=newnode;
        return;
    }
    struct Node* temp=*head_ref;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
}


void addAtPosition(struct Node **head_ref,int pos,int new_data){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    if(newnode==NULL){
        printf("memory allocation failed!");
        return;
    }
    newnode->data=new_data;
    newnode->next=NULL;
    if(pos==0){
        newnode->next=*head_ref;
        *head_ref=newnode;
    }
    struct Node* temp=*head_ref;
    int i;
    for(i=0;temp!=NULL&&i<pos-1;i++){
        temp=temp->next;
    }
    if(temp==NULL){
        printf("out of bounds\n");
        free(newnode);
        return;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}


void deleteFirst(struct Node **head_ref){
    if(*head_ref==NULL){
        printf("the list is empty");
        return;
    }
    struct Node* temp=*head_ref;
    *head_ref=temp->next;
    free(temp);
}


void deleteLast(struct Node **head_ref){
    if(*head_ref==NULL){
        printf("the list is empty");
        return;
    }
    struct Node* temp=*head_ref;
    if(temp->next==NULL){
        *head_ref=NULL;
    }
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    free(temp->next);
    temp->next=NULL;
}


void deleteAtPosition(struct Node **head_ref,int pos){
    if(*head_ref==NULL){
        printf("the list is empty");
        return;
    }
    struct Node* temp1=*head_ref;
    if(pos==0){
        *head_ref=temp1->next;
        free(temp1);
        return;
    }
    for(int i=0;temp1!=NULL && i<pos-1;i++){
        temp1=temp1->next;
    }
    if(temp1==NULL || temp1->next==NULL){
        printf("out of bounds");
        return;
    }

    struct Node* temp2=temp1->next->next;
    free(temp1->next);
    temp1->next=temp2;
}


void reverseList(struct Node **head_ref){
    struct Node* current=*head_ref;
    struct Node* prev=NULL;
    struct Node* next=NULL;
    while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    *head_ref=prev;
}


bool search(struct Node* head,int key){
    struct Node* current=head;
    while(current!=NULL){
        if(current->data==key){
            return true;
        }
        current=current->next;
    }
    return false;
}


int lengthList(struct Node* head){
    struct Node* current=head;
    int count=0;
    while(current!=NULL){
        count++;
        current=current->next;
    }
    return count;
}


int getByIndex(struct Node* head,int index){
    struct Node* current=head;
    int count=0;
    while(current!=NULL){
        if(count==index){
            return current->data;
        }
        current=current->next;
        count++;
    }
}


int getMiddle(struct Node* head){
    struct Node* fast_ptr=head;
    struct Node* slow_ptr=head;
    while(fast_ptr!=NULL && fast_ptr->next!=NULL){
        fast_ptr=fast_ptr->next->next;
        slow_ptr=slow_ptr->next;
    }
    return slow_ptr->data;
}


void printList(struct Node* node){
    if(node==NULL){
        printf("the list is empty");
        return;
    }
    while(node!=NULL){
        printf("%d ->",node->data);
        node=node->next;
    }
    printf("NULL\n");
}







/* int main(){
    struct Node* head=NULL;
    addFront(&head,45);
    addFront(&head,50);
    addFront(&head,55);
    addFront(&head,500);
    addLast(&head,60);
    addAtPosition(&head,2,100);
    addAtPosition(&head,4,1000);
    printList(head);
    deleteFirst(&head);
    deleteLast(&head);
    deleteAtPosition(&head,2);
    printList(head);
    reverseList(&head);
    printList(head);
    printf("element found: %d",search(head,50));                //1 true
    printf("\nlength of list: %d",lengthList(head));
    printf("\nelement at index 2: %d",getByIndex(head,2));
    printf("\nmidlle element in list: %d",getMiddle(head));

} */







int main(){
    struct Node* head=NULL;
    int n,i;
    int ele;
    printf("Enter no of elements: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n-1;i++){
        int a=scanf("%d ",&ele);
        addLast(&head,ele);
    }
    printList(head);
    
}








