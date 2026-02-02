#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m, a, b;
    cin >>n>>m>>a>>b;

    int full = n/m;
    int remaining = n%m;

    int cost = full * min(m * a, b) + min(remaining * a, b);

    cout << cost << endl;
}