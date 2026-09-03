#include<iostream>
using namespace std;
int size=5;
int f=-1,r=-1;
int q[5];
bool isempty(){
    if(f==-1){
        cout<<"\n queue is empty"<<endl;
        return true;
    }
    else
        return false;
}
bool isfull(){
    if((r+1)%size==f){
        cout<<"\n queue is full"<<endl;
        return true;
    }
    else
    return false;
}
void enqueue(int x){
    if(isfull())
    cout<<"\n overflow"<<endl;
    else{
        if(f==1)
        f=0;
        r=r+1;
        q[r]=x;
    }
}
void dequeue(){
    if(isempty()){
        cout<<"\n underflow"<<endl;
    }
    else{
        int y=q[f];
        f++;
        cout<<"\n"<<y<<"deleted";
        if(f==r){
        f=-1;
        r=-1;
    }
    
    else{
        f=(f+1)%size;
    }
    }
    
}
void traverse(){
    cout<<"\n queue elements are";
    for(int i=f;i<=r;i++){
        cout<<"\n"<<q[i]<<"index is "<<i;
    }
}
int peek(){
    return q[f];
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    traverse();
    enqueue(60);
    dequeue();
    traverse();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    enqueue(60);
    enqueue(70);
    traverse();

}