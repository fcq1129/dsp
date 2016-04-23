/*************************************************************
*���ܣ����ڿ�����֮��QQ2812��LCD12864����ʾ����
*˵����ʹ��ǰ��ȷ��GPIO�Ķ˿ڳ�ʼ��������ʾ�����Ƕ��ڴ���������LCD12864
***********************************************************************/

#include"DSP28_Device.h"

unsigned char LcdDataList[]={0xb0,0xb1,0xb2,0xb3,0xb4,0xb5,0xb6,0xb7,0xb8,0xb9};
long int a;
volatile unsigned int * LCDData  = (unsigned int *) 0x4400;//Һ��������д��ַ,���ô˵�ַ����Ҫ�͸�Һ��������

void WriteLcdCom(unsigned char c)
{
  	GpioDataRegs.GPDDAT.bit.GPIOD5 = 0;		//д�����������
  	* LCDData=c;							//����������д��CPLD��ַ
  	GpioDataRegs.GPDDAT.bit.GPIOD6 = 1;		//����������,����������DR
  
  	GpioDataRegs.GPDDAT.bit.GPIOD6 = 0;
  	for(a=0;a<5000;a++);
}

void WriteLcdDat(unsigned char d)
{
  	GpioDataRegs.GPDDAT.bit.GPIOD5 = 1;		//д��ʾ����
  	* LCDData=d;							//�����ַ
  	GpioDataRegs.GPDDAT.bit.GPIOD6 = 1;
  	GpioDataRegs.GPDDAT.bit.GPIOD6 = 0;
  	for(a=0;a<5000;a++);
}

void ShowNumber(unsigned int n)  //��ʾ����
{
	
	WriteLcdDat(0xa3);
	WriteLcdDat(LcdDataList[n]);
}



