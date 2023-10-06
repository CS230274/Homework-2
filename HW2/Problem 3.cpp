//
//  main.cpp
//  Problem 3
//
//  Created by Muhammadjon Parpiyev on 04/10/23.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    double g1 = 4.1;
    int c1 = 3;
    
    double g2 = 4.3;
    int c2 = 4;
    
    double g3 = 3.9;
    int c3 = 5;
    
    double gpa = (g1*c1+g2*c2+g3*c3)/(c1+c2+c3);
    
    cout<<gpa<<endl;
    return 0;
}
