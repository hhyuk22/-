피보나치 함수 

**문제** 

피보나치 수는 첫째 및 둘째 항이 1이며 그 뒤의 모든 항은 바로 앞 두 항의 합인 수열입니다.  아래 소스 코드는 N번째 피보나치 수를 구하는 재귀함수입니다. 

int fibonacci(int n) { ![](Aspose.Words.47f091bd-65d9-4981-a748-69257241c49b.001.png)

`    `if (n == 0) { 

`        `print("0"); 

`        `return 0; 

`    `} else if (n == 1) { 

`        `print("1"); 

`        `return 1; 

`    `} else  

`        `return fibonacci(n‐1) + fibonacci(n‐2); } 

fibonacci(3)을 호출하면 다음과 같이 동작합니다. 

- fibonacci(3)은 fibonacci(2)와 fibonacci(1) (첫 번째 호출)을 호출함 
- fibonacci(2)는 fibonacci(1) (두 번째 호출)과 fibonacci(0)을 호출함 
- 두 번째 호출한 fibonacci(1)은 1을 출력하고 1을 리턴함 
- fibonacci(0)은 0을 출력하고, 0을 리턴함 
- fibonacci(2)는 fibonacci(1)과 fibonacci(0)의 결과를 얻고, 1을 리턴함 
- 첫 번째 호출한 fibonacci(1)은 1을 출력하고, 1을 리턴함 
- fibonacci(3)은 fibonacci(2)와 fibonacci(1)의 결과를 얻고, 2를 리턴함 

이 때, 0은 1번 출력되고, 1은 2번 출력됩니다. N이 주어졌을 때, fibonacci(N)을 호출한 경우, 0과 1이 각각 몇 번 출력되는지 구하는 프로그램을 작성하세요. 

**입력** 

첫째 줄에 테스트 케이스의 개수 T가 주어집니다. 둘째 줄부터 T개의 N이 주어집니다. N은 40보 다 작거나 같은 자연수 또는 0입니다. 

**출력** 

T개의 각 테스트 케이스마다 0이 출력되는 횟수와 1이 출력되는 횟수를 공백으로 구분해서 출력 하세요. 

**제한사항** 

1. 인터넷 검색 시 감점 
1. 지인과 소통 시 감점 
1. 모든 자료구조 사용가능 (vector, list, stack, 등등) 

입력 예시 1 

3 ![](Aspose.Words.47f091bd-65d9-4981-a748-69257241c49b.002.png)0 1 3 

출력 예시 1 

1 0 ![](Aspose.Words.47f091bd-65d9-4981-a748-69257241c49b.003.png)0 1 

1 2 

입력 예시 2 

2 ![](Aspose.Words.47f091bd-65d9-4981-a748-69257241c49b.004.png)37 9 

출력 예시 2 

14930352 24157817 ![](Aspose.Words.47f091bd-65d9-4981-a748-69257241c49b.005.png)21 34 

입력 예시 3 

5 ![](Aspose.Words.47f091bd-65d9-4981-a748-69257241c49b.006.png)35 2 30 5 10 

출력 예시 3 

5702887 9227465 ![](Aspose.Words.47f091bd-65d9-4981-a748-69257241c49b.007.png)1 1 

514229 832040 

3 5 

34 55 
