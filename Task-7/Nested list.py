if __name__ == '__main__':
    Num = int(input())

students = []
for i in range(Num): 
    name = input()
    score = float(input())
    students.append([name ,score])
sorted_score = sorted(list(set([x[1] for x in students])))   
sec_lowest = sorted_score[1]
x = []
for std in students : 
   if sec_lowest == std[1]:
     x.append(std[0])
for item in sorted(x) : 
    print(item)