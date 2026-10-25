#include<iostream>
using namespace std;

int A[1000], n;

int main(){
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> A[i];
    }
    long long max=1LL*A[0]*A[1];
    int vt1=0, vt2=1;
    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++){
            long long tich=1LL*A[i]*A[j];
            if (tich>max){
                max=tich;
                vt1=i;
                vt2=j;
            }
        }
    }
    cout << A[vt1] << " " << A[vt2] << endl;
    cout << max << endl;
    return 0;
}
