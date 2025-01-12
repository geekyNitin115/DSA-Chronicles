#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    
    
   //constuctor
    Node(int data){
        this->data = data;
        this->next = NULL;
        
    }

    //destructor memory free karwane ke liye
    ~Node(){
        int value = this->data;
        if(this->next==NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"memory is free for node with data"<< value << endl;
    }

};
void insertAtHead(Node* &head, int d){
        Node* temp = new Node(d);
        temp->next = head;
        head = temp;
        
}
void display(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
        
        
    }
    cout<<endl;
}
void insertAtTail(Node* &tail, int d){
        Node* temp = new Node(d);
        tail->next = temp;
        tail = temp;
        

}       
void insertAtIdx(Node* &head,Node* &tail, int Idx,int d){
    Node* t = new Node(d);
    Node* temp = head;
    if(Idx==1){ 
        insertAtHead(head, d);
    }
    if(temp->next == NULL){
        insertAtTail(tail, d);
    }
    int count = 1;
    while(count<Idx-1){
        temp = temp->next;
        count++;
    }
    t->next = temp->next;
    temp->next = t;
}

void deleteNode(Node* &head ,int position){
    if(position==1){
        Node* temp = head;// node ko free karne ke liye pahle iise store karna padega
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
       Node* CURR = head;
       Node* PREV =  NULL;
       int count = 1;
       while(count<position){
         PREV = CURR;
         CURR = CURR->next;
         count++;
       }
       PREV->next = CURR->next;
       CURR->next = NULL; 
       delete CURR;

    }
}

int main(){
    Node* Node1 = new Node(10);
    Node* head = Node1;
    Node* tail = Node1;
    int size = 1;
  
    
     
    display(head);
    insertAtHead(head, 5);
    display(head);

    insertAtTail(tail, 20);

     display(head);
     insertAtIdx(head,tail,   3,30 );
     display(head);

     deleteNode(head,3);
     display(head);
     
}