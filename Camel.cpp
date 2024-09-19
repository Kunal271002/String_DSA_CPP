// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std;

//     string CamelCase(string name){
//         int start = 0;
//         int end = name.size();
//         bool newword = true;
//         for(int i = 0;i<end;i++){
//             if(name[i] == ' '){
//                 newword = true;
//             }
//             else if(newword && name[i]>= 'a' && name[i]<= 'z'){
//                 name[i] = toupper(name[i]);
//                 newword = false;
//             }
//             else{
//                 newword = false;
//             }
//         }
//         return name; 
//     }


// int main(){
//     string s;
//     getline(cin,s);
//     cout<<CamelCase(s);
// }



#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
string CamelCase(string str){
    int n = str.size();
    bool newword = true;
    for(int i = 0;i<n;i++){
        if(str[i] == ' '){
            newword = true;
        }
        else if(newword && str[i] > 'a' && str[i]<'z'){
            str[i] = toupper(str[i]);
            newword = false;
        }
        else{
            newword = false;
        }
    }
    return str;
}
int main(){
    string s;
    getline(cin,s);
    cout<<CamelCase(s);
    return 0;
}
