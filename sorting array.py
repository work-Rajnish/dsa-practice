def selSort(arr,size):
    for i in range(size):
        max_i=i
        for j in range(i+1,size):
            if arr[j]>arr[max_i]:
                max_i=j
        arr[i],arr[max_i]=arr[max_i],arr[i]
arr=[3,5,1,7,3,2]  
size=len(arr)
selSort(arr,size)
print(arr)           

