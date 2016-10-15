#include "ets_sys.h"
#include "gpio.h"
#include "osapi.h"
#include "os_type.h"

void ICACHE_FLASH_ATTR user_init()
{
	gpio_init();
}
