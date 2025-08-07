#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int total=0;
    vector<int> a(n);
    
    for(int i = 0; i < n; i++){ cin >> a[i];
    
        total+=a[i];
    }
     int minimum=a[0];
     for(int i = 0; i < n; i++){
         
       
        minimum=min(minimum,a[i]);
     }
    
    
    int answer=(total-minimum);
    cout << answer;
    
    return 0;
}