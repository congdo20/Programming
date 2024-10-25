import numpy as np
from sklearn.cluster import KMeans
import matplotlib.pyplot as plt

# Dữ liệu: Tọa độ các điểm (points)
X = np.array([[1, 2], [1.5, 1.8], [5, 8], [8, 8], [1, 0.6], [9, 11]])

# Khởi tạo mô hình K-Means với 3 cụm
kmeans = KMeans(n_clusters=3)

# Huấn luyện mô hình
kmeans.fit(X)

# Lấy thông tin cụm và centroid
centroids = kmeans.cluster_centers_
labels = kmeans.labels_

# In ra vị trí các centroid và nhãn của từng điểm
print("Centroids:", centroids)
print("Nhãn:", labels)

# Vẽ biểu đồ phân cụm
plt.scatter(X[:, 0], X[:, 1], c=labels, cmap='rainbow')
plt.scatter(centroids[:, 0], centroids[:, 1], marker='x', color='black')
plt.show()
