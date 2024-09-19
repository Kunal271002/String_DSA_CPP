#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int NumberOfVowels(string s){
    int count = 0;
    for(int i = 0;i<s.size();i++){
        if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            count++;
        }
    }
    return count;
}





int main(){
    string s;
    getline(cin,s);
    cout<<NumberOfVowels(s)<<endl;
    return 0;
}