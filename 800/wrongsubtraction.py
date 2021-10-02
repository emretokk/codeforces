input = input().split()
n,k = int(input[0]),int(input[1])
# Little girl Tanya is learning how to decrease a number by one, but she does it wrong
# with a number consisting of two or more digits. Tanya subtracts one from a number by the following algorithm:

# if the last digit of the number is non-zero, she decreases the number by one;
# if the last digit of the number is zero, she divides the number by 10 (i.e. removes the last digit).

# You are given an integer number n.
# Tanya will subtract one from it k times. Your task is to print the result after all k subtractions.
for i in range(0,k):
    if (n%10 == 0):
        n/=10
    else:
        n = n-1
print(int(n))
