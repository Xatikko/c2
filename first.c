#include <stdio.h>

int main()
{
    // Фиксированная цена
    const float FIXED_PRICE = 20.5;
    
    int demand; // спрос(1-100)
    // ДЛина, длительность, комиссия(29-69) в процентах
    float length, duration ,commission;
    printf("Введите спрос, длину маршрута\n");
    scanf("%d", &demand);
    scanf("%f", &length);
    
    duration = length / 5 + 1;
    
    // Выщитка комиссии
    if (demand < 45) {
        commission = 0.29;
    }
    else if (demand < 75) {
        commission = 0.49;
    }
    else {
        commission = 0.69;
    }
    
    //  цена без комиссии
    float noFinalPrice = FIXED_PRICE + (length * duration);
     //Финальная цена
    float finalPrice = noFinalPrice + noFinalPrice * commission;
    
    printf("Цена %.2f\nКомиссия %.2f", finalPrice, commission);
    
    return 0;
}
