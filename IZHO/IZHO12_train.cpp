#include <bits/stdc++.h>
using namespace std;
typedef long long int lld;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lld n,tracks;
    cin >> n >> tracks;
    vector<lld> wagons;
    for(int i =0 ;i<n;i++){
      lld cur;
      cin >> cur;
      wagons.push_back(cur);
    }
    vector<stack<lld>> t;
    vector<lld> chosen;
    lld order[n];
    stack<lld> one;
    int stackcount = 1;
    one.push(wagons[0]);
    order[wagons[0]-1] = 1;
    chosen.push_back(1);
    t.push_back(one);
    for(int i = 1;i<n;i++){
      bool isinserted = false;
      for(int j = 0;j<stackcount;j++){
        lld lastelement = t[j].top();
        if(wagons[i]>lastelement){
          chosen.push_back(j+1);
          order[wagons[i]-1] =j+1;
          isinserted = true;
          t[j].push(wagons[i]);
          break;
        }
      }
      if(!isinserted){
        chosen.push_back(stackcount+1);

        order[wagons[i]-1] =stackcount+1;
        stack<lld> cur;
        cur.push(wagons[i]);
        t.push_back(cur);
        stackcount++;
      }
    }
    for(int i = 0;i<n;i++){
      cout << chosen[i] << " ";
    }
    cout << "\n";
    for(int i = 0;i<n;i++){
      cout << order[i] << " ";
    }
    cout << "\n";


}
