#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;

    string ret;
    for (auto ch : str)
        if (ret.empty() || ch != ret.back()) ret.push_back(ch);
        else ret.pop_back();

    if (ret.empty()) cout << 0 << endl;
    else cout << ret << endl;

    return 0;
}