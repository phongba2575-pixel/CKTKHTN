#include "xparameters.h"
#include "xil_io.h"
#include "xil_printf.h"
#include "sleep.h"

#define MY_IP_ADDR XPAR_MYIP_0_S00_AXI_BASEADDR

int main() {
    u32 val_a0, val_a1;

    print("--- BAT DAU DOC ADC (RAW) ---\n\r");

    while(1) {
       
        val_a0 = Xil_In32(MY_IP_ADDR);

        val_a1 = Xil_In32(MY_IP_ADDR + 4);

        xil_printf("A0: %4d   |   A1: %4d \r\n", val_a0, val_a1);

        usleep(200000);
    }

    return 0;
}
