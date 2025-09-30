import time
import psutil # measuring space
import os

# note: this reads the data into an array so we can run the sorting on (modify the "10000.txt" file and the file path(if needed) to swap in different datasets to view different results)
arr = []
with open("/Users/dancoblentz/Desktop/CS 319/Dataset/10000.txt", "r") as file:
    for line in file:
        number = int(line.strip())  
        arr.append(number)


# bubble sort
def bubbleSort(arr: list[int]):
    n = len(arr)
    for i in range(n):
        swapped = False

        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swapped = True
        if not swapped:
            break
    return arr



# insertion sort for when the len(arr) < 10 (1st improvement to quickSort)
def insertionSort(arr: list[int], s: int, e: int):
    for i in range(s + 1, e + 1):
        key = arr[i]
        j = i - 1
        while j >= s and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key



# 2nd improvement for quicksort: median of three pivot selection function
def median_of_three(arr: list[int], s: int, e: int) -> int:
    #returns the index of the median of three values: first, middle, and last elements
    mid = (s + e) // 2
    a, b, c = arr[s], arr[mid], arr[e]

    if (a <= b <= c) or (c <= b <= a):
        return mid
    elif (b <= a <= c) or (c <= a <= b):
        return s
    else:
        return e


# quicksort 
def quickSort(arr: list[int], s: int, e: int, cutoff: int = 10) -> None:
  # this uses both improvements listed above
    if e - s + 1 <= cutoff:
        insertionSort(arr, s, e)
        return

    pivot_index = median_of_three(arr, s, e)
    arr[pivot_index], arr[e] = arr[e], arr[pivot_index]

    pivot = arr[e]
    left = s

    for i in range(s, e):
        if arr[i] < pivot:
            arr[left], arr[i] = arr[i], arr[left]
            left += 1

    arr[e], arr[left] = arr[left], arr[e]

    quickSort(arr, s, left - 1, cutoff)
    quickSort(arr, left + 1, e, cutoff)



def merge(arr, s, m, e): # needed for merge sort
    # Copy the sorted left & right halfs to temp arrays
    L = arr[s: m + 1]
    R = arr[m + 1: e + 1]

    i = 0 # index for L
    j = 0 # index for R
    k = s # index for arr

    # merge the two sorted halfs into the original array
    while i < len(L) and j < len(R):
        if L[i] <= R[j]:
            arr[k] = L[i]
            i += 1
        else:
            arr[k] = R[j]
            j += 1
        k += 1

    # one of the halfs will have elements remaining
    while i < len(L):
        arr[k] = L[i]
        i += 1
        k += 1
    while j < len(R):
        arr[k] = R[j]
        j += 1
        k += 1


def mergeSort(arr, s, e):
    if e - s + 1 <= 1:
        return arr

    # The middle index of the array
    m = (s + e) // 2
    # Sort the left half
    mergeSort(arr, s, m)
    # sort the right half
    mergeSort(arr, m + 1, e)
    # merge sorted halfs
    merge(arr, s, m, e)
    
    return arr



# functions below are helpers for time, memory useage(extra credit) and the confiremd sorted to verify the result after running the implementations of (quicksort, bubble sort and merge sort)
def time_function(sort_func, arr, name: str, s=0, e=None):
    start_time = time.perf_counter()
    
    # If it's quick or mergesort we need the extra parameters
    if name == "QuickSort":
        sort_func(arr, s, e if e is not None else len(arr) - 1)
    elif name == "MergeSort":
        sort_func(arr, s, e if e is not None else len(arr) - 1)
    else:
        sort_func(arr)

    end_time = time.perf_counter()
    execution_time = (end_time - start_time) * 1000
    print(f"It took {execution_time:.0f} ms.")


def memory_usage_psutil():
    process = psutil.Process(os.getpid())
    mem = process.memory_info().rss / (1024 * 1024)  # convert to MB
    return mem


# confirmed sorted helper function: returns T/F only if the data is sorted correctly
def confirmedSorted(arr: list[int]):
    if arr == sorted(arr):
        print("Confirmed sorted")
        return True
    else:
        print("Confirmed NOT sorted")
        return False



if __name__ == "__main__": # main testing area you may uncomment any of the test cases below to see individual results
    print("Reading data from ‘10000.txt’.") # this will be printed everytime just used as an aexample
    # capture initial memory
    initial_memory = memory_usage_psutil()


    # test quicksort
    arr_copy = arr[:]
    confirmedSorted(arr_copy)
    print("Sorting using quicksort")
    time_function(quickSort, arr_copy, "QuickSort")
    final_quick_memory = memory_usage_psutil()
    print(f"QuickSort final memory usage: {final_quick_memory:.2f} MB")
    confirmedSorted(arr_copy)

    print("\n----------------------\n")

    # test bubble sort
    arr_copy = arr[:]
    confirmedSorted(arr_copy)
    print("Sorting using bubble sort")
    time_function(bubbleSort, arr_copy, "BubbleSort")
    confirmedSorted(arr_copy)

    print("\n----------------------\n")

     # test mergesort
    arr_copy = arr[:]
    confirmedSorted(arr_copy)
    print("Sorting using merge sort")
    time_function(mergeSort, arr_copy, "MergeSort")
    final_merge_memory = memory_usage_psutil()
    print(f"MergeSort final memory usage: {final_merge_memory:.2f} MB")
    confirmedSorted(arr_copy)
