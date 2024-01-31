

/***************************************************************/
/*	Guard of file will call one Time in .c		   			  **/
/***************************************************************/
#ifndef	GPIO_PRIV_H
#define	GPIO_PRIV_H

#define	GPIOA_BASE_ADDRESS		0x40010800
#define	GPIOB_BASE_ADDRESS		0x40010C00
#define	GPIOC_BASE_ADDRESS		0x40011000


/************************************************************/
/**			Register  	DEFINITION							*/
/************************************************************/

/**			Register  	Address for port A					*/
#define	GPIOA_CRL			*((volatile u32 *)(GPIOA_BASE_ADDRESS + 0x00))
#define	GPIOA_CRH			*((volatile u32	*)(GPIOA_BASE_ADDRESS + 0x04))
#define	GPIOA_IDR			*((volatile u32	*)(GPIOA_BASE_ADDRESS + 0x08))
#define	GPIOA_ODR			*((volatile u32	*)(GPIOA_BASE_ADDRESS + 0x0C))
#define	GPIOA_BSR			*((volatile u32	*)(GPIOA_BASE_ADDRESS + 0x10))
#define	GPIOA_BRR			*((volatile u32	*)(GPIOA_BASE_ADDRESS + 0x14))
#define	GPIOA_LCK			*((volatile u32	*)(GPIOA_BASE_ADDRESS + 0x18))




/**			Register  	Address for port B					*/
#define	GPIOB_CRH			*((u32	*)(GPIOB_BASE_ADDRESS + 0x04))
#define	GPIOB_CRL			*((u32 	*)(GPIOB_BASE_ADDRESS + 0x00))
#define	GPIOB_IDR			*((u32	*)(GPIOB_BASE_ADDRESS + 0x08))
#define	GPIOB_ODR			*((u32	*)(GPIOB_BASE_ADDRESS + 0x0C))
#define	GPIOB_BSR			*((u32	*)(GPIOB_BASE_ADDRESS + 0x10))
#define	GPIOB_BRR			*((u32	*)(GPIOB_BASE_ADDRESS + 0x14))
#define	GPIOB_LCK			*((u32	*)(GPIOB_BASE_ADDRESS + 0x18))




/**			Register  	Address for port C					*/
#define	GPIOC_CRL			*((u32 	*)(GPIOC_BASE_ADDRESS + 0x00))
#define	GPIOC_CRH			*((u32	*)(GPIOC_BASE_ADDRESS + 0x04))
#define	GPIOC_IDR			*((u32	*)(GPIOC_BASE_ADDRESS + 0x08))
#define	GPIOC_ODR			*((u32	*)(GPIOC_BASE_ADDRESS + 0x0C))
#define	GPIOC_BSR			*((u32	*)(GPIOC_BASE_ADDRESS + 0x10))
#define	GPIOC_BRR			*((u32	*)(GPIOC_BASE_ADDRESS + 0x14))
#define	GPIOC_LCK			*((u32	*)(GPIOC_BASE_ADDRESS + 0x18))





#endif
