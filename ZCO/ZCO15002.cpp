#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin >> n >> k;
    vector<int> numbers;
    for(int  i= 0;i<n;i++){
      int cur;
      cin >> cur;
      numbers.push_back(cur);
    }
    sort(numbers.begin(),numbers.end());
    int count = 0;
    int start = 0;
    int end = 0;
    while(start<n && end<n){
      if (abs(numbers[start]-numbers[end]) >=k) {
        start++;
        count+=n-end;

      }
      else{
        end++;
      }

    }
    cout << count ;

}
