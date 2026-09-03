#include<iostream>
using namespace std;
class PriorityQueue {


    int arr[100]; 
    
    int size;

    public:
        PriorityQueue(){
            size=0;
        }
        void enqueue(int data){
            int i=size-1;
            while(i>=0 && arr[i]>data){
            i--;
        }
            arr[i+1]=data;
            size++;
        }
        void dequeue(){
            if(size==0){
                cout<<"Queue is empty"<<endl;
                return;
            }
            for(int i=0;i<size-1;i++){
                arr[i]=arr[i+1];
            }
            size--;
        }
        void display(){
            if(size==0){
                cout<<"priority Queue is empty\n";
                return;
            }
            for(int i=0;i<size;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    };
    int main(){
        PriorityQueue pq;

        pq.enqueue(10);
        pq.enqueue(20);
        pq.enqueue(30);
        pq.enqueue(5);
        pq.display();
        pq.dequeue();
        pq.display();
    
    
    return 0;
}