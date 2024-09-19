// // #include<iostream>
// // using namespace std;
// // // int main(){
// // //     int fact = 1;
// // //     int n;
// // //     cout<<"Enter the Number to find the Factorial"<<endl;
// // //     cin>>n;
// // //     for(int i = 1;i<=n;i++){
// // //         fact = fact*i;
// // //     }
// // //     cout<<fact;



// // // }

// // int main(){
// //     int Num;
// //     cout<<"Enter the Number to find the Prime Number or Not"<<endl;
// //     cin>>Num;
// //     if(Num == 1){
// //         cout<<"It is not A prime Number"<<endl;
// //     }
// //     else if(Num == 2 || Num == 3){
// //         cout<<"It is a Prime Number"<<endl;
// //     }
// //     else{
// //         for(int i = 3;i<Num;++i){
// //             if(Num%2 == 0){
// //                 cout<<"It is Not a Prime Number"<<endl;
// //                 break;
// //             }
// //             else{
// //                 cout<<"It is a Prime Number"<<endl;
// //                 break;
// //             }
// //         }
// //     }
// //     return 0;
// // }



// #include <iostream>
// using namespace std;

// int main() {

//   int i, n;
//   bool is_prime = true;

//   cout << "Enter a positive integer: ";
//   cin >> n;

//   // 0 and 1 are not prime numbers
//   if (n == 0 || n == 1) {
//     is_prime = false;
//   }

//   // loop to check if n is prime
//   for (i = 2; i <= n/2; ++i) {
//     if (n % i == 0) {
//       is_prime = false;
//       break;
//     }
//   }

//   if (is_prime)
//     cout << n << " is a prime number";
//   else
//     cout << n << " is not a prime number";

//   return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter the Number"<<endl;
//     cin>>num;
//     if(num <= 1){
//         cout<<"It is not a Prime Number"<<endl;
//     }
//     if(num == 2 || num == 3){
//         cout<<"It is a Prime Number"<<endl;
//     }
//     for(int i = 2;i<num/2;i++){
//         if(num%i == 0){
//             cout<<"It is not a prime Number"<<endl;
//         }
//     }
//     cout<<"It is a Prime Number";

//     return 0;
// }


// #include<iostream>
// #include<string>
// #include<vector>
// #include<algorithm>
// using namespace std;

// bool Pallendrome(string s){
//     int end = s.size()-1;
//     int start = 0;
//     while(start<end){
//         if(s[start] != s[end]){
//             return false;
//         }
//         start++;
//         end--;
//     }
//     return true;
// }


// int main(){

//     string s;
//     cout<<"Enter the String";
//     getline(cin,s);
//     if(Pallendrome(s) == true){
//         cout<<"It is a Pallendrome"<<endl;
//     }
//     else{
//         cout<<"It is not a pallendrome"<<endl;
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