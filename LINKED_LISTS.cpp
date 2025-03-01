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

Node* convertToArray(vector<int>& arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=0;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=mover->next;
    }
    return head;
}

int LengthOfArray(vector<int>& arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    int count=0;
    for(int i=0;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=mover->next;
        count++;
    }
    return count;
}

bool SearchElement(vector<int>& arr,int value){
    Node* head=new Node(arr[0]);
     if(head->data==value)return true;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        if(temp->data==value)return true;
        temp=temp->next;
    }
    return false;
}



int main()
{
    vector<int>arr={2,3,4,32,243};
    Node* head=convertToArray(arr);
    int count=LengthOfArray(arr);
    cout<<count<<endl;
    
    //isElementpresent in the array or not
    int val;
    cin>>val;
    bool ans=SearchElement(arr,val);
    cout<<ans<<endl;
    
    
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}
