#include <iostream>

using namespace std;

int tri(int n){
    if(n==3){
        return 0;
    }else if(n==4){
        return 1;
    }
    else if(n%2==0){
        return tri(n/2)+2;
    }
    else if(n%2==1){
        return tri(n+1/2)+2;
    }
}

int main(){
    int a;
    cin >> a;
    cout << tri(a);
}