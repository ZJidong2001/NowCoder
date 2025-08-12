#include <iostream>
#include <queue>
using namespace std;

int main()
{
    long long n = 0, k = 0;
    cin >> n >> k;

    long long sum = 0, x = 0;
    priority_queue<long long> heap;
    while (n--)
    {
        cin >> x;
        sum += x;
        if (x % 2 == 0) heap.push(x);
    }

    while (!heap.empty() && k--)
    {
        int half = heap.top() / 2;
        heap.pop();
        sum -= half;
        if (half % 2 == 0) heap.push(half);
    }

    cout << sum << endl;

    return 0;
}