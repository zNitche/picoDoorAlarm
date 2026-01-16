#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"

void set_led(bool led_on)
{
    cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, led_on);
}

int main()
{
    stdio_init_all();

    int rc = cyw43_arch_init();
    hard_assert(rc == PICO_OK);

    bool led_state = false;

    while (true)
    {
        printf("Hello Pico Door Alarm 123!\n");
        
        led_state = !led_state;
        set_led(led_state);

        sleep_ms(1000);
    }
}