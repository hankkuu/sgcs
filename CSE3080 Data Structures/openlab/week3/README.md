# Week 3

- 입력: [A.txt](a[3].txt)
- [정답 코드](main.c)

## 문제
`fastTranspose`는 수업 시간에 언급했듯이 `startingPos` 배열을 사용하지 않고 `rowTerms`만 사용해서 구현할 수 있다. `startingPos` 배열 없이 `fastTranspose`를 구현하시오.
참고 : 책 한글판 p89 2번 문제(= 책 영문판 p84 2번 문제)

### 예제 입력
`A.txt`에 행렬에 대한 정보가 주어진다. 첫째 줄에 정수 *n*, *m*이 공백으로 구분되어
주어지고, 둘째 줄부터 *n* + 1번째 줄에 *m*개의 원소가 공백으로 구분되어 주어진다.

```
7 8
-10 78 37 0 0 11 48 0
0 0 -5 52 0 0 0 59
61 -45 0 0 28 0 0 74
0 0 0 14 8 0 0 44
0 1 0 9 9 7 0 1
4 9 6 0 0 0 0 99
0 0 0 0 12 13 14 15
```

### 예제 출력
전치 행렬을 희소 행렬의 형태로 출력한다.

```
8 7 28
0 0 -10
0 2 61
0 5 4
1 0 78
1 2 -45
1 4 1
1 5 9
2 0 37
2 1 -5
2 5 6
3 1 52
3 3 14
3 4 9
4 2 28
4 3 8
4 4 9
4 6 12
5 0 11
5 4 7
5 6 13
6 0 48
6 6 14
7 1 59
7 2 74
7 3 44
7 4 1
7 5 99
7 6 15
```