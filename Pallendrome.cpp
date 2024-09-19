#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
bool pallendrome(string s){
   int start = 0;
   int end = s.size()-1;
   while(start<end){
        if(s[start] != s[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main(){
    string s;
    getline(cin,s);
    if(pallendrome(s) == true){
        cout<<"The String is Pallendrome";
    }
    else{
        cout<<"It is not a Pallendrome";
    }
    return 0;
}