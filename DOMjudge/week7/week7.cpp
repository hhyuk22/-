#include <iostream>
#include <vector>
#include <string>

using namespace std;

void InitNext(string p, string t);

int main(){
    string t;
    string p;
    cin >> t >> p;
    InitNext(p, t);
}

void InitNext(string p, string t){
    int M = p.size();
    int N = t.size();
    vector<int> next(M);
    for(int k=0, l=-1; k<M; k++, l++){ //재시작 위치 알고리즘
        next[k] = l;
        while(l>=0 && p[k]!=p[l]){
            l = next[l];
        }
    }
    int i=0;    //텍스트는 끝번호까지 가야하기 때문에 초기화 하지 않음
    int j;      //텍스트안에서 패턴을 여러개 찾아야 하기 때문에 for문을 통해서 계속 초기화 함
    int a=0;
    vector<int> b;  //텍스트 내에 나오는 패턴의 수 동적으로 할당
    while(i<N){     //KMP 알고리즘
        for(i, j=0; j<M && i<N; i++, j++){
            while(j>=0 && t[i]!=p[j]){
                j = next[j];
            }
        }
        if(j==M){
            a++;        //문자열 t에서 문자열 p가 몇 번 나타나는지 카운트
            b.push_back(i-M+1); //문자열 t에서 문자열 p가 나타나는 위치
        }
    }
    cout << a << endl;
    for(int k=0; k<b.size(); k++){
        cout << b[k] << " ";
    }
}