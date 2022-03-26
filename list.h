#include<iostream>
using namespace std;
class Node{
    int value;
    Node* head;
    int size=0;
public:
    Node* next;
    Node(){
        this->head=NULL;
    }
    void insertathead(int nv){
        Node* newnode;
        newnode = new Node();
        newnode->value=nv;
        newnode->next=NULL;
        if(head==NULL){
            head=newnode;
            size++;
        }
        else{
            newnode->next=head;
            head=newnode;
            size++;
        }
    }
    void insertattail(int nv){
        Node* newnode;
        newnode = new Node();
        newnode->value=nv;
        newnode->next=NULL;
        if(head==NULL){
            head=newnode;
            size++;
        }
        else{
            Node* temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newnode;
            size++;
        }
    }
    void insertafteranynode(int v,int nv){
        Node* newnode;
        newnode = new Node();
        newnode->value=nv;
        newnode->next=NULL;
        Node* temp;
        temp=head;
        while(temp!=NULL){
            if(temp->value==v){
                newnode->next=temp->next;
                temp->next=newnode;
                size++;
                return;
            }
            temp=temp->next;
        }
    }
    void insertatanypos(int pos,int nv){
        if((pos-1)>size){
            cout<<"Invalid Position"<<endl;
            return;
        }
        if((pos-1)==0){
            insertathead(nv);
            return;
        }
        Node* newnode;
        newnode = new Node();
        newnode->value=nv;
        newnode->next=NULL;
        Node* temp;
        temp=head;
        static int k=0;
        while(temp!=NULL){
            k++;
            if(k==(pos-1)){
                newnode->next=temp->next;
                temp->next=newnode;
                size++;
                return;
            }
            temp=temp->next;
        }
    }
    void deletehead(){
        if(head==NULL)
            return;
        Node* temp;
        temp=head;
        head=temp->next;
        delete temp;
        size--;
    }
    void deletenode(int v){
        if(head==NULL)
            return;
        Node* temp;
        temp=head;
        if(temp->value==v){
            deletehead();
            return;
        }
        else{
            while(temp!=NULL){
                if(temp->next->value==v){
                    Node* x;
                    x=temp->next;
                    temp->next=x->next;
                    delete x;
                    size--;
                    return;
                }
                else if(temp->next==NULL){
                    cout<<"Number Not Found"<<endl;
                    return;
                }
                temp=temp->next;
            }
        }
    }
    void deletenodeatanypos(int pos){
        if(head==NULL)
            return;
        if((pos-1)>size){
            cout<<"Invalid Position"<<endl;
            return;
        }
        if((pos-1)==0){
            deletehead();
            return;
        }
        Node* temp;
        temp=head;
        static int k=0;
        while(temp!=NULL){
            k++;
            if(k==(pos-1)){
                Node* x;
                x=temp->next;
                temp->next=x->next;
                delete x;
                size--;
                return;
            }
            temp=temp->next;
        }
    }
    void display(){
        Node*temp;
        temp=head;
        cout<<"\nList->";
        while(temp!=NULL){
            cout<<temp->value<<"->";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }
    void search(int val){
        Node* temp;
        temp=head;
        static int k=0;
        while(temp!=NULL){
            k++;
            if(temp->value==val){
                cout<<"Number found at "<<k<<endl;
                return;
            }
            temp=temp->next;
        }
        cout<<"Number Not Found"<<endl;
    }
    void reverse(){
        Node *prev = NULL;
        Node *temp;
        temp=head;
        Node *next;
        while(temp!=NULL){
            next=temp->next;
            temp->next=prev;
            prev=temp;
            temp=next;
        }
        head=prev;
    }
    ~Node(){}
};