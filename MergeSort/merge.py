def mergeSort(arr):
    if len(arr) > 1:

        r = len(arr)//2
        P = arr[:r]
        Q = arr[r:]

        mergeSort(P)
        mergeSort(Q)

        i = j = k = 0


        while i < len(P) and j < len(Q):
            if P[i] < Q[j]:
                arr[k] = P[i]
                i += 1
            else:
                arr[k] = Q[j]
                j += 1
            k += 1


        while i < len(P):
            arr[k] = P[i]
            i += 1
            k += 1

        while j < len(Q):
            arr[k] = Q[j]
            j += 1
            k += 1


def printList(arr):
    for i in range(len(arr)):
        print(arr[i], end=" ")
    print()


if __name__ == '__main__':
    arr = [9, 8, 17, 19, 14, 2]

    mergeSort(arr)

    print("Sorted array is: ")
    printList(arr)