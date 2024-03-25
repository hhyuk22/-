#include <iostream>
using namespace std;

void turn(int n, int a[][100], int b[][100], int &k){
    int c[100][100];
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            c[i][j]=a[n-1-j][i-j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            a[i][j]=c[i][j];
        }
    }
}


int main(){
    int n;
    cin >> n;
    int a[100][100];
    int b[100][100];
    int m=0;
    int k=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cin >> b[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            if(a[i][j]!=b[i][j]){
                m=m+1;
            }
        }
    }
    k=m;
    m=0;
    turn(n, a, b, k);
    m=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            if(a[i][j]!=b[i][j]){
                m=m+1;
            }
        }
    }
    if(m<k){
        k=m;
    }
    turn(n, a, b, k);
    m=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            if(a[i][j]!=b[i][j]){
                m=m+1;
            }
        }
    }
    if(m<k){
        k=m;
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<=i/2; j++){
            int temp;
            temp = a[i][j];
            a[i][j]=a[i][i-j];
            a[i][i-j]=temp;
        }
    }
    m=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            if(a[i][j]!=b[i][j]){
                m=m+1;
            }
        }
    }
    if(m<k){
        k=m;
    }

    turn(n, a, b, k);
    m=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            if(a[i][j]!=b[i][j]){
                m=m+1;
            }
        }
    }
    if(m<k){
        k=m;
    }
    turn(n, a, b, k);
    m=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            if(a[i][j]!=b[i][j]){
                m=m+1;
            }
        }
    }
    if(m<k){
        k=m;
    }
    cout << k;
}