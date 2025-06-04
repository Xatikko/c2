#include <stdio.h>

int main() {
    
    int x;
    printf("Введите кол-во хвойных уровней");
    scanf("%d", &x);
    
    // Уровни ёлки
    for (int i = 1; i <= x; i++) {
        
        // Пробелы перед "*"
        for (int j = 0; j < x - i; j++) {
            printf(" ");
        }
        
        // Звёздочки
        for (int k = 0; k < 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    
    // Ствол
     for (int i = 0; i < x; i++) {
        // Пробелы для ствола
        for (int j = 0; j < x - 1; j++) {
            printf(" ");
        }
        printf("*\n");
    }

}
