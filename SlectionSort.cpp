// #include<iostream>
// #include<vector>
// using namespace std;

// void selectionSort(vector<int> &arr){
//     int n = arr.size();
//     for(int i = 0;i<n;i++){
//         int min = i;
//         for(int j = i+1;i<n;i++){
//             if(arr[i]>arr[j]){
//                 min = j;
//             }
//         }
//         if(min != i){
//             swap(arr[i],arr[min]);
//         }
//     }
// }


// int main(){
//     int n;
//     cout<<"Enter the size of Array : "<<endl;
//     cin>>n;
//     vector<int> num(n,0);
//     cout<<"Enter the elements in Array";
//     for(int i = 0;i<n;i++){
//         cin>>num[i];
//     }
//     selectionSort(num);
//       for(int i = 0;i<n;i++){
//         cout<<num[i];
//     }
//     return 0;
// }


#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr){
    int n = arr.size();
    for(int i=0; i<n-1; i++){
        int mini = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        if(mini != i){
            swap(arr[i], arr[mini]);
        }
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n,0);
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    selectionSort(arr);

    cout << "After sorting: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}