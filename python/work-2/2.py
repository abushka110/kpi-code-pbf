import math

# задана точність
epsilon = 1e-4

# ініціалізація поточного та попереднього значень pi
pi_approx = 0
# float('inf') - спеціальне значення нескінченності
# гарантує що будь-яке реальне число буде менше за початкове значення
prev_pi_approx = float('inf')

i = 1
# ініціалізація дії між сумою та доданком
sign = 1

# програма проводить обчислення
# доки задана точність більша за різницю між попереднім і поточним значеннями pi
while abs(prev_pi_approx - pi_approx) > epsilon:
    prev_pi_approx = pi_approx
    # розрахунок значення pi за формулою Шарпа
    pi_approx += sign * (1 / (math.pow(3, i) * (2 * i - 1)))
    i += 1
    sign *= -1

pi_approx *= 2 * math.sqrt(3)
print(pi_approx)