#include <bits/stdc++.h>
using namespace std;

int main() {
    char s[100];
    char t[100];
    scanf("%s", s);
    scanf("%s", t);
    // printf("%s\n", s);
    // printf("%s\n", t);
    int idx = 0;
    while(s[idx] != '\0') {
        if(s[idx] != t[idx]) {
            printf("%d\n", idx+1);
            // printf("s,t = (%c, %c)", s[idx], t[idx]);
            return 0;
        }
        idx++;
    }
    if (t[idx] != '\0') {
        printf("%d\n", idx+1);
        return 0;
    }

    printf("%d\n", 0);
    return 0;
}