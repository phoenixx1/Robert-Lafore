/*
    return largest element index
*/
//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int maxint(int *a, int n){
    int max = 0, index;
    for(int i = 0; i < n; i++){
        if(a[i] > max)
		{
			max = a[i];
			index = i;
		}
    }
    return index;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int index = maxint(a, n);
    cout << a[index] << " at " << index;
    return 0;
}
