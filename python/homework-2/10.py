def calculate_y(x):
  y = 0
  for k in range(1, 11):
    y += 10 * x * (1 - x ** 3) / (k * x + 3)
  return y

# Calculate Y for x values from 2 to 4 with a step of 0.1
for x in range(20, 41, 1):
  x = x / 10
  y = calculate_y(x)
  print(f"For x = {x}, Y = {y}")
