#include <iostream>
using namespace std;

int main()
{
    float a = 0;
    char b = 0;
    cin >> a >> b;

    int ret = 0;
    ret += 20;
    a -= 1;
    if (a > 0)
    {
        ret += a - (int)a > 0 ? a + 1 : a;
    }
    if (b == 'y') ret += 5;

    std::cout << ret << std::endl;

    return 0;
}