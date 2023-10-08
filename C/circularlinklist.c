#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
void displaylinklisttraversal(struct Node *head){
    struct Node *ptr=head;
    do{
        printf(" ELEMENT : %d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
    printf("\n\n\n");
}
struct Node* InsertListatHead(struct Node *head,int data){
    struct Node *ptr,*p;
    ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    p=head;//ask sir about it
    while(p!=head){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;
}
int main(){
    struct Node *head, *first, *second, *third,*last;
    head  =(struct Node*)malloc(sizeof(struct Node));
    first =(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third =(struct Node*)malloc(sizeof(struct Node));
    last  =(struct Node*)malloc(sizeof(struct Node));
    //first list
    head->data=1;
    head->next=first;
    //first
    first->data=2;
    first->next=second;
    //2nd
    second->data=3;
    second->next=third;
    //3rd
    third->data=4;
    third->next=last;
    //4th
    last->data=5;
    last->next=head;
    displaylinklisttraversal(head);
    head=InsertListatHead(head,9);
    displaylinklisttraversal(head);
    
}
