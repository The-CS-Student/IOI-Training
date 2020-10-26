#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin >> n;
    vector<long long int> strengths;
    for(int i =0;i<n;i++){
      long long int cur;
      cin >> cur;
      strengths.push_back(cur);
    }
    sort(strengths.begin(),strengths.end());
    long long int total_strength = 0;
    long long int prefix_strength = 0;
    strengths[0] = 0;
    for(int i = 1;i<n;i++){
      prefix_strength+=i*(strengths[i]-strengths[i-1]);
      total_strength += prefix_strength;
    }
    cout << total_strength;

}
