//With the help of ASCII code and Two aaray. 
//There are two array one is the Frequency Array and Another is the string Array;
// Frist traverse the String Array and Take the index alphabets starting from zero.
//Link for solutions : https://youtu.be/kjU04wGSYzw?si=BsZ4cMw-hMtOw4TT from 38 mins to 57 mins. 

// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std;

// string FrequencySort(string Name){

//     vector<int> FrequencyArray(26,0);

//     for(int i = 0;i<Name.length();i++){
//         int index = Name[i] - 'a';
//         FrequencyArray[index]++;
//     }
//     int j  = 0;
//     for(int i = 0;i<26;i++){
//         while(FrequencyArray[i]--){
//             Name[j++] = i + 'a';
//         }
//     }

//     return Name;
// }
// int main(){

//     string Name1;
//     cout<<"Enter the Name1 : ";
//     getline(cin,Name1);
//     string Name2;
//     cout<<"Enter the Name2 : ";
//     getline(cin,Name2);
//     if(FrequencySort(Name1) == FrequencySort(Name2)){
//         cout<<"Yes it is an Anagram";
//     }
//     else
//     {
//         cout<<"It is not an Anagram";
//     }
//     return 0;
// }

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void Anagram(string str1, string str2){
    if(str1.size() != str2.size()){
        cout<<"It is not an Anagram";
    }
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    if(str1 == str2)
    {
        cout<<"It is an Anagram";
    }
    else{
        cout<<"It is not an Anagram";
    }

}   
int main(){
    string s1;
    cout<<"Enter the First string"<<endl;
    getline(cin,s1);
    string s2;
    cout<<"Enter the second string"<<endl;
    getline(cin,s2);
    Anagram(s1,s2);
    return 0;
}