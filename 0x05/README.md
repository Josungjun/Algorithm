# 스택(Stack)

스택은 **한쪽 끝에서만** 자료를 넣거나 뺄 수 있는 자료구조이며, **FILO (First In, Last Out)** 방식으로 동작한다.  
큐(Queue), 스택(Stack), 덱(Deque)은 **Restricted Structure** 라고도 한다.

## 연산 시간 복잡도
| 연산 | 시간 복잡도 |
|------|------------|
| 원소 추가 (Push) | **O(1)** |
| 원소 제거 (Pop) | **O(1)** |
| 제일 상단의 원소 확인 (Top) | **O(1)** |
| 제일 상단이 아닌 원소 확인/변경 | **불가능** (원칙적으로) |

## STL Stack (C++)
C++에서는 `<stack>` 헤더를 통해 **STL Stack**을 사용할 수 있다.

```cpp
#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;

    s.push(10);  // 원소 추가
    s.push(20);
    s.push(30);

    std::cout << "Top: " << s.top() << std::endl;  // 30

    s.pop();  // 최상단 원소 제거

    std::cout << "Top after pop: " << s.top() << std::endl;  // 20

    return 0;
}
