// Задача о 8 ферзях
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int aa, bb;
    vector<int> a;
    vector<int> b;
    for (int i = 0; i < 8; ++i) {
        cin >> aa >> bb;
        a.push_back(aa);
        b.push_back(bb);
    }
    for (int i = 0; i < a.size() - 1; ++i) {
        for (int j = i + 1; j < a.size(); ++j) {
            if (abs(a[i] - a[j]) == abs(b[i] - b[j]) || (a[i] == a[j]) || (b[i] == b[j])) {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}
