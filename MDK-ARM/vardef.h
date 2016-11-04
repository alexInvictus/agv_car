#ifndef _H_VARDEF_
#define _H_VARDEF_
#define uchar unsigned char
#define uint  unsigned int
#ifdef _C_MAIN_
u16 USART_RX_STA_1=0;       //接收标志位
u8 Rx_buff_1[USART_REC_LEN_1];
u8 aRxBuffer_1[RXBUFFERSIZE];//HAL库使用的串口1接收缓冲

u16 USART_RX_STA_2=0;       //接收标志位
u8 Rx_buff_2[USART_REC_LEN_2];
u8 aRxBuffer_2[RXBUFFERSIZE];//HAL库使用的串口2接收缓冲

u16 USART_RX_STA_3=0;       //接收标志位
u8 Rx_buff_3[USART_REC_LEN_3];
u8 aRxBuffer_3[RXBUFFERSIZE];//HAL库使用的串口2接收缓冲

UART_HandleTypeDef huart1;
UART_HandleTypeDef huart2;
UART_HandleTypeDef huart3;

u8 len;                       //反馈数组的长度
u16 times=0;                  //统计长度
#else
extern u16 USART_RX_STA_1;       //接收标志位
extern u8 Rx_buff_1[USART_REC_LEN_1];
extern u8 aRxBuffer_1[RXBUFFERSIZE];//HAL库USART接收Buffer

extern u16 USART_RX_STA_2;       //接收标志位
extern u8 Rx_buff_2[USART_REC_LEN_2];
extern u8 aRxBuffer_2[RXBUFFERSIZE];//HAL库USART接收Buffer

extern u16 USART_RX_STA_3;       //接收标志位
extern u8 Rx_buff_3[USART_REC_LEN_3];
extern u8 aRxBuffer_3[RXBUFFERSIZE];//HAL库USART接收Buffer

extern UART_HandleTypeDef huart1;
extern UART_HandleTypeDef huart2;
extern UART_HandleTypeDef huart3;

extern u8 len;                       //反馈数组的长度
extern u16 times;

#endif
#endif

