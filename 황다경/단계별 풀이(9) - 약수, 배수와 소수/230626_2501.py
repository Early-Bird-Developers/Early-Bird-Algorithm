#두 개의 자연수 N과 K가 주어졌을 때, N의 약수 중 K번째로 작은 수를 출력하는 프로그램
N,K = map(int,input().split())
measure = []

for i in range(1, N+1):
    X = N%i
    if X == 0:
        measure.append(i)
        

if len(measure) < K:
    print(0)
else:
    print(measure[K - 1])

