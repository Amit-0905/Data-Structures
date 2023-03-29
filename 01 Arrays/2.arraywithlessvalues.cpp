#include<iostream>
using namespace std;

int main(){

    // int a[10]={1,2,3,4};

    // for(int i=0;i<10;i++){
    //     cout<<a[i]<<" ";
    // }

    // output:- 1 2 3 4 0 0 0 0 0 0 also to intialize a array with zero just assign first index 0 rest will automatically become zero

    int a[10]; //if no value is assigned
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
    // garbage values are printed

    return 0;
}