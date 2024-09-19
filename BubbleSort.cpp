#include<iostream>
#include<vector>
using namespace std;
void BubbleSort(vector<int> &arr, int n){
    for(int i = 0;i<n-1;i++){
        for(int j = 0;i<n-1-i;i++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}




int main(){
    int n;
    cout<<"Enter the Size :"<<endl;
    cin>>n;
    vector<int> arr(n,0);
    cout<<"Enter the Number of Elements : "<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    BubbleSort(arr,n);
}