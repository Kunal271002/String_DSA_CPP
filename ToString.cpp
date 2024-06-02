#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    
    int length = 100;
    string Name = to_string(length); //Conver Integer or Number to Sting Value and then normal Functions are used.
    char AnotherNumber  = 'A';
    Name.push_back(AnotherNumber);
    cout<<Name;


    return 0;
}