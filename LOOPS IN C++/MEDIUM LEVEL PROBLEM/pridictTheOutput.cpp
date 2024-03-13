#include <iostream>
using namespace std;

int main() {
    int j;
    while (j <= 10) {
        cout << j << endl;
        j = j + 1;     
        
        // will give an error because we are not initializing j , if we initialize j by one then same piece of code will print 1 to 10.
    }
    return 0;
}
