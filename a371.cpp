#include <iostream>
#include <string>
using namespace std;

// Sab, Sac, Sbc each one is < or >

// all pattern
// a, b, c < < <
// a, c, b < < >
// b, a, c > < <
// b, c, a > > <
// c, a, b < > >
// c, b, a > > >
int main() {
    string a = "A", b = "B", c = "C";
    string s[3];
    for (int i = 0; i < 3; i++) {
        cin >> s[i];
    }
    if (s[0]=="<"&&s[1]=="<"&&s[2]=="<") {
        cout << b << endl;
    }
    else if (s[0]=="<"&&s[1]=="<"&&s[2]==">")
    {
        cout << c << endl;
    }
    else if(s[0]==">"&&s[1]=="<"&&s[2]=="<") {
        cout << a << endl;
    }
    else if(s[0]==">"&&s[1]==">"&&s[2]=="<"){
        cout << c << endl;
    }
    else if(s[0]=="<"&&s[1]==">"&&s[2]==">") {
        cout << a << endl;
    }
    else if(s[0]==">"&&s[1]==">"&&s[2]==">") {
        cout << b << endl;
    }
    else {
        cout << "Error" << endl;
    }
    return 0;
}