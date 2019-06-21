# Week 2

- 입력: [A.txt](A.txt), [B.txt](B.txt), [C.txt](C.txt)
- [정답 코드](main.c)

## 문제
100*x*<sup>1000</sup>+1 과 같은 다항식을 담으려면 1000개짜리 배열이 필요하지만, 998개 칸의 메모리가 낭비된다. 이를 해결하기 위해 다항식을 저장하기 위한 ADT를 정의한다.
정의한 ADT를 사용해 세 개의 다항식을 입력받고, 세 다항식의 합을 출력하는 프로그램을 작성하시오. 다음을 구현하고, 사용하여 완성한다. (교과서 2.4절 참고) 

- ADT Poly을 정의한다.
- `padd` 함수는 다항식 덧셈을 하는 함수이다. (Program 2.6)
- `readPoly` 함수는 파일로부터 다항식을 읽어온다. (연습문제 2)
- `printPoly` 함수는 다항식 덧셈 결과를 출력한다. (연습문제 2)

### 예제 입력
파일에 저장된 세 개의 다항식 (파일 `A.txt`, `B.txt`, `C.txt`에 계수와 지수 저장)
- A(*x*) = 2*x*<sup>1000</sup> + 3*x*<sup>500</sup> + 7*x*<sup>200</sup> + 8*x*<sup>120</sup> + 9*x*<sup>50</sup> + 2*x*<sup>40</sup> + 10*x*<sup>10</sup> + 20*x*<sup>5</sup>
- B(*x*) = 7*x*<sup>25</sup> + 8*x*<sup>23</sup> + 10*x*<sup>20</sup> + 2*x*<sup>18</sup> + 6*x*<sup>14</sup> - 2*x*<sup>10</sup> + *x*<sup>9</sup> + 7*x*<sup>6</sup> + 8*x*<sup>5</sup> + 2*x*<sup>3</sup> + 9
- C(*x*) = 13*x*<sup>1000</sup> + 15*x*<sup>500</sup> + 4*x*<sup>200</sup> + 12*x*<sup>120</sup> - 4*x*<sup>50</sup> + *x*<sup>40</sup> + 3*x*<sup>10</sup> + 3*x*<sup>5</sup>

```
2 1000
3 500
7 200
8 120
9 50
2 40
10 10
20 5
```

```
7 25
8 23
10 20
2 18
6 14
-2 10
1 9
7 6
8 5
2 3
9 0
```

```
13 1000
15 500
4 200
12 120
-4 50
1 40
3 10
3 5
```

### 예제 출력
세 다항식 A, B, C의 합을 다음과 같이 (계수, 지수) 형태로 출력한다.

```
(15,1000), (18,500), (11,200), (20,120), (5,50), (3,40), (7,25), (8,23), (10,20), (2,18), (6,14), (11,10), (1,9), (7,6), (31,5), (2,3), (9,0)
```