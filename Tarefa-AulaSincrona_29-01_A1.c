#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/timer.h"

const uint PIN_RED = 13,PIN_YELLOW = 12,PIN_GREEN = 11;

bool repeating_timer_callback(struct repeating_timer *timer);

int main()
{
    stdio_init_all();
    
    gpio_init(PIN_RED);
    gpio_init(PIN_YELLOW);
    gpio_init(PIN_GREEN);

    gpio_set_dir(PIN_RED,GPIO_OUT);
    gpio_set_dir(PIN_YELLOW,GPIO_OUT);
    gpio_set_dir(PIN_GREEN,GPIO_OUT);

    struct repeating_timer timer;

    add_repeating_timer_ms(3000,repeating_timer_callback,NULL,&timer);

    gpio_put(PIN_RED,1);

    while (true) {
        printf("Executando...");
        sleep_ms(1000);
    }
}
bool repeating_timer_callback(struct repeating_timer *timer){
    if(gpio_get(PIN_RED)){
        gpio_put(PIN_RED,0);
        gpio_put(PIN_YELLOW,1);
        gpio_put(PIN_GREEN,0);
        return true;
    }
    if(gpio_get(PIN_YELLOW)){
        gpio_put(PIN_RED,0);
        gpio_put(PIN_YELLOW,0);
        gpio_put(PIN_GREEN,1);
        return true;
    }
    if(gpio_get(PIN_GREEN)){
        gpio_put(PIN_RED,1);
        gpio_put(PIN_YELLOW,0);
        gpio_put(PIN_GREEN,0);
        return true;
    }
}