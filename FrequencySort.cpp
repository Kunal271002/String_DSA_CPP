//With the help of ASCII code and Two aaray. 
//There are two array one is the Frequency Array and Another is the string Array;
// Frist traverse the String Array and Take the index alphabets starting from zero.
//Link for solutions : https://youtu.be/kjU04wGSYzw?si=BsZ4cMw-hMtOw4TT from 38 mins to 57 mins. 

#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

string FrequencySort(string Name){

    vector<int> FrequencyArray(26,0);

    for(int i = 0;i<Name.length();i++){
        int index = Name[i] - 'a';
        FrequencyArray[index]++;
    }
    int j  = 0;
    for(int i = 0;i<26;i++){
        while(FrequencyArray[i]--){
            Name[j++] = i + 'a';
        }
    }

    return Name;
}



int main(){

    string Name;
    getline(cin,Name);
    cout<<FrequencySort(Name)<<endl;

    return 0;
}