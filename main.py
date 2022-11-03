import time 
a1 = 0
a2 = 1

while (True):
    res = a1 + a2
    a1 = a2
    a2 = res
    print(f"{a1} + {a2} = {res}")
    time.sleep(0.5)