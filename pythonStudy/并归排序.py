def merge(arr,l,m,r):
    n1=m-l+1
    n2=r-m

    #创建临时数组
    L=[0] * n1
    R=[0] * n2

    #拷贝数据到临时数组arrays L[]和 R[]
    for i in range(0,n1):
        L[i] = arr[l+i]
    for j in range(0,n2):
        R[j] = arr[m+1+j]
    
    #归并临时数组到arr[1,,r]
    i=0 #初始化第一个子数组的索引
    j=0 #初始化第二个子数组的索引
    k=l #初始归并子数组的索引
    while i <n1 and j < n2:
        if L[i] <= R[j]:
            arr[k]=L[i]
            i+=1
        else:
            arr[k]=R[j]
            j+=1
        k+=1
    
    #拷贝L[]的保留元素
    while i < n1:
        arr[k]=L[i]
        i+=1
        k+=1
    #拷贝R[]的保留元素
    while j < n2:
        arr[k]=R[j]
        k+=1
        j+=1

def mergeSort(arr,l,r):
    if l <  r:
        m=int((l+(r-l)/2))
        
        mergeSort(arr,l,m)
        mergeSort(arr,m+1,r)
        merge(arr,l,m,r)

arr=[12,11,13,5,6,7]
n=len(arr)
print("给定的数组")
mergeSort(arr,0,len(arr)-1)
print(arr)


