#include<iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter array size : ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxm=arr[0];
    int minm=arr[0];
    for(i=0;i<n;i++){
    maxm=max(maxm,arr[i]);
    minm=min(minm,arr[i]);
    }
    cout<<"Maximum = "<<maxm<<endl;
    cout<<"Manimum = "<<minm<<endl;

    return 0;
}