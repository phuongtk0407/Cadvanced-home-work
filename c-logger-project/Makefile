# filepath: /c-logger-project/c-logger-project/Makefile
# Tên file thực thi
TARGET = logger_app

# Thư mục
SRC_DIR = src
INC_DIR = include
BUILD_DIR = build

# Trình biên dịch và flags
CC = gcc
CFLAGS = -Wall -Wextra -I$(INC_DIR) -std=c11

# Danh sách file nguồn
SRCS = $(wildcard $(SRC_DIR)/*.c)

# Tạo các file .o tương ứng trong thư mục build/
OBJS = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(SRCS))

# Mặc định
all: $(BUILD_DIR) $(TARGET)

# Tạo file thực thi
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $@

# Tạo build/ nếu chưa có
$(BUILD_DIR):
	@mkdir -p $(BUILD_DIR)

# Biên dịch từng file .c trong src thành .o trong build
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Dọn sạch file biên dịch
clean:
	rm -rf $(BUILD_DIR) $(TARGET)

.PHONY: all clean