

#ifndef	GPIO_INT_H
#define	GPIO_INT_H



#define GPIOA       	0 
#define GPIOB   	   	1
#define GPIOC	      	2


#define	PIN0			0
#define	PIN1			1
#define	PIN2			2
#define	PIN3			3
#define	PIN4			4
#define	PIN5			5
#define	PIN6			6
#define	PIN7			7
#define	PIN8			8
#define	PIN9			9
#define	PIN10			10
#define	PIN11			11
#define	PIN12			12
#define	PIN13			13
#define	PIN14			14
#define	PIN15			15

/************************************************************/
/**			Description :  Input Options					*/
/************************************************************/
#define	INPUT__ANALOG		0b0000
#define	INPUT_FLOATING		0b0100
#define	INPUT_PULL_UP_DOWN	0b1000


/************************************************************/
/**			Description :  Output Options					*/
/************************************************************/
#define	OUTPUT_10MHZ_PP		0b0001
#define	OUTPUT_10MHZ_OD		0b0101
#define	OUTPUT_10MHZ_AFPP	0b1001
#define	OUTPUT_10MHZ_AFOD	0b1101

#define	OUTPUT_2MHZ_PP		0b0010
#define	OUTPUT_2MHZ_OD		0b0110
#define	OUTPUT_2MHZ_AFPP	0b1010
#define	OUTPUT_2MHZ_AFOD	0b1110

#define	OUTPUT_50MHZ_PP		0b0011
#define	OUTPUT_50MHZ_OD		0b0111
#define	OUTPUT_50MHZ_AFPP	0b1011
#define	OUTPUT_50MHZ_AFOD	0b1111




#define	GPIO_LOW			0
#define	GPIO_HIGH			1


#define	GPIO_UNLOCK			0
#define	GPIO_LOCK			1

/************************************************************/
/**			Description :  PROTOTYPE DECLARTION				*/
/************************************************************/

/************************************************************/
/* Description :  function to set the direction of any pin	*/
/*				  input	 :	u8	copy_u8Port,				*/
/*							u8 copy_u8Pin,					*/
/*							u8 copy_u8Mode					*/
/*				  output :	void							*/
/************************************************************/	 
void	GPIO_VoidSetPinDirection(u8	copy_u8Port, u8 copy_u8Pin, u8 copy_u8Mode);



/************************************************************/
/* Description :  function to set the value of any pin		*/
/*				  input	 :	u8	copy_u8Port,				*/
/*							u8 copy_u8Pin,					*/
/*							u8 copy_u8Value					*/
/*				  output :	void							*/
/************************************************************/	
void	GPIO_VoidSetPinValue(u8	copy_u8Port, u8 copy_u8Pin, u8 copy_u8Value);


/************************************************************/
/* Description :  function for get the pin value 			*/
/*				  input	 :	u8	copy_u8Port,				*/
/*							u8 copy_u8Pin,					*/
/*				  output :	u8								*/
/************************************************************/	
u8		GPIO_u8GetPinValue(u8	copy_u8Port, u8 copy_u8Pin);


/************************************************************/
/* Description :  function for Enable Clock 				*/
/*				  input	 :	u8	copy_u8Port,				*/
/*							u8 copy_u8Pin,					*/
/*							u8 copy_u8Lock					*/
/*				  output :	void							*/
/************************************************************/	
void		GPIO_u8LockPinConfig(u8	copy_u8Port, u8 copy_u8Pin, u8 copy_u8Lock);


#endif
