class Vehicle:
	def __init__(self, brand, model):
		self.brand = brand
		self.model = model

	def move(self):
		print("Move!")


class Car(Vehicle):
	pass
	#def __init__(self, brand, model):
		#self.brand = brand
		#self.model = model
	#def move(self):
	#	print("Drive!")

class Boat(Vehicle):
	#def __init__(self, brand, model):
		#self.brand = brand
		#self.model = model
	def move(self):
		print("Sail!")

class Plane(Vehicle):
	#def __init__(self, brand, model):
	#	self.brand = brand
	#	self.model = model
	def move(self):
		print("Fly!")


car1 = Car("Ford", "Mustang")
boat1 = Boat("Ibiza", "Touring 20")
plane1 = Plane("Boeing", "747")

for x in (car1, boat1, plane1):
	print(x.brand)
	print(x.model)
	x.move()


print("")
import helloworld as md # them module va dat ten la md
md.hihi("Do dz! ") # goi ham trong module
a = md.person1["age"]
print(a)

from func import Person
p2 = Person("Do","Nguyen", 24)
p2.printname()
print("")

# liet ke tat ca cac ham trong module
#import platform
#x = dir(platform)
#print(x)
#print(platform.system())
#print("")

import datetime

x = datetime.datetime.now()
print(x.year)
print(x.strftime("%A")) # tra ve ngay trong tuan
print("")

import json
x = '{"name":"John", "age":30, "city":"New York"}'
y = json.loads(x) # phan tich cu phap bang json
print(y["age"])
y = json.dumps(md.person1, indent = 4) # chuyen tu python sang json
# su dung doi tuong tu module md
# thut le 4 o
print(y)
print(json.dumps({"name": "John", "age": 30}))
print(json.dumps(["apple", "bananas"]))
print(json.dumps(("apple", "bananas")))
print(json.dumps("hello"))
print(json.dumps(42))
print(json.dumps(31.76))
print(json.dumps(True))
print(json.dumps(False))
print(json.dumps(None))

print("")
import re
txt = "The rain in Spain"
x = re.search("^The.*Spain$", txt)
if x:
	print("We have found!")




