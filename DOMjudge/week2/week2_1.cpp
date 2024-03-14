#include <iostream>
using namespace std;

//최대공약수를 계산하는 함수
int gcd(int a, int b){
    int c = a;
    int d = b;
    int i=0;
    //유클리드 호제법
    while (1)
    {
        if(c > d && c%d != 0){
        c = c%d;
        }
        else if(c < d && d%c != 0){
            d = d%c;
        }
        else if(c > d && c%d == 0){
            i=d;
            break;
        }
        else if(c < d && d%c == 0){
            i=c;
            break;
        }
    }
    return i;
}
    
    

//최소공배수를 계산하는 함수
int lcm(int a, int b){
    int j;
    j = a*b;
    j = j/gcd(a,b);
    return j;
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << " " << lcm(a, b);

    return 0;
}