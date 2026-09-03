#include<iostream>
using namespace std;
class node{
    public:
        int data;
        int priority;
        node *next;

        node(int a,int b){
            data=a;
            priority=b;
            next=NULL;
        }
};
class PriorityQueue{
    private:
        node* head;
    public:
        PriorityQueue(){
            head=NULL;
        }

        void enqueue(int data,int priority){
            node* newnode=new node(data,priority);

            if(head==NULL || head->priority<priority){
                newnode->next=head;
                head=newnode;
            }else{
                node* current=head;
                while(current->next!=NULL && current->next->priority>priority){
                    current=current->next;
                }
                newnode->next=current->next;
                current->next=newnode;
            }

        }

        void dequeue(){
            if(head==NULL){
                cout<<"queue is empty"<<endl;
                return;
            }
            node* temp=head;
            head=head->next;
            delete temp;
        }

        void display(){
            if(head==NULL){
                cout<<"queue is empty"<<endl;
                return;
            }
            node* current=head;
            while(current!=NULL){
                cout<<"data"<<current->data<<"priority"<<current->priority<<endl;
                current=current->next;
            }
        }
};
