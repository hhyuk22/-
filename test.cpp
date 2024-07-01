#include <iostream>
#include <vector>
#include <string>

using namespace std;

int z, o;

int fibonacci(int n){
    if(n==0){
        z++;
        return 0;
    }
    else if(n==1){
        o++;
        return 1;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

int main(){
    int a, c;
    vector<int> b;
    cin >> a;
    for(int i=0; i<a; i++){
        cin >> c;
        b.push_back(c);
    }
    for(int i=0; i<a; i++){
        z=0;
        o=0;
        fibonacci(b[i]);
        cout << z << " " << o << endl;
    }
}