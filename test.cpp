#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;

    node():data(0),next(nullptr)
        {}
    node(int value): data(value),next(nullptr)
        {}
    node(int value, node *next): data(value),next(next)
        {}
};

node *createNode(int data){
    node *newNode=new node(data);
    if(newNode==nullptr){
        return nullptr;
    }
    return newNode;
}

int insertAtEnd(node **head,int data){
    node* newNode=createNode(data);
    if(newNode==nullptr){
        return -1;
    }

    if((*head)==nullptr){
        (*head)=newNode;
        return 0;
    }

    node *temp=(*head);

    while(temp->next != nullptr){
        temp=temp->next;
    }

    temp->next=newNode;
    return 1;
}

int insertAtBeg(node **head,int data){
    node *newNode=createNode(data);
    if(newNode == nullptr){
        return -1;
    }

    if((*head)==nullptr){
        (*head)=newNode;
        return 0;
    }

    newNode->next=(*head);
    (*head)=newNode;
    return 1;
}

int deleteAtEnd(node **head){
    if((*head) == nullptr){
        return -1;
    }

    if((*head)->next == nullptr){
        delete *head;
        *head=nullptr;
        return 0;
    }

    node *temp=(*head);

    while(temp->next->next != nullptr){
        temp=temp->next;
    }

    node *ptr=temp->next;
    delete ptr;
    temp->next=nullptr;
    return 1;
}

void print(node *head){
    node *temp=head;
    if(temp==nullptr){
        cout<<"empty list"<<endl;
    }
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main() {
    node *head=nullptr;

    for(int i=1;i<=5;i++){
       insertAtBeg(&head,i);
    }

    print(head);

    deleteAtEnd(&head);
    print(head);

    return 0;
}