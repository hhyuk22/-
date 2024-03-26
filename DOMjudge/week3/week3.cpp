#include <iostream>
using namespace std;

void turn(int n, int a[][100], int b[][100], int &k){//120도 회전시켜주는 함수
    int c[100][100];
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            c[i][j]=a[n-1-j][i-j];//회전시킨 값을 c에 저장한다
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
    //경우의 수는 피라미드를 그냥 돌려서 나오는 3가지 모양,
    //좌우대칭 후 돌려서 나오는 3가지 모양
    //총 6가지의 경우의 수가 있다
    //6가지를 각각 b와 모두 비교하는 프로그램을 만들었다

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
    for(int i=0; i<n; i++){//b와a를 비교하는 for문
        for(int j=0; j<=i; j++){
            if(a[i][j]!=b[i][j]){
                m=m+1;
            }
        }
    }
    if(m<k){
        k=m;//k값에 가장 작은 결과값을 저장
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
    
    for(int i=0; i<n; i++){//좌우대칭을 시켜주는 for문
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