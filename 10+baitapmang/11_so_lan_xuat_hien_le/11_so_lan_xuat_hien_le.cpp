#include<iostream>
using namespace std;

int A[1000], n;

int main(){
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> A[i];
    }
    int kq=0;
    for (int i=0; i<n; i++){
        kq=kq^A[i];
    }
    cout << kq << endl;
    return 0;
}
