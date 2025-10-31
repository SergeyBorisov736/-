1.Сортировка выбором (Selection Sort) 

#include <iostream> 

using namespace std; 

void selectionSort(int arr[], int n) { 

    for (int i = 0; i < n - 1; i++) { 

        int minIndex = i; 

        for (int j = i + 1; j < n; j++) { 

            if (arr[j] < arr[minIndex]) { 

                minIndex = j; 

            } 

        } 

        if (minIndex != i) { 

            int temp = arr[i]; 

            arr[i] = arr[minIndex]; 

            arr[minIndex] = temp; 

        } 

    } 

} 

 

int main() { 

    int arr[] = {64, 25, 12, 22, 11}; 

    int n = sizeof(arr) / sizeof(arr[0]); 


    cout << "Исходный массив: "; 

    for (int i = 0; i < n; i++) { 

        cout << arr[i] << " "; 

    } 

    cout << endl;   

    selectionSort(arr, n); 
     

    cout << "Отсортированный массив: "; 

    for (int i = 0; i < n; i++) { 

        cout << arr[i] << " "; 

    } 

    cout << endl; 

    return 0; 

} 
Ввод: 64 25 12 22 11 
Вывод: 11 12 22 25 64 
3.Сортировка вставками
№include <iostream> 

using namespace std 

void insertionSort(int arr[], int n) { 

    for (int i = 1; i < n; i++) { 

        int key = arr[i]; 

        int j = i - 1; 

        while (j >= 0 && arr[j] > key) { 

            arr[j + 1] = arr[j]; 

            j = j - 1; 

        } 

        arr[j + 1] = key; 

    } 

} 

int main() { 

    int arr[] = {12, 11, 13, 5, 6}; 

    int n = sizeof(arr) / sizeof(arr[0]); 

     

    cout << "Исходный массив: "; 

    for (int i = 0; i < n; i++) { 

        cout << arr[i] << " "; 

    } 

    cout << endl 

    insertionSort(arr, n); 

    cout << "Отсортированный массив: "; 

    for (int i = 0; i < n; i++) { 

        cout << arr[i] << " "; 

    } 

    cout << endl; 

    return 0; 

} 
Ввод: 12 11 13 5 6 
Вывод: 5 6 11 12 13 
4.Сортировка слиянием
#include <iostream> 

using namespace std 

void merge(int arr[], int left, int mid, int right) { 

    int n1 = mid - left + 1; 

    int n2 = right - mid; 

    int L[n1], R[n2] 

    for (int i = 0; i < n1; i++) 

        L[i] = arr[left + i]; 

    for (int j = 0; j < n2; j++) 

        R[j] = arr[mid + 1 + j]; 

    int i = 0, j = 0, k = left; 

    while (i < n1 && j < n2) { 

        if (L[i] <= R[j]) { 

            arr[k] = L[i]; 

            i++; 

        } else { 

            arr[k] = R[j]; 

            j++; 

        } 

        k++; 

    } 

    while (i < n1) { 

        arr[k] = L[i]; 

        i++; 

        k++; 

    } 

    while (j < n2) { 

        arr[k] = R[j]; 

        j++; 

        k++; 

    } 

} 

 

void mergeSort(int arr[], int left, int right) { 

    if (left < right) { 

        int mid = left + (right - left) / 2; 

        mergeSort(arr, left, mid); 

        mergeSort(arr, mid + 1, right); 

        merge(arr, left, mid, right); 

    } 

} 

int main() { 

    int arr[] = {38, 27, 43, 3, 9, 82, 10}; 

    int n = sizeof(arr) / sizeof(arr[0]); 

    cout << "Исходный массив: "; 

    for (int i = 0; i < n; i++) { 

        cout << arr[i] << " "; 

    } 

    cout << endl; 

    mergeSort(arr, 0, n - 1) 

    cout << "Отсортированный массив: "; 

    for (int i = 0; i < n; i++) { 

        cout << arr[i] << " "; 

    } 

    cout << endl; 

    return 0; 

} 
Ввод: 38 27 43 3 9 82 10 
Вывод: 3 9 10 27 38 43 82 

7.Пирамидальная сортировка
#include <iostream> 

using namespace std; 

void heapify(int arr[], int n, int i) { 

    int largest = i; 

    int left = 2 * i + 1; 

    int right = 2 * i + 2; 

    if (left < n && arr[left] > arr[largest]) 

        largest = left; 

    if (right < n && arr[right] > arr[largest]) 

        largest = right; 

    if (largest != i) { 

        swap(arr[i], arr[largest]); 

        heapify(arr, n, largest); 

    } 

} 

 

void heapSort(int arr[], int n) { 

    for (int i = n / 2 - 1; i >= 0; i--) 

        heapify(arr, n, i); 

 

    for (int i = n - 1; i > 0; i--) { 

        swap(arr[0], arr[i]); 

        heapify(arr, i, 0); 

    } 

} 

 

int main() { 

    int arr[] = {12, 11, 13, 5, 6, 7}; 

    int n = sizeof(arr) / sizeof(arr[0]); 

     

    cout << "Исходный массив: "; 

    for (int i = 0; i < n; i++) { 

        cout << arr[i] << " "; 

    } 

    cout << endl; 

    heapSort(arr, n); 

    cout << "Отсортированный массив: "; 

    for (int i = 0; i < n; i++) { 

        cout << arr[i] << " "; 

    } 

    cout << endl; 

    return 0; 

} 
9.Бинарный поиск
#include <iostream> 

using namespace std; 

 

int binarySearch(int arr[], int left, int right, int target) { 

    while (left <= right) { 

        int mid = left + (right - left) / 2; 

         

        if (arr[mid] == target) 

            return mid; 

             

        if (arr[mid] < target) 

            left = mid + 1; 

        else 

            right = mid - 1; 

    } 

    return -1; 

} 

 

int main() { 

    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19}; 

    int n = sizeof(arr) / sizeof(arr[0]); 

    int target = 7; 

     

    int result = binarySearch(arr, 0, n - 1, target); 

     

    if (result != -1) 

        cout << "Элемент найден на позиции: " << result << endl; 

    else 

        cout << "Элемент не найден" << endl; 

         

    return 0; 

} 
10.Интерполирующий поиск
#include <iostream> 

using namespace std 

int interpolationSearch(int arr[], int n, int target) { 

    int low = 0, high = n - 1 

    while (low <= high && target >= arr[low] && target <= arr[high]) { 

        if (low == high) { 

            if (arr[low] == target) return low; 

            return -1; 

        } 

        int pos = low + (((double)(high - low) / 

                         (arr[high] - arr[low])) * (target - arr[low])); 

         

        if (arr[pos] == target) 

            return pos; 

             

        if (arr[pos] < target) 

            low = pos + 1; 

        else 

            high = pos - 1; 

    } 

    return -1; 

} 

int main() { 

    int arr[] = {10, 12, 13, 16, 18, 19, 20, 21, 22, 23, 24, 33, 35, 42, 47}; 

    int n = sizeof(arr) / sizeof(arr[0]); 

    int target = 18; 

    int result = interpolationSearch(arr, n, target); 

    if (result != -1) 

        cout << "Элемент найден на позиции: " << result << endl; 

    else 

        cout << "Элемент не найден" << endl; 

    return 0; 

} 



 


