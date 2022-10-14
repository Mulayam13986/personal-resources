#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    string S ;
    cin >> S ;
    int lenString ; 
    lenString = S.size();

    int digitSummation = 0 ; 
    for(int i=0; i<lenString; i++){
        char a = S[i]; 
        digitSummation += stoi(a) ; 

    }
    cout << digitSummation << endl ;
    return 0 ; 

}
