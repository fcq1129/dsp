/*************************************************************
*功能：基于开发板之家QQ2812的LCD12864的显示驱动
*说明：使用前请确认GPIO的端口初始化；该显示驱动是对于带有字码库的LCD12864
***********************************************************************/

#include"DSP28_Device.h"

unsigned char LcdDataList[]={0xb0,0xb1,0xb2,0xb3,0xb4,0xb5,0xb6,0xb7,0xb8,0xb9};
long int a;
volatile unsigned int * LCDData  = (unsigned int *) 0x4400;//液晶数据线写地址,可用此地址锁存要送给液晶的数据

void WriteLcdCom(unsigned char c)
{
  	GpioDataRegs.GPDDAT.bit.GPIOD5 = 0;		//写命令控制数据
  	* LCDData=c;							//将命令数据写入CPLD地址
  	GpioDataRegs.GPDDAT.bit.GPIOD6 = 1;		//负跳变脉冲,把数据送入DR
  
  	GpioDataRegs.GPDDAT.bit.GPIOD6 = 0;
  	for(a=0;a<5000;a++);
}

void WriteLcdDat(unsigned char d)
{
  	GpioDataRegs.GPDDAT.bit.GPIOD5 = 1;		//写显示数据
  	* LCDData=d;							//送入地址
  	GpioDataRegs.GPDDAT.bit.GPIOD6 = 1;
  	GpioDataRegs.GPDDAT.bit.GPIOD6 = 0;
  	for(a=0;a<5000;a++);
}

void ShowNumber(unsigned int n)  //显示数字
{
	
	WriteLcdDat(0xa3);
	WriteLcdDat(LcdDataList[n]);
}



