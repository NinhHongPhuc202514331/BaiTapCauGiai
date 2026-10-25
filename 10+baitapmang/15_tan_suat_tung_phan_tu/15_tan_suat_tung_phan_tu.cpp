#include<iostream>
using namespace std;

int A[1000], n;

int main(){
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> A[i];
    }
    int i=0;
    while (i<n){
        int x=A[i];
        int l=i, r=n-1, cuoi=i;
        while (l<=r){
            int mid=(l+r)/2;
            if (A[mid] == x){
                cuoi=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        cout << x << " " << cuoi-i+1 << endl;
        i=cuoi+1;
    }
    return 0;
}
