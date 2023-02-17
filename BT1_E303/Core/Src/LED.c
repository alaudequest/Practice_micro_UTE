#include "LED.h"
uint8_t LED7_HEX[] = {0x01, 0x03, 0x07, 0x0F, 0x1F, 0x3F, 0x7F, 0xFF};
void LED7_WriteByte(uint8_t b);
void LED7_WriteByte(uint8_t b)
{
 if (((b >> 0) & 0x01) == 0) { A_SET(); } else { A_RESET(); }
 if (((b >> 1) & 0x01) == 0) { B_SET(); } else { B_RESET(); }
 if (((b >> 2) & 0x01) == 0) { C_SET(); } else { C_RESET(); }
 if (((b >> 3) & 0x01) == 0) { D_SET(); } else { D_RESET(); }
 if (((b >> 4) & 0x01) == 0) { E_SET(); } else { E_RESET(); }
 if (((b >> 5) & 0x01) == 0) { F_SET(); } else { F_RESET(); }
 if (((b >> 6) & 0x01) == 0) { G_SET(); } else { G_RESET(); }
 if (((b >> 7) & 0x01) == 0) { DP_SET(); } else { DP_RESET(); }
}
void LED7_Number(uint8_t num)
{
 LED7_WriteByte(LED7_HEX[num]);
}
