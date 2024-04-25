#include <iostream>

using namespace std;

void front(char a[], int index) {
    if (a[index] == '.') {
        return;
    }
    cout << a[index];
    front(a, 2 * index);
    front(a, 2 * index + 1);
    return;
}

void mid(char a[], int index) {
    if (a[index] == '.') {
        return;
    }
    mid(a, 2 * index);
    cout << a[index];
    mid(a, 2 * index + 1);
    return;
}

void back(char a[], int index) {
    if (a[index] == '.') {
        return;
    }
    back(a, 2 * index);
    back(a, 2 * index + 1);
    cout << a[index];
    return;
}

int main(){
    int n;
    cin >> n;
    char a[1000000];
    for(int i=1; i<1000000; i++){
        a[i]='.';
    }
    cin >> a[1] >> a[2] >> a[3];
    for(int i=0; i<n-1; i++){
        char x;
        cin >> x;
        int k=1;
        for(int j=1; j<1000000; j++){
            if(a[j]==x){
                break;
            }
            else{
                k++;
            }
        }
        cin >> a[k*2] >> a[k*2+1];
    }

    front(a, 1);
    cout << endl;
    mid(a, 1);
    cout << endl;
    back(a, 1);

    return 0;
}