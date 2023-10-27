print("Hello Kaise ho!!")

a = input()
b = input()

print(a)
print(b)

# for i in range(5):
#     print(i, sep = "", end = "")

arr = []
arr = input()
arr.split()
# for i in range(5):
#     x = input()
#     arr.append(x)

print(arr)

dict = {}

for i in range(5):
    dict[i] = i

print(dict)

if(dict.get(6) == "None"):
    print("Key is not present")
else:
    print(dict.get(6))


set = set()

for i in range(5):
    set.add(0)

print(set)