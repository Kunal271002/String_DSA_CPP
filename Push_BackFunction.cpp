#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;
int main(){

    string Name = "Kunal";
    char Surname = 'A';
    Name.push_back(Surname); //To add a character to the string or else to Concatinate string and Character Array
    cout<<Name;

    return 0;
}