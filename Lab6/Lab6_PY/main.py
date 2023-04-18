#question-1
from math import factorial as fc

n = int(input("enter n: "))
x = int((input("enter x: ")))

a = lambda n, x: n ** x / fc(x)
b = [a(n, x) for x in range(x + 1)]

result = sum(b)
result += 1
print(result)



#question-2
def calculateSum(n):

    global total
    if n == 0:
        return
    else:
        current_sum = 0

        for k in range(1, n + 1):
            current_sum += ((-1) ** (k + 1)) / k
        total += current_sum

        calculateSum(n - 1)


total = 0
calculateSum(5)

print(total)

