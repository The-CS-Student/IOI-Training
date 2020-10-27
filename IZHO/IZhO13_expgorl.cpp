#include <bits/stdc++.h>
using namespace std;
typedef int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    cin >> k;

    string s;
    cin >> s;
    int n = s.size();
    int gx,gy;
    cin >> gx >> gy;
    int lx,ly;
    cin >> lx >> ly;
    vector<vector<ll>> changes;
    int dx = 0;
    int dy = 0;
    for(int i = 0;i<n;i++){
      if(s[i]=='L'){
        dx--;


      }
      else if(s[i]=='R'){
        dx++;
      }
      else if(s[i]=='F'){
        dy++;
      }
      else if(s[i]=='B'){
        dy--;
      }

      vector<ll> cur;
      cur.push_back(dx);
      cur.push_back(dy);
      changes.push_back(cur);
    }
    vector<vector<ll>> endpoints;
    for(int i = 0;i<n;i++){
        vector<ll> cur;
      if(i==n-1){
        cur.push_back(gx+k*changes[i][0]);
        cur.push_back(gy+k*changes[i][1]);
      }
      else{


        cur.push_back(gx+(k-1)*changes[n-1][0]+changes[i][0]);
        cur.push_back(gy+(k-1)*changes[n-1][1]+changes[i][1]);

      }
      endpoints.push_back(cur);
    }
    float max_dist = INT_MIN;
    float min_dist = INT_MAX;
    for(int i = 0;i<n;i++){
      float m1 = (endpoints[i][1]-(gy+changes[i][1]))/(endpoints[i][0]-(gx+changes[i][0]));
      float m2 = -1/m1;
      float b1 = endpoints[i][1] - m1*endpoints[i][0];
      float b2 = ly - m2*lx;
      float desiredx = (m1-m2)/(b2-b1);
      float desiredy = m1*desiredx+b1;
      float curmin = sqrtf((ly-desiredy)*(ly-desiredy)+(lx-desiredx)*(lx-desiredx));
      if(curmin<min_dist){
        min_dist = curmin;
      }
      float max1 = sqrtf((ly-(gy+changes[i][1]))*(ly-(gy+changes[i][1]))+(lx-(gy+changes[i][0]))*(lx-(gy+changes[i][0])));
      float max2 = sqrtf((ly-endpoints[i][1])*(ly-endpoints[i][1])+(lx-endpoints[i][0])*(lx-endpoints[i][0]));
      float curmax  = 0;
      if(max1>max2){
        curmax = max1;
      }
      else{
       curmax = max2;
      }
      if(curmax> max_dist){
        max_dist = curmax;
      }
      cout << min_dist << " " << max_dist;

    }

}
