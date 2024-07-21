n = int(input())
arr = list(map(int,input().split()))
max = max(arr)
arr = list(map(lambda x:x/max*100, arr))
print(sum(arr)/n)
#그립다 파이썬....