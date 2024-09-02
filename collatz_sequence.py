# this is a function that has one parameter named "number" (the function is called collatz()).
def collatz(n):
  while (n != 1):
    if n % 2 == 0:
      print("number :", int(n / 2))
      n = n / 2
    else:
      print("number :", int(n * 3 + 1))
      n = 3 * n + 1

n = int(input("insert a number: "))
collatz(n)   