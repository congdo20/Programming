"""
import numpy
import matplotlib.pyplot as plt
from scipy import stats

speed = [99,86,87,88,111,86,103,87,94,78,77,85,86]

x = numpy.mean(speed) # tinh trung binh
print(x)

x = numpy.median(speed) # tinh trung vi - vi tri o giua
# phai sap xep thoe thu tu truoc
# neu co 2 so o giua thi chia cho 2
print(x)

x = stats.mode(speed)
print(x)
"""

import math
import numpy
from scipy import stats
import matplotlib.pyplot as plt

speed = [32,111,138,28,59,77,97]

x = numpy.mean(speed)

# do lech chuan std mo ta su phan tan cua cac gia tri
# do lech chuan thap nghia la hau het cac so deu gan gia tri trung binh
y = numpy.std(speed)

# phuong sai var la 1 so khac bieu dien su phan tan cua cac gia tri
# lay can bac 2 cua phuong sai duoc do lech chuan
# tim trung binh, tim su khac biet moi gtri so voi gtri tb, binh phuong roi lay trung binh cac gia tri do
z = numpy.var(speed)
print(x)
print(y)
print(z)

print(math.sqrt(z)) # binh phuong do lech chuan la phuong sai


ages = [5,31,43,48,50,41,7,11,15,39,80,82,32,2,8,6,25,36,27,61,31]

# phan tram cung cap 1 so mo ta gia tri ma 1 phan tram gia tri nhat dinh thap hon
x = numpy.percentile(ages, 90) #do tuoi ma 90 phan tram so nguoi tre hon
print(x)

# tao phan phoi ngau nhien
x = numpy.random.uniform(0.0, 5.0, 250) # tao 1 mang 250 so ngau nhien tu 0 den 5
print(x)
#plt.hist(x, 5) # bieu dien bang bieu do 5 thanh
#plt.show()

# tao phan phoi chuan ( tap trung quanh 1 gtri co dinh)
x = numpy.random.normal(5.0, 1.0, 100000) # gia tri trung binh la 5, do lech chuan la 1, 100000 gtri
# tap trung quanh muc 5 va hiem khi xa gtri tbinh qua 1
#plt.hist(x, 100)
#plt.show()

# bieu do phan tan - tap gtri moi diem bieu dien bang 1 dau cham

x = [5,7,8,7,2,17,2,9,4,11,12,9,6]
y = [99,86,87,88,111,86,103,87,94,78,77,85,86]
#plt.scatter(x, y)
#plt.show()

x = numpy.random.normal(5, 1, 1000)
y = numpy.random.normal(10, 2, 1000)

plt.scatter(x, y)
plt.show()





