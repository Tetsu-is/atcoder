#include <iostream>
#include <string>
#include <map>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    int load = 0;
    int t_pos;
    string t_hand;
    map<string, int> hand;
    hand["L"] = -1;
    hand["R"] = -1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // 初期位置セットのときは初期位置を入れて終了
        cin >> t_pos >> t_hand;
        if (hand[t_hand] == -1)
        {
            hand[t_hand] = t_pos;
            // cout << "set default pos (hand, pos)" << t_hand << ">>" << t_pos << endl;
            continue;
        }
        int diff = abs(t_pos-hand[t_hand]);
        load += diff;
        hand[t_hand] = t_pos;
    }
    cout << load << endl;
    return 0;
}