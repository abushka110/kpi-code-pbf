# solution
def get_unique_elements(arr: list):
    unique_arr = []
    for element in arr:
        if element not in unique_arr:
            unique_arr.append(element)
    return unique_arr

# solution 1
# def get_unique_elements(arr):
#     unique_set = set(arr)
#     unique_list = list(unique_set)
#     return unique_list

# test
# функція запитує елементи для масиву, поки не буде натиснуто enter/return
def ask_element():
    arr = []
    element = input("Введіть довільне число(Зупинити введення - 0): ")
    while element != "":
        arr.append(element)
        element = input("Введіть довільне число(Зупинити введення - 0): ")
    return arr

if __name__ == "__main__":
    arr_list = ask_element()
    print(get_unique_elements(arr_list))
