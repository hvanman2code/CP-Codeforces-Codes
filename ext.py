import math
import sys

def main():
    input = sys.stdin.read
    data = input().split()
    
    t = int(data[0])
    results = []
    
    for i in range(1, t + 1):
        k = int(data[i])
        
        ans=(1+math.sqrt(1+(4*k)))/2
        ans=ans*ans
        ans=int(ans)
        
        results.append(str(ans))
    
    print("\n".join(results))

if __name__ == "__main__":
    main()
