#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int t;
   cin >> t;
   while(t--){
     int n,x;
     cin >> n >> x ;
     vector<int> point;
     point.push_back(0);
     for(int i=0; i<n; i++){
       int station;
       cin >> station;
       point.push_back(station);
     }
     point.push_back(x);
     int maxcnt = 0;
     n = point.size();
     for(int i=1; i<n; i++){
       if(i==n-1){
         maxcnt = max(maxcnt, 2*(point[i]-point[i-1]));
         
       }
       else{
         maxcnt = max(maxcnt, point[i]-point[i-1]);
       }
     }
     cout << maxcnt << endl;
     
   }
    return 0;
}

/*
Input :
3
3 7
1 2 5
3 6
1 2 5
1 10
7

Output :
4
3
7

*/