#include <stdio.h>
#include <stdint.h>
#include "led_driver.h"

int main() {
    size_t pixel_count = 10;
    if (led_init(pixel_count) != 0) {
        fprintf(stderr, "Failed to initialize LED strip\n");
        return 1;
    }

    // Kiểm tra buffer khởi tạo về 0
    const uint32_t* buffer = led_get_buffer();
    for (size_t i = 0; i < pixel_count; i++) {
        if (buffer[i] != 0) {
            printf("Pixel %zu not zero at init!\n", i);
        }
    }

    // Đặt màu cho các pixel
    led_set_pixel_color(0, 255, 0, 0);     // Red
    led_set_pixel_color(9, 0, 0, 255);     // Blue
    led_set_pixel_color(4, 255, 255, 255); // White

    // In giá trị hex của các pixel
    buffer = led_get_buffer();
    printf("Pixel 0: 0x%08X\n", buffer[0]);
    printf("Pixel 4: 0x%08X\n", buffer[4]);
    printf("Pixel 9: 0x%08X\n", buffer[9]);

    // Fill toàn bộ strip với màu xanh lá
    led_fill(0, 255, 0);
    buffer = led_get_buffer();
    for (size_t i = 0; i < pixel_count; i++) {
        printf("Pixel %zu: 0x%08X\n", i, buffer[i]);
    }

    // Giải phóng bộ nhớ
    led_shutdown();
    return 0;
}