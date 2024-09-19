#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void reverse(string s){
    int start = 0;
    int end = s.size()-1;
    int n = s.size();
    while(start<end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
    for(int i = 0;i<n;i++){
        cout<<s[i];
    }
}


int main(){
    string s;
    getline(cin,s);
    reverse(s);
    return 0;
}

