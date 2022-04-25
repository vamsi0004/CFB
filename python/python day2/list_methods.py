li1=[1,2,5,215,365,89,6,52,3,4,0,1,2]
print(li1)
li1.sort()
print("sorted list : ",li1)
li1.reverse()
print("reverse list: ",li1)
li1.append(10)
print("appended 11 : ",li1)
li1.insert(1,11)
print("inseredt 11 at index 1 ",li1)

li1.pop(10)
print("deletes item from 10th index",li1)

li1.pop()
print("delets last item :",li1)

li1.remove(1)
print("removes 1 from the list: ",li1)
