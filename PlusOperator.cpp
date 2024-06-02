#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

    string Name;
    cout<<"Enter the First Name : ";
    getline(cin,Name);
    string Surname;
    cout<<"Enter the Surname : ";
    getline(cin,Surname);
    Name += Surname;
    cout<<Name;


    return 0;
}