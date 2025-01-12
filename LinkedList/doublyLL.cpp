#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* PREV;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->PREV = NULL;
    }
};
 void display(Node* head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next; 
    }
    cout<<endl;
 }
 int getLength(Node* &head){
    int size = 0;
    Node* temp = head;

    while(temp!=NULL){
        size++;
        temp = temp->next; 
    }
    return size;
    cout<<endl;
 };
 void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head->PREV = temp;
    head  = temp;
 }
int main(){
    Node* Node1 = new Node(10);
    Node* head  = Node1;
    display(head);
    cout<<getLength(head)<<endl;;

    insertAtHead(head, 20);
     display(head);

}