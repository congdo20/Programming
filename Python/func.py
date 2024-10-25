class Person:
	def __init__(self, fname, lname, age):
		self.fname = fname
		self.lname = lname
		self.age = age

	def __str__(self):
		return f"{self.fname} {self.lname},{self.age} year old"

	def printname(self):
		print("My name is:", self.fname, self.lname + ", i'm", self.age, "year old")

class Student(Person):
	#pass
	def __init__(self, fname, lname, age):
		super().__init__(fname, lname, age)
		self.graduationyear = 2025
		print(self.graduationyear)


p1 = Person("Nguyen", "Do", 23)
print(p1)
p1.printname()

s1 = Student("Trinh", "Do", 24)
s1.printname()
print(" ")



class Numbers:
	def __iter__(self):
		self.a = 1
		return self

	def __next__(self):
		if self.a <= 2:
			x = self.a
			self.a += 1
			return x
		else:
			raise StopIteration # dung de dung lai vong lap


n1 = Numbers()
iterator = iter(n1)

for x in iterator:
	print(x)




