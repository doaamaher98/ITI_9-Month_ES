'''
number = str(input("Enter the numbers : "))
sum = 0

for i in number:
	if i == '5':
		continue #break
	else :
		sum = sum + int(i)
	
print("Total is :" + str(sum))

number = str(input("Please Enter your Number : "))
count = 0
flag = 0

for i in number:
		if i >= '0' and i <= '9' :
			count = count + 1
		else :
			print("Number is wrong")
			flag = 1
			break
			
if flag == 0:
	if count == 11:
		print("Correct entry")
	else :
		print("Number must be 11 digits")
else :
	pass			# like do nothing but it cant be left empty

enterd_string = str(input("Enter the String to be mirrored : "))
end =  len(enterd_string)
print(enterd_string[end::-1])

#import lib
from lib import my_func

#lib.my_func()
my_func()

import Bit_Math

x=Bit_Math.Get_Bit(6,3)
print(x)
'''
x= ["Hello",1,1.4,True]

y = x 			# Reference to it, any change in y will be applied in x
y[0]="Hi"
print (x)
print(y)

# But it we used copy, y will be different from x
z = x.copy()
z[0] = "Welcome"
print (x)
print(z)
