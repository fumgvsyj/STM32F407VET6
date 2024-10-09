//
// Created by 34753 on 2024/10/8.
//

#ifndef FURINA_SPI_H
#define FURINA_SPI_H
#include "JYZQ_Conf.h"
#if USE_SPI
#include "stm32f4xx_hal.h"

#ifdef __cplusplus
extern "C" {
#endif



void spi3_init();// 初始化SPI3

extern  SPI_HandleTypeDef hspi3;

#ifdef __cplusplus
}
#endif
#endif
#endif //FURINA_SPI_H
