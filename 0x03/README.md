# 배열 및 STL Vector 정리

## 배열
배열은 메모리 상에 원소를 연속적으로 배치한 자료구조입니다.

### 배열의 성질
1. **O(1)**의 시간 복잡도로 k번째 원소 확인 및 변경 가능
2. 추가적으로 소모되는 메모리의 양이 거의 없음
3. 높은 **cache hit rate**
4. 메모리 상에 연속된 공간을 확보해야 하므로 할당에 제약이 있음

### 배열의 연산
- **임의의 위치 원소 확인/변경**: O(1)
- **원소를 끝에 추가**: O(1)
- **마지막 원소를 제거**: O(1)
- **임의의 위치에 원소 추가/제거**: O(n) (밀거나 당겨주는 작업 필요)

### 배열 사용 시 주의점
- `insert`와 `erase` 구현 시 **index 문제**를 주의해야 합니다.

### 배열 초기화 방법
1. `memset(a, 0, sizeof(a))`: 0 또는 -1 이외의 값을 사용할 경우, 2차원 배열에서는 오작동 가능
2. `for`문 사용
3. `fill(a, a + n, 0)`: 가장 무난한 방법

## STL Vector
`vector`는 배열과 달리 크기를 가변적으로 조절할 수 있는 자료구조입니다.

### Vector의 주요 연산
- **초기화**: `vector<int> v;` (깊은 복사 지원)
- **원소 추가**: `v.push_back(1);`
- **특정 위치에 원소 삽입**: `v.insert(v.begin() + x, 3);` (O(n))
- **특정 위치의 원소 제거**: `v.erase(v.begin() + x);` (O(n))
- **마지막 원소 제거**: `v.pop_back();`
- **전체 제거**: `v.clear();`

### Vector의 기타 함수
- `v.size()`: 반환값이 **unsigned int**라는 점을 유의

## 배열과 Vector의 선택 기준
- **배열**: 데이터 변경이 적고 값을 저장 및 빠른 접근이 필요할 때 적합
- **Vector**: 크기가 가변적이고 데이터 추가/삭제가 필요한 경우 적합

배열은 데이터들의 변경보다 값을 저장해 두고 인덱스를 통한 빠른 접근을 해야할 때, 유리하다.