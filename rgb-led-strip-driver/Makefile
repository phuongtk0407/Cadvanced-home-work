# Tên file thực thi
TARGET = led_driver_app

# Thư mục
SRC_DIR = src
INC_DIR = include
BUILD_DIR = build

# Trình biên dịch và flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -I$(INC_DIR)

# Danh sách file nguồn
SRCS = $(wildcard $(SRC_DIR)/*.c)

# Tạo file object tương ứng trong build/
OBJS = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(SRCS))

# Mặc định
all: $(BUILD_DIR) $(TARGET)

# Liên kết file thực thi
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $@

# Tạo thư mục build nếu chưa tồn tại
$(BUILD_DIR):
	@mkdir -p $(BUILD_DIR)

# Biên dịch từng file .c thành .o
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Dọn dẹp
clean:
	rm -rf $(BUILD_DIR) $(TARGET)

.PHONY: all clean
