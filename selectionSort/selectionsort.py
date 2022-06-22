def selection(arr, size):
   
    for step in range(size):
        min_idx = step

        for i in range(step + 1, size):
         
            if arr[i] < arr[min_idx]:
                min_idx = i
         
        (arr[step], arr[min_idx]) = (arr[min_idx], arr[step])


data = [58, 82, 60, 76, 98]
size = len(data)
selection(data, size)
print('Sorted Array in Ascending Order:')
print(data)
