#include<iostream>
using namespace std;

int n;
int A[1000];

void in(int A[], int n){
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

void sapxep(int A[], int n){
    for(int i=1; i<n; i++){
        int x=A[i];
        int j=i-1;
        while(j >= 0 && A[j] > x){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
        in(A,n);
    }
}

int main(){
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    sapxep(A,n);
    for(int i=0; i<n; i++){
        cout << A[i] << " ";
    }
    cout<<endl;
    return 0;
}