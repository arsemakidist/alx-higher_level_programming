mport random
number = random.randint(-10000, 10000)
if number < 0:
dig = abs(number) % 10 * -1
else:
dig = number % 10
print("Last digit of {} is {} and is".format(number, dig), end=" ")
if dig > 5:
print("greater than 5")
elif dig == 0:
print("0")
else:
print("less than 6 and not 0")
