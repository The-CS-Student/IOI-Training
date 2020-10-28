#include <bits/stdc++.h>
using namespace std;
int GetRightPosition(int A[], int l, int r, int key)
{
    int m;
    int maxindex = -1;
    while( r - l > 1 )
    {
        m = l + (r - l)/2;

        if( A[m] >= key ){

                      l = m;
                      maxindex = max(maxindex,m);
        }

        else{
            r = m;
        }

    }

    return maxindex;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin >> n >> m;
    vector<int> disk1;
    vector<int> disk2;
    for(int i = 0;i<n;i++){
      int cur;
      cin >> cur;
      disk1.push_back(cur);
    }
    for(int i  =0;i<m;i++){
      int cur;
      cin >> cur;
      disk2.push_back(cur);
    }
    int pos[n];
    int curmin = INT_MAX;
    for(int i = 0;i<n;i++){
      curmin  = min(curmin,disk1[i]);
      pos[i] = curmin;
    }

    int restricted = n;

    for(int i = 0;i<m;i++){
      int key = disk2[i];
      int right = GetRightPosition(pos,0, restricted-1, key);
      restricted = right+1;'



    }



    cout << restricted << "\n";


}
