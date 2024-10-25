# Import các thư viện cần thiết
import tensorflow as tf
from tensorflow.keras import layers, models
from tensorflow.keras.datasets import mnist
import numpy as np

# Tải dữ liệu MNIST
(x_train, y_train), (x_test, y_test) = mnist.load_data()

# Tiền xử lý dữ liệu
x_train = x_train / 255.0  # Chuẩn hóa dữ liệu ảnh từ 0-255 về 0-1
x_test = x_test / 255.0

# Xây dựng mô hình mạng neural đơn giản
model = models.Sequential([
    layers.Flatten(input_shape=(28, 28)),  # Chuyển đổi dữ liệu ảnh 28x28 thành vector 1D
    layers.Dense(128, activation='relu'),  # Lớp fully connected với 128 neuron và hàm kích hoạt relu
    layers.Dropout(0.2),                   # Dropout để giảm overfitting
    layers.Dense(10, activation='softmax') # Lớp đầu ra với 10 lớp (tương ứng các chữ số 0-9)
])

# Compile mô hình
model.compile(optimizer='adam',
              loss='sparse_categorical_crossentropy',
              metrics=['accuracy'])

# Huấn luyện mô hình
model.fit(x_train, y_train, epochs=5)

# Đánh giá mô hình
test_loss, test_acc = model.evaluate(x_test, y_test)

print(f"Độ chính xác trên tập kiểm tra: {test_acc * 100:.2f}%")
