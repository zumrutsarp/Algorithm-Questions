N=input()
N = list(map(int,N.split()))
def operation(N):
    
    if len(N) < 100000 and max(N) < 1000:
      min_value = min(N)
      result = sum(N) - min_value
      print(result)

operation(N)