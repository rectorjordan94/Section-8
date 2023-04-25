//
//  main.cpp
//  Statements
//
//  Created by Jordan Rector on 4/25/23.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    
    vector <int> test_scores {100, 95, 99};
    
    test_scores.push_back(90);
    
    cout << "\n First test score: " << test_scores.at(0);
    cout << "\n Second test score: " << test_scores.at(1);
    cout << "\n Third test score: " << test_scores.at(2);
    cout << "\n Fourth test score: " << test_scores.at(3);
    
    return 0;
}
