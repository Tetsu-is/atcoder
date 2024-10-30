#include <iostream>
using namespace std;
#include <string>

int main() {
    int n, m, tn = 0;
    string ts;
    cin >> n >> m;
    //create map num to num allocation
    int *arr = new int[n];
    for (int i = 0; i<m; i++){
        cin >> tn;
        cin >> ts;
        if(ts == "F"){
            cout << "No" << endl;
            continue;
        }

        if(arr[tn-1] == 0) {
            arr[tn-1] = 1;
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}