#include<iostream>
using namespace std;

void merge(int a[], int low, int mid, int high) {
    int i = low, j = mid + 1, k = low;
    int c[10];

    while (i <= mid && j <= high) {
        if (a[i] < a[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = a[j++];
        }
    }

    while (i <= mid) {
        c[k++] = a[i++];
    }

    while (j <= high) {
        c[k++] = a[j++];
    }

    for (i = low; i <= high; i++) {
        a[i] = c[i];
    }
}
void mergesort(int a[],int low,int high){
    if(low<high){
        int mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}
int main(){
    int a[10];
    int n;
    cout<<"enter the size of n:";
    cin>>n;
    cout<<"enter "<<n<<" elements: ";
    for(int x=0;x<n;x++){
        cin>>a[x];
    }
    mergesort(a,0,n-1);
    cout<<"sorted array: ";
    for(int x=0;x<n;x++){
        cout<<a[x]<<" ";
    }
}