#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> cobol;
    vector<int> prefix;
    vector<int> pole;
    vector<int> dough;
    vector<int> cnt;
    int pref = 0;
    for(int i = 0;i<n;i++){
      int c,p,d;
      cin >> c >> p >> d;
      pref+=c;
      prefix.push_back(pref);
      cnt.push_back(p+d);
    }
    sort(cnt.begin(),cnt.end(),greater<int>());
    for(int  i = 0;i<n;i++){
      prefix[i]+=cnt[i];
    }
    cout << *max_element(prefix.begin(),prefix.end()) << "\n";



}
