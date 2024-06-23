//binary  search of an array
/*
arr={8,10,12,21,27,34,42}==>    key=27
                                starting num(s)=8
                                ending  num(e)=42


*/

#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    //cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binarySearch(arr,n,key)<<endl;
    return 0;
}

