#include <bits/stdc++.h>
using namespace std;
bool Game(int n,string game,map<string,int>& gamePos,bool first){
  bool win = false;
  for(int i = 0;i<n-1;i++){
    if(game[i]=='1' && game[i+1]=='0'){
      if(i+1==n-1){
        if(first){
          win = true;
          gamePos[game] = win;
        }
        else{

          gamePos[game] = win;
        }


      }
      else{

          string ngame = game;
          ngame[i] = game[i+1];
          ngame[i+1] = game[i];


          bool curwin =Game(n,ngame,gamePos,!first);
          gamePos[ngame] = curwin;


        win = win||curwin;

      }

    }
  }
  return win;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin >> n >> m;
    string game(n,'0');
    int before = 0;
    for(int i = 0;i<m;i++){

      int cur;
      cin >> cur;
      if(i==0){
        before = cur-1;
      }
      game[cur-1] = '1';
    }
    int zerocount  = n-(before+m);
    int count = 0;
    for(int i = 0;i<n;i++){
      if(game[i]=='1' && game[i+1]=='0'){
        if(i+2<=n-1){
          if(game[i+2]=='1'){
            zerocount--;
          }
        }
        if(zerocount%2==1){
          count++;
        }


      }
      zerocount++;
    }
    cout << count << "\n";






}
