/*
 ******************************************************************************
 * @file           : ErrType.h
 * @Author         : Mohammed Ayman Shalaby
 * @brief          : Main program body
 * @Date           : May 8, 2023
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2023 Ayman.
 * All rights reserved.
 *
 ******************************************************************************
 */
#ifndef ERRTYPE_H_
#define ERRTYPE_H_

/*==============================================================================================================================================
 * ERRORS
 *==============================================================================================================================================*/

typedef enum
{
	/*==============================================================================================================================================
	 * GENERAL PURPOSE ERRORS
	 *==============================================================================================================================================*/
	OK,
	NOK,
	NULL_POINTER,
	/*==============================================================================================================================================
	 * GPIO ERRORS
	 *==============================================================================================================================================*/
	GPIO_NOK,
	GPIO_NOT_VALID,
	GPIO_VALID,
	/*==============================================================================================================================================
	 * RCC ERRORS
	 *==============================================================================================================================================*/
	TimeoutError,
	PLLMULFactorError,
	PLLSRCError,
	AHBEnPeripheralError,
	AHBDisPeripheralError,
	APB1EnPeripheralError,
	APB1DisPeripheralError,
	APB2EnPeripheralError,
	APB2DisPeripheralError,
	/*==============================================================================================================================================
	 * USART ERRORS
	 *==============================================================================================================================================*/
	USART_OK,
	USART_NOK,
	USART_WRONG_CONFIGURATION,
	/*==============================================================================================================================================
	 * SPI ERRORS
	 *==============================================================================================================================================*/
	SPI_OK,
	SPI_NOK,
	SPI_INVALID_CONFIG,

} ERRORS_t;

#endif /* ERRTYPE_H_ */
