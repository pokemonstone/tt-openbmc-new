#ifndef _LIBOBMCI2C_H
#define _LIBOBMCI2C_H

#ifdef  __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdint.h>
#include <fcntl.h>
#include <errno.h>
#include <linux/i2c-dev.h>
#include <linux/i2c.h>
#include <linux/types.h>
#include <sys/ioctl.h>
#include <stddef.h>

#define SUCCESS 0
#define FAILURE 0xFF

int open_i2c_dev(int i2cbus, char *filename, size_t size, int quiet);
int set_slave_addr(int file, int address, int force);
void close_i2c_dev(int file);
int i2c_master_write_read(int file, uint8_t slave_addr,
                          uint8_t tx_cnt, uint8_t* tx_buf,
                          uint8_t rx_cnt, uint8_t* rx_buf);
int i2c_master_write(int file, uint8_t slave_addr,
                     uint8_t tx_cnt, uint8_t* tx_buf);
uint8_t i2cEEPROMGet(const char* i2cbus, const char* i2caddr, uint32_t offset,
                     uint8_t len, uint8_t* buffer);
uint8_t i2cEEPROMSet(const char* i2cbus, const char* i2caddr, uint32_t offset,
                     uint8_t len, uint8_t* buffer);
#ifdef  __cplusplus
}
#endif

#endif /* _LIBOBMCI2C_H */
