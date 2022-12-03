def routine(num): 
    iterations = 0
    sort_num = sorted(str(num))
    num_str = ''.join(sort_num)
    while num != 6174:
        sort_num = sorted(str(num)) 
        num_str = ''.join(sort_num) 
        num_asc = int(num_str) 
        num_desc = num_str[::-1] 
        
        for x in range(len(num_desc),4):
            num_desc = num_desc + '0'
            x += 1
        num_desc = int(num_desc)

        iterations += 1
        num = num_desc - num_asc

    return iterations
      
print(routine(input()))