#include <stdio.h>

int main() {
    
    int length = 10; 
    int width = 5;  

    int perimeter = 2 * (length + width); 
    int area = length * width;          

    printf("Chiều dài: %d cm\n", length);
    printf("Chiều rộng: %d cm\n", width);
    printf("Chu vi của hình chữ nhật: %d cm\n", perimeter);
    printf("Diện tích của hình chữ nhật: %d cm^2\n", area);

    return 0;
}
