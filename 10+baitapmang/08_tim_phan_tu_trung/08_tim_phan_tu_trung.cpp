#include<iostream>
using namespace std;

int A[1000], n;

int main(){
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> A[i];
    }
    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++){
            if (A[i] == A[j]){
                cout << A[i] << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;
    return 0;
}
