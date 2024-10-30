#include <iostream>
using namespace std;

int main() {
    int a, b;
    // ３つの変数の並べ方の総数は 3! = 6 通り
    // A, Bが異なる数の場合は |a-b|間隔で外側に配置できるので+2
    // さらに |a-b|/2が整数ならば間にxをおける+1

    // 2つが同じ値のときは 3,3,3のようにするしかないので1
    cin >> a >> b;
    if(a == b) {
        cout << 1 << endl;
        return 0;
    }
    if((a-b)%2 == 0){
        cout << 3 << endl;
        return 0;
    }

    cout << 2 << endl;
    return 0;
}