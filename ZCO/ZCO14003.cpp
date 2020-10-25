#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin >> n;
    vector<long long int > prices;
    for(int i = 0;i<n;i++){
      long long int  cur;
      cin >> cur;
      prices.push_back(cur);
    }
    sort(prices.begin(),prices.end());
    long long int  max_val = prices[0]*n;
    long long int  curval = 0;
    for(int i = 1;i<n;i++){
        curval =  prices[i]*(n-i);
        max_val = max(max_val,curval);

    }
    cout << max_val;
}
