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

    string Name1;
    cout<<"Enter the Name1 : ";
    getline(cin,Name1);
    string Name2;
    cout<<"Enter the Name2 : ";
    getline(cin,Name2);
    if(FrequencySort(Name1) == FrequencySort(Name2)){
        cout<<"Yes it is an Anagram";
    }
    else
    {
        cout<<"It is not an Anagram";
    }
    return 0;
}