2.Сортировка обменом (пузырьком)
def bubble_sort(arr): 

    n = len(arr) 

    for i in range(n): 

        for j in range(0, n - i - 1): 

            if arr[j] > arr[j + 1]: 

                arr[j], arr[j + 1] = arr[j + 1], arr[j] 

 

# Пример использования 

arr = [64, 34, 25, 12, 22, 11, 90] 

print("Исходный массив:", arr) 

bubble_sort(arr) 

print("Отсортированный массив:", arr) 
5.Сортировка Шелла
def shell_sort(arr): 

    n = len(arr) 

    gap = n // 2 

     

    while gap > 0: 

        for i in range(gap, n): 

            temp = arr[i] 

            j = i 

            while j >= gap and arr[j - gap] > temp: 

                arr[j] = arr[j - gap] 

                j -= gap 

            arr[j] = temp 

        gap //= 2 

 

# Пример использования 

arr = [12, 34, 54, 2, 3] 

print("Исходный массив:", arr) 

shell_sort(arr) 
print("Отсортированный массив:", arr) 

6.Быстрая сортировка 
def quick_sort(arr): 

    if len(arr) <= 1: 

        return arr 

     

    pivot = arr[len(arr) // 2] 

    left = [x for x in arr if x < pivot] 

    middle = [x for x in arr if x == pivot] 

    right = [x for x in arr if x > pivot] 

     

    return quick_sort(left) + middle + quick_sort(right) 

 

# Пример использования 

arr = [10, 7, 8, 9, 1, 5] 

print("Исходный массив:", arr) 

sorted_arr = quick_sort(arr) 

print("Отсортированный массив:", sorted_arr) 

8.Последовательный поиск
def linear_search(arr, target): 

    for i in range(len(arr)): 

        if arr[i] == target: 

            return i 

    return -1 

 

# Пример использования 

arr = [3, 5, 2, 7, 9, 1, 4] 

target = 7 

result = linear_search(arr, target) 

if result != -1: 

    print(f"Элемент найден на позиции: {result}") 

else: 

    print("Элемент не найден") 
11.Фибоначчи поиск 
def fibonacci_search(arr, target): 

    n = len(arr) 

    fib_m2 = 0 

    fib_m1 = 1 

    fib_m = fib_m2 + fib_m1 

    while fib_m < n: 

        fib_m2 = fib_m1 

        fib_m1 = fib_m 

        fib_m = fib_m2 + fib_m1 

    offset = -1 

    while fib_m > 1: 

        i = min(offset + fib_m2, n - 1) 

        if arr[i] < target: 

            fib_m = fib_m1 

            fib_m1 = fib_m2 

            fib_m2 = fib_m - fib_m1 

            offset = i 

        elif arr[i] > target: 

            fib_m = fib_m2 

            fib_m1 = fib_m1 - fib_m2 

            fib_m2 = fib_m - fib_m1 

        else: 

            return 1 

    if fib_m1 and offset + 1 < n and arr[offset + 1] == target: 

        return offset + 1 

    return -1 

 

# Пример использования 

arr = [10, 22, 35, 40, 45, 50, 80, 82, 85, 90, 100] 

target = 85 

result = fibonacci_search(arr, target) 

if result != -1: 

    print(f"Элемент найден на позиции: {result}") 

else: 

    print("Элемент не найден") 
