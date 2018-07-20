import Prime as p
import Reverse as r

for num in range(1, 100):
    if(p.isPrime(num)):
        revNum = r.getReverse(num)
        if(p.isPrime(revNum)):
            print(num)
