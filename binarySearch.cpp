#include<iostream>
using namespace std;

int BinarySearch(int arr[10],int low,int high,int key){
    if(low>high)
        return -1;
    
    int mid=(low+high)/2;
    if(arr[mid]==key)
        return mid;

    if(key<arr[mid])
        return BinarySearch(arr,low,mid-1,key);
    else
        return BinarySearch(arr,mid+1,high,key);
}
int main(){
    int n,key;
    cin>>n;
    cin>>key;
    int arr[10];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result=BinarySearch(arr,0,n-1,key);
    if(result!=-1)
        cout<<"element found:"<<result;
    else
        cout<<"elements not found";

}

