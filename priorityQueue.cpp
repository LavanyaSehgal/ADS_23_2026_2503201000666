#include<iostream>
using namespace std;

class priorityQueue{
private:
    int data[100];
    int priority[100];
    int n;
public:
priorityQueue(){
    n=0;
}
void enqueue(int x,int p){
    if(n==100){
        cout<<"priority Queue overflow\n";
        return;
    }
    data[n]=x;
    priority[n]=p;
    n++;

cout<<"element inserted successfully\n";
}
void dequeue(){
    if(n==0){
        cout<<"priority Queue underflow\n";
        return;
    }
    int maxIndex=0;
    for(int i=1;i<n;i++){
        if(priority[i]>priority[maxIndex]){
            maxIndex=i;
        }
    }
    cout<<"element deleted successfully\n";
    for(int i=maxIndex;i<n-1;i++){
        data[i]=data[i+1];
        priority[i]=priority[i+1];
    }
    n--;
}
void display(){
    if(n==0){
        cout<<"priority Queue is empty\n";
        return;
    }
    cout<<"elements in priority Queue are:\n";
    for(int i=0;i<n;i++){
        cout<<data[i]<<" ";
    }
    cout<<"\n";
}
};
int main(){
    priorityQueue pq;
    int choice,x,p;
    while(1){
        cout<<"1. enqueue\n2. dequeue\n3. display\n4. exit\n";
        cout<<"enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"enter element and its priority: ";
                cin>>x>>p;
                pq.enqueue(x,p);
                break;
            case 2:
                pq.dequeue();
                break;
            case 3:
                pq.display();
                break;
            case 4:
                exit(0);
            default:
                cout<<"invalid choice\n";
        }
    }
    return 0;
}