n = int (input())
str = list()

for i in range(n):
    str.append(input())
disc = {}
for i in str:
	w="".join(sorted(i))
	if w in disc:
		disc[w].append(i)
	else :
		disc[w] = [i]
print(list(disc.values()))