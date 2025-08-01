# Trình biên dịch và cờ biên dịch
CC = gcc
CFLAGS = -Wall -Iinclude

# Các tệp nguồn và tệp đối tượng
SRC = $(wildcard src/*.c) main.c
OBJ = $(patsubst %.c, build/%.o, $(notdir $(SRC)))

# Tên chương trình sau khi build
TARGET = build/spws

# Build mặc định
all: $(TARGET)

# Biên dịch từng file .c thành .o trong build/
build/%.o: src/%.c
	@mkdir -p build
	$(CC) $(CFLAGS) -c $< -o $@

# Biên dịch main.c riêng
build/main.o: main.c
	@mkdir -p build
	$(CC) $(CFLAGS) -c $< -o $@

# Liên kết các file object để tạo chương trình
$(TARGET): $(OBJ) build/main.o
	$(CC) $(CFLAGS) $^ -o $@

# Xóa các file biên dịch
clean:
	rm -rf build/*.o $(TARGET)

.PHONY: all clean
