#include<iostream>
using namespace std;

int A[1000], n;

int main(){
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> A[i];
    }
    long long tong=0, trai=0;
    for (int i=0; i<n; i++){
        tong+=A[i];
    }
    bool co=false;
    for (int i=0; i<n; i++){
        long long phai=tong-trai-A[i];
        if (trai == phai){
            if (co) cout << " ";
            cout << i;
            co=true;
        }
        trai+=A[i];
    }
    if (co == false) cout << -1;
    cout << endl;
    return 0;
}
