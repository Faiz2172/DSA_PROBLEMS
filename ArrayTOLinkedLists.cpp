#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
    
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* convertarraytoLL(int arr[],int size){
    Node* head = new Node(arr[0]);
    Node* temp = head;
   for(int i=1;i<size;i++){
       temp->next=new Node(arr[i]) ;
       temp=temp->next;
    }
    return head;
    
}
void printLinkedList(Node* head,int arr[]){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    
}

int main() {
    int arr[5]={1,2,3,4,5};
    Node* head=convertarraytoLL(arr,5);
    printLinkedList(head,arr);

    return 0;
}
