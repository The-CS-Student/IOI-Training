#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> cur;
    vector<int> brackets;
    for(int i = 0;i<n;i++){
      int cur;
      cin >> cur;
      brackets.push_back(cur);
    }
    int maxdepth = INT_MIN;
    int maxindex = -1;
    int count  = 0;
    for(int i = 0;i<n;i++){
      if(brackets[i]==1){
        count++;
      }
      else{
        count--;
      }
      if(count> maxdepth){
        maxdepth = count;
        maxindex = i;
      }
    }

}
