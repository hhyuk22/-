<a name="br1"></a> 

전위 순회(preorder traversal), 중위 순회(inorder traversal), 후

위 순회(postorder traversal)

**문제**

이진 트리를 입력받아 전위 순회(preorder traversal), 중위 순회(inorder traversal), 후위 순회

(postorder traversal)한 결과를 출력하는 프로그램을 작성하세요.

예를 들어 위와 같은 이진 트리가 주어지면, 전위 순회, 중위 순회, 후위 순회의 결과는 아래와

같습니다.

\-

\-

\-

전위 순회한 결과: ABDCEFG // (루트) (왼쪽 자식) (오른쪽 자식)

중위 순회한 결과: DBAECFG // (왼쪽 자식) (루트) (오른쪽 자식)

후위 순회한 결과: DBEGFCA // (왼쪽 자식) (오른쪽 자식) (루트)



<a name="br2"></a> 

**입력**

첫째 줄에는 이진 트리의 노드의 개수 N(1 ≤ N ≤ 26)이 주어집니다. 둘째 줄부터 N개의 줄에 걸

쳐 각 노드와 그의 왼쪽 자식 노드, 오른쪽 자식 노드가 주어집니다. 노드의 이름은 A부터 차례대

로 알파벳 대문자로 매겨지며, 항상 A가 루트 노드가 됩니다. 자식 노드가 없는 경우에는 “.”으로

표현합니다.

**출력**

첫째 줄에 전위 순회, 둘째 줄에 중위 순회, 셋째 줄에 후위 순회한 결과를 출력하세요. 각 줄에

N개의 알파벳을 공백 없이 출력하세요.

**제한사항**

1\. 인터넷 검색 시 감점

2\. 지인과 소통 시 감점

입력 예시 1

7

A B C

B D .

C E F

E . .

F . G

D . .

G . .

출력 예시 1

ABDCEFG

DBAECFG

DBEGFCA



<a name="br3"></a> 

입력 예시 2

5

A . B

B . C

C . D

D . E

E . .

출력 예시 2

ABCDE

ABCDE

EDCBA

입력 예시 2

5

A B .

B C .

C D .

D E .

E . .

출력 예시 2

ABCDE

EDCBA

EDCBA

