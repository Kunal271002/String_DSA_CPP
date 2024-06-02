#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

    string Name;
    cout<<"Enter the Name : ";
    getline(cin,Name);
    reverse(Name.begin(),Name.end());
    cout<<Name;

    return 0;
}