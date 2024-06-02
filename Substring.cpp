#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){

    string Name;
    cout<<"Enter the Name : "; //To take the Part of the string from starting to ending index
    getline(cin,Name);
    cout<<Name.substr(0,4)<<endl;
    cout<<Name;
    return 0;
}