#include <bits/stdc++.h>
using namespace std;
void foldinghash(int ts, int n)
{
    ts = ts - 1;
    int temp = ts, p = 1;
    int digts = 0;
    int sum = 0, ans;
    while (ts != 0)
    {
        ts /= 10;
        digts++;
    }
    for (int i = 1; i <= digts; i++)
    {
        p *= 10;
    }
    while (n != 0)
    {
        sum += (n % p);
        n /= p;
    }
    ans = sum % p;
    ans = ans % temp;
    cout << ans << endl;
}
void midsquare(int ts, int n)
{
    ts = ts - 1;
    int digkey = 0;
    int digts = 0;
    int t = ts;
    int c = 1, N = 1, sq = 1, temp = n, ans = 1, p = 1, q = 1;
    while (n > 0)
    {
        n = n / 10;
        digkey++;
    }
    while ((ts) > 0)
    {
        ts = ts / 10;
        digts++;
    }
    sq = temp * temp;
    c = ((2 * digkey) - digts);
    for (int i = 1; i <= c; i++)
    {
        p *= 10;
    }
    for (int i = 1; i <= digts; i++)
    {
        q *= 10;
    }

    N = (sq / p);
    ans = N % (q);
    ans = ans % (t);
    cout << ans << endl;
}
void quadraticProbing(char str[], int idx[], int n)
{
    int mx = *max_element(idx, idx + n);
    char ans[mx + 1];
    for (int i = 0; i < mx + 1; i++)
    {
        ans[i] = '0';
    }
    for (int i = 0; i < n; i++)
    {
        if (ans[idx[i]] == '0')
        {
            ans[idx[i]] = str[i];
        }
        else
        {
            int c = 0;
            while (ans[(idx[i] + c * c) % (mx + 1)] != '0')
            {
                c++;
            }
            ans[(idx[i] + c * c) % (mx + 1)] = str[i];
        }
    }
    for (int i = 0; i < mx + 1; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}
void linearProbing(char str[], int idx[], int n)
{
    int mx = *max_element(idx, idx + n);
    char ans[mx + 1];
    for (int i = 0; i < mx + 1; i++)
    {
        ans[i] = '0';
    }
    for (int i = 0; i < n; i++)
    {
        if (ans[idx[i]] == '0')
        {
            ans[idx[i]] = str[i];
        }
        else
        {
            int c = 0;
            while (ans[(idx[i] + c) % (mx + 1)] != '0')
            {
                c++;
            }
            ans[(idx[i] + c) % (mx + 1)] = str[i];
        }
    }
    for (int i = 0; i < mx + 1; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}
void divisionHash(int nums[], int n, int np)
{
    int mod = n % np;
    cout << mod << endl;
}
int nearestPrime(int n)
{
    int DAT[n + 1] = {0};
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (DAT[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                DAT[j] = 1;
            }
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (DAT[i] == 0)
        {
            return i;
        }
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;
    int TS;
    cin >> TS;
    int nums[TS];
    int k;
    cin >> k;
    char str[n];
    for (int i = 0; i < k; i++)
    {
        cin >> str[i];
    }
    int idx[k];
    for (int i = 0; i < k; i++)
    {
        cin >> idx[i];
    }

    int np = nearestPrime(TS);
    cout << " Division Hash: ";
    divisionHash(nums, n, np);
    cout << endl;

    cout << " Division Mid Square: ";
    midsquare(TS, n);
    cout << endl;

    cout << " Folding Hash: ";
    foldinghash(TS, n);
    cout << endl;

    cout << " Linear Probing: ";
    linearProbing(str, idx, k);
    cout << endl;

    cout << " Quadractic Probing: ";
    quadraticProbing(str, idx, k);
    cout << endl;
}
