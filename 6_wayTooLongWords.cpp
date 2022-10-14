#include<iostream>  // header file 

using namespace std;    // contains cout , cin

int main (){
    int testCase ;    // defining data type of number of test cases 

    cin >> testCase ;    // taking no. of test cases as input by user 


    while(testCase > 0 ){               // loop over test cases
        string S ;
        cin >> S ;    // taking string as input 
        int lenString = S.size();      // length of string

        if(lenString <= 10) {
            cout << S << endl;      // if length of string S is less than 10 ; same number will be returned ; 
        }
        else{
            cout << S[0] << lenString - 2 << S[lenString-1] << endl ;  // S[0] is first and S[lenString-1] is last element and 
                                                                       // no. of characters between them is len(S)-2 
        }
        testCase-=1 ;       // decrementing the test case number 
    }
    return 0 ;
}