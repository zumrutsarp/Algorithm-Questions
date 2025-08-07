#include <bits/stdc++.h>

using namespace std;

int main() {
// write your code here
int n;
cin>>n;

int array[n];
for (int i = 0; i < n; i++) {
    cin >> array[i];
    }
int record_val=0;
int max_val=array[0];
for(int j=0;j<n; j++){
    
    if(max_val<array[j]){
        max_val=array[j];
        record_val++;
    }
}
cout<<record_val;
	return 0;
}