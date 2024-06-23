#include<iostream>
#include<string>
#include<vector>
using namespace std;

string FrequencyArray(string &Name){

    vector<int> lower(26,0);

    int n = Name.size();

    for(int i = 0;i<n;i++){
        int index = Name[i] - 'a';
        lower[index]++;
    }
    int j = 0;
    for(int i = 0;i<26;i++){
        while(lower[i]--){
            Name[i++] = i +'a';
        }
    }

    return Name;
}
int main(){
    string s;
    cin>>s;
    cout<<FrequencyArray(s)<<endl;
}