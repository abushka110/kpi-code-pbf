# solution
# перевірка чи є число простим
def is_prime(n):
    if n <= 1:
        return False
    if n <= 3:
        return True
    if n % 2 == 0 or n % 3 == 0:
        return False
    i = 5
    while i * i <= n:
        if n % i == 0 or n % (i + 2) == 0:
            return False
        i += 6
    return True

# перевірка чи є числа-близнюки
def has_twin_primes(n):
    for i in range(n, 2*n + 1):
        if is_prime(i) and is_prime(i + 2):
            return True
    return False

# test
if __name__ == "__main__":
    print(has_twin_primes(12))