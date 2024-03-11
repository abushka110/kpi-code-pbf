from math import sqrt, pow

# задана точність
e = 1e-4

# ініціалізація поточного та попереднього значень pi
pi_approx = 1
prev_pi_approx = 0

i = 1

# програма проводить обчислення
# доки задана точність більша за різницю між попереднім і поточним значеннями pi
while abs(pi_approx - prev_pi_approx) >= e:
  prev_pi_approx = pi_approx
  # розрахунок значення pi за формулою Шарпа
  term = 1 / (pow(3, i) * (2 * i + 1))
  if i % 2 == 0:
    pi_approx += term
  else:
    pi_approx -= term
  i += 1

pi_approx *= 2 * sqrt(3)
print(f"Значення константи π: {pi_approx}")
