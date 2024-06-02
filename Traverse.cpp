#include<iostream>
#include<string>
using namespace std;
int main(){

    string Name;
    cout<<"Enter the Name : ";
    getline(cin,Name);
    for(int i = 0;i<=Name.size();i++){
        cout<<Name[i]<<endl;
    }
    return 0;
}