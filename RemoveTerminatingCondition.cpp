#include<iostream>
#include<string>
using namespace std;
int main(){

    string Name;
    cout<<'Enter the Name : ';
    getline(cin,Name); //To Remove the terminating Condition of Space, Tab and Enter.
    cout<<Name;
    return 0;
}