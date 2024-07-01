#include <iostream>
#include <vector>
#include <string>

using namespace std;

int fibo(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }else
        return fibo(n-1)+fibo(n-2);
}
void fibonacci(int n){
    int k=fibo(n-1);
    int j=fibo(n-2);
    cout << k << " " << k+j << endl;
}

int main(){
    int a, c, d;
    vector<int> b;
    cin >> a;
    for(int i=0; i<a; i++){
        cin >> c;
        b.push_back(c);
    }
    for(int i=0; i<a; i++){
        if(b[i]==0){
            cout << "1" << " " << "0" << endl;
        }
        else if(b[i]==1){
            cout << "0" << " " << "1" << endl;
        }
        else{
            fibonacci(b[i]);
        }
    }
}