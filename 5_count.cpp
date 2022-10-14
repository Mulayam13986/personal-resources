#include<iostream>
#include<bits/stdc++.h>   // header file 

using namespace std;

int main(){

    string S ;             
    cin >> S ;    // input as string 
    int lenString ; 
    lenString = S.size();   // finding length of string S 

    int digitSummation = 0 ;  // sum of all digits starting at zero 
                              // we will add each digit by iterating through string by loop 
    for(int i=0; i<lenString; i++){
        char a = S[i];  // element at index i in S
        digitSummation += a - '0';    // to change to integer from character integer i.e changing 'a' to a 

    }
    cout << digitSummation << endl ;   // output is sum of all digits
    return 0 ; 

}
