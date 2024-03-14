#include <iostream>
using namespace std;

int main() {
    while ('a' < 'b')  // will give infinite loop with (malayalam is a palendrome) because in each itration this condition('a' < 'b')is true. we can do this correct using break statement.
        cout << "malayalam is a palindrome" << endl;
       
    
    return 0;
}