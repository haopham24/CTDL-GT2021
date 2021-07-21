/*
Cho dãy số A[] gồm có N phần tử không âm và số K.
Nhiệm vụ của bạn là hãy xác định xem có tìm được 1 dãy con liên tiếp mà tổng các phần tử bằng K hay không?

Input:
    Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
    Mỗi test gồm số nguyên N và K (1≤ N ≤ 100 000, 0 ≤ K ≤ 1018).
    Dòng tiếp theo gồm N số nguyên A[i] (0 ≤ A[i] ≤ 109).

Output: 
    Với mỗi test, in ra trên một dòng là đáp án thu được. Nếu có hãy in ra “YES”. Nếu không tìm được đáp án, in ra “NO”.

*/

#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long k;
        cin >> k;
        int a[n + 5];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int x = 1;

        int ok = 1, id = 0;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            while (sum > k && id < i)
            {
                sum -= a[id];
                id++;
            }
            if (sum == k)
            {
                cout << "YES";
                ok = 0;
                break;
            }
        }
        if (ok)
            cout << "NO";
        cout << '\n';
    }

    return 0;
}