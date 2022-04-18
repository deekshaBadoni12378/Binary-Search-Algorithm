def bs(table1, num):  
    l = 0  
    h= len(table1) - 1  
    m = 0  
  
    while l <= h:  
          
        m = (h + l) // 2  
  
         
        if table1[m] < n:  
            l = m + 1  
  
          
        elif table1[m] > n:  
            h = m - 1  
  
         
        else:  
            return m 
  
             
    return -1  
  
  
  
table1 = [2, 4, 22, 49, 65, 70, 94]  
n = 70  
  

result = bs(table1, n)  
  
if result != -1:  
    print("Element is present at index", str(result))  
else:  
    print("Element is not present in table1")  
