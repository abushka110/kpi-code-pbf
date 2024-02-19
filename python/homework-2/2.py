# solution
def swap_groups(elements: list, K: int, M: int, P: int):
    group1 = elements[K:K+M]
    group2 = elements[P:P+M]
    elements[K:K+M] = group2
    elements[P:P+M] = group1
    return elements

# test
if __name__ == "__main__":
    A = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    print(swap_groups(A, 2, 3, 6))  # [1, 2, 7, 8, 9, 6, 3, 4, 5, 10]