#include "shared/uint.h"

uint16_t uint16(uint8_t *buf)
{
    return (buf[0] << 8) | (buf[1]);
}

uint16_t uint16_le(uint8_t *buf)
{
    return (buf[0]) | (buf[1] << 8);
}

void uint16_pack(uint8_t *buf, uint16_t in)
{
    buf[0] = in >> 8;
    buf[1] = in & 0xff;
}

void uint16_pack_le(uint8_t *buf, uint16_t in)
{
    buf[0] = in & 0xff;
    buf[1] = in >> 8;
}
