#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void Reverse(string &s){
    int start = 0;
    int end = s.size()-1;
    while(start<end){
        if(s[start] == s[end]){
            start++;
            end--;
        }
        else{
            cout<<"It is not an Pallendrome";
            return;
        }
    }
    cout<<"It is a Pallendrome";
    
}
int main(){
    string s;
    getline(cin,s);
    Reverse(s); 
}