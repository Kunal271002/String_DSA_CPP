//TO concatinate character Function
#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
int main(){

    char Name[20] = "Kunal";
    char Surname[20] = "Sharma";
    strcat(Name,Surname);
    cout<<Name;

    return 0;
}