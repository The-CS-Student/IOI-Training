#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,h;
    cin >> n >> h;
    vector<int> boxes;
    for(int i = 0;i<n;i++){
      int cur;
      cin >> cur;
      boxes.push_back(cur);
    }
    int command;
    cin >> command;
    int index = 0;
    bool picked = false;
    while(command!=0){

      if(command==1){
        if(index>0){
          index--;
        }
      }
      else if(command==2){
        if(index<n-1){
          index++;
        }
      }
      else if(command==3){
        if(boxes[index]>0){
          if(!picked){
            picked=true;
            boxes[index]--;
          }

        }
      }
      else if(command==4){
        if(boxes[index]<h){
          if(picked){
            picked=false;
            boxes[index]++;
          }

        }
      }
      else if(command==0){
        break;
      }
      cin >> command;
    }
    for(int i = 0;i<n;i++){
      cout << boxes[i] << " ";

    }


}
