#include <iostream>
using namespace std;

int main() {
    int i;    //should give an error
    while (i = 10) {
        cout << i << endl;
        i = i + 1;   
    }
    return 0;
}
