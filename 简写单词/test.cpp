#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    while (cin >> str)
        if (str[0] >= 'a' && str[0] <= 'z') cout << (char)(str[0] - 32);
        else cout << str[0];

    return 0;
}