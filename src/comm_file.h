/*
 * comm_file.h
 *
 *  Created on: Apr 8, 2013
 *      Author: petera
 */

#ifndef COMM_FILE_H_
#define COMM_FILE_H_

#include "system.h"
#include "comm.h"

#define COMM_FILE_REPLY_OK          0x04
#define COMM_FILE_ERR_NO_SPACE      0x11
#define COMM_FILE_ERR_UNEXPECTED    0x12
#define COMM_FILE_ERR_ABORT         0x13
#define COMM_FILE_ERR_CRC_ERR       0x14

#define COMM_FILE_MAX_ERRORS        5

void COMM_FILE_init();
s32_t COMM_FILE_on_pkt(u8_t *data, u8_t len);
void COMM_FILE_watchdog();

#endif /* COMM_FILE_H_ */
