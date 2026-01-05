#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int t;
   cin >> t;
   while(t--){
     int n,k;
     cin >> n >> k ;
     vector<int> arr(n);
     for(int i=0; i<n ; i++){
       cin >> arr[i];
     }
     vector<int> copy_arr = arr;
     sort(copy_arr.begin(), copy_arr.end());
     if(copy_arr == arr || k>1){
       cout << "YES" << endl;
     }
     else{
       cout << "NO" << endl;
     }
   }
    return 0;
}

/*
Test cases:
5
3 2
1 2 3
3 1
9 9 9
4 4
6 4 2 1
4 3
10 3 830 14
2 1
3 1

output: 
YES
YES
YES
YES
NO

*/