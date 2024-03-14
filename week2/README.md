week2

문제 1
두 수의 최대공약수와 최소공배수를 구하는 프로그램 작성
두 양의 정수를 입력 받아 그 두 정수의 최대공약수 (GCD: Greatest Common Divisor)와 최소공배
수 (LCM: Least Common Multiple)를 구하는 함수를 구하는 프로그램을 작성하세요.
(Hint: 유클리드 호제법)
아래 예시코드(2page~3page)에서 TODO 부분만 작성할 것. 이외 라이브러리 사용 금지.
입력 예시 1
72 192
출력 예시 1
24 576
입력 예시 2
12 18
출력 예시 2
6 36
#include <iostream>
using namespace std;
// 최대공약수를 계산하는 함수
int gcd(int a, int b) {
//TODO
}
// 최소공배수를 계산하는 함수
int lcm(int a, int b) {
//TODO
}
int main() {
int a, b;
cin >> a >>b;
cout << gcd(a, b) << " " << lcm(a, b);
return 0;
}

문제 2
버블 정렬 또는 삽입 정렬 프로그램 작성
첫번째 줄에 n이 주어지고 두번째 줄에 띄어쓰기로 구분되는 n개의 정수를 입력 받아 버블 정렬
또는 삽입 정렬을 통해 오름차순 정렬하여 띄어쓰기로 구분해서 출력하는 코드를 작성하세요.
단, n은 1000 이하의 양의 정수이며, n개의 정수는 -1000 이상 1000 이하입니다.
아래 예시코드(2page~5page)에서 TODO 부분만 작성할 것. 이외 라이브러리 사용 금지.
입력 예시 1
5
-20 89 24 -59 66
출력 예시 1
-59 -20 24 66 89
입력 예시 2
10
-78 -44 98 -25 -77 -39 -40 83 15 -13
출력 예시 2
-78 -77 -44 -40 -39 -25 -13 15 83 98
#include <iostream>
using namespace std;
// 정렬 함수
void MySort(int arr[], int n) {
//TODO
}
int main() {
int n;
cin >> n; // 첫 번째 줄에서 n 을 입력받음
int* numbers = new int[n]; // 동적으로 정수 배열을 할당
// 두 번째 줄에서 n 개의 정수를 입력받음
for (int i = 0; i < n; i++) {
cin >> numbers[i];
}
// 버블 정렬 수행
MySort(numbers, n);
// 정렬된 배열 출력
for (int i = 0; i < n; i++) {
cout << numbers[i] << " ";
}
return 0;
}
