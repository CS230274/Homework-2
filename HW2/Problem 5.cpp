//
//  main.cpp
//  Problem 5
//
//  Created by Muhammadjon Parpiyev on 04/10/23.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int input;
    
    cin>>input;
    
    int year = input / 365;
    
    int month = (input - 365*year)/30;
    
    int day=input-(365*year+month*30);
    
    cout<<year<<endl<<month<<endl<<day<<endl;
    return 0;
}
