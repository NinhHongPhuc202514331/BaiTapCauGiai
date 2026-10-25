#include<iostream>
using namespace std;

int A[1000], n;

int main(){
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> A[i];
    }
    int x;
    cin >> x;
    int l=0, r=n-1;
    while (l<=r){
        int mid=(l+r)/2;
        if (A[mid] == x){
            cout << mid << endl;
            return 0;
        }
        if (A[mid]<x) l=mid+1;
        else r=mid-1;
    }
    cout << -1 << endl;
    return 0;
}
