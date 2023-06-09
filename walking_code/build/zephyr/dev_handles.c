#include <zephyr/device.h>
#include <zephyr/toolchain.h>

/* 1 : /soc/reset-controller@4000c000:
 * Direct Dependencies:
 *   - (/soc)
 * Supported:
 *   - /soc/uart@40034000
 *   - (/soc/uart@40038000)
 *   - (/soc/usbd@50100000)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_reset_controller_4000c000[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 2, DEVICE_HANDLE_ENDS };

/* 2 : /soc/uart@40034000:
 * Direct Dependencies:
 *   - (/soc)
 *   - (/soc/interrupt-controller@e000e100)
 *   - (/soc/peripheral-clk)
 *   - /soc/reset-controller@4000c000
 *   - (/soc/pin-controller@40014000/uart0_default)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_uart_40034000[] = { 1, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 3 : /soc/gpio@40014000:
 * Direct Dependencies:
 *   - (/soc)
 *   - (/soc/interrupt-controller@e000e100)
 * Supported:
 *   - (/leds/led_0)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_gpio_40014000[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };
