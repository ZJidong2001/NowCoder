#include <iostream>
using namespace std;

int main()
{
    int N = 0;
    cin >> N;

    int prev = 0, next = 1;
    while (next < N)
    {
        int tmp = prev + next;
        prev = next;
        next = tmp;
    }

    cout << min(N - prev, next - N) << endl;

    return 0;
}