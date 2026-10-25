#include<iostream>
using namespace std;

int A[1000], n;

void swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}

void inmang(){
    for (int i=0; i<n; i++){
        cout << A[i] << (i == n-1 ? "" : " ");
    }
    cout << endl;
}

int main(){
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> A[i];
    }
    for (int i=0; i<n; i++){
        int min=i;
        for (int j=i+1; j<n; j++){
            if (A[j]<A[min]){
                min=j;
            }
        }
        swap(A[i], A[min]);
        inmang();
    }
    return 0;
}
