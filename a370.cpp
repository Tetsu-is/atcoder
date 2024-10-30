#include <iostream>
#include <string>
using namespace std;

int main()
{
    int l, r = 0;
    cin >> l >> r;
    if(l == r) {
        cout << "Invalid" << endl;
    } 
    else if(l > r) {
        cout << "Yes" << endl;
    } 
    else {
        cout << "No" << endl;
    }
    return 0;
}
