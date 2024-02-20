# solution
# Calculates the sum Y = sum(i! from i=1 to n)
def calculate_y(n):
  y = 0
  for i in range(1, n + 1):
    factorial = 1
    for j in range(1, i + 1):
      factorial *= j
    y += factorial
  return y

# Calculate Y for n values from 3 to 10
for n in range(3, 11):
  y = calculate_y(n)
  print(f"For n = {n}, Y = {y}")
