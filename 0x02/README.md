# C++ 프로그래밍 팁 및 코드 작성 요령

## 함수 인자 전달 방식

1. **정수(integer)**
   - 값이 복사되어 함수로 전달됩니다.
   
2. **배열(array)**
   - 배열의 첫 번째 주소가 함수로 전달됩니다.
   
3. **주소 전달 시 발생할 수 있는 문제**
   - `Null pointer`에 값을 넣거나, 타입을 임의로 변경하는 문제가 발생할 수 있습니다. 이를 해결하기 위해 **레퍼런스(reference)**를 사용하는 것이 좋습니다.

---

## STL과 인자 전달 방식

C++의 **Standard Template Library(STL)**을 사용하여 인자를 전달할 때, 인자를 어떻게 전달하느냐에 따라 성능이 크게 달라질 수 있습니다.

### 예시 코드

#### 복사 전달 방식
```cpp
bool cmp1(vector<int> v1, vector<int> v2, int idx) {
    return v1[idx] > v2[idx];
}
```
- **시간 복잡도**: O(n) (벡터를 복사하는 시간 포함)

#### 참조 전달 방식
```cpp
bool cmp2(vector<int>& v1, vector<int>& v2, int idx) {
    return v1[idx] > v2[idx];
}
```
- **시간 복잡도**: O(1)

**결론**: 대용량 데이터를 다룰 때는 복사 대신 참조로 전달하는 것이 효율적입니다.

---

## 표준 입출력

C++에서는 다양한 입출력 방법을 제공합니다.

### 입력 받기

1. **`scanf`**
   - 공백을 기준으로 입력을 받습니다.
   
2. **`gets`**
   - C++14 이상에서는 삭제되었습니다.
   
3. **`getline`**
   - 한 줄 입력을 받을 때 사용하며, 타입은 `string`이어야 합니다.
   ```cpp
   string s;
   getline(cin, s);
   ```

### 입출력 성능 최적화

- `ios::sync_with_stdio(0)`
  - C++의 `iostream`과 C의 `stdio` 스트림 간 동기화를 끊어줍니다.
  - **주의**: `printf`와 `cout`을 혼용하면 안 됩니다.

- `cin.tie(0)`
  - `cin` 명령이 실행되기 전에 `cout`의 버퍼를 비우는 과정을 생략하여 성능을 향상시킵니다.

- `endl`
  - 개행 문자를 출력한 뒤 출력 버퍼를 비웁니다. 성능이 중요한 경우 `\n`을 사용하는 것이 더 빠릅니다.

---

## 코드 작성 팁

1. **코딩테스트와 개발의 차이점**
   - 코딩테스트에서는 메모리를 효율적으로 사용하고, 자신의 시간을 절약할 수 있는 방법을 선택하세요. 
   - 예: `namespace` 활용 등.

2. **출력 형식**
   - 마지막 공백이나 줄바꿈은 신경 쓰지 않아도 됩니다.

3. **디버깅**
   - 디버거를 사용하기보다 출력을 찍어보는 것이 더 직관적일 수 있습니다. 이는 개인 성향에 따라 다를 수 있습니다.

4. **남의 코드 참고**
   - 문제를 전혀 풀 수 없을 때는 타인의 코드를 참고하는 것을 고려해보세요. 학습의 기회가 될 수 있습니다.

---
