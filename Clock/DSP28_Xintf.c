
/****************************************************************************
*
*�ļ�����DSP28_Xintf.c
*
*��  �ܣ���ʼ��2812�ⲿ�ӿ�
*
*��  ��: likyo from hellodsp
*
****************************************************************************/

#include "DSP28_Device.h"

/****************************************************************************
*
*��    �ƣ�InitXintf()
*
*��    �ܣ���ʼ���ⲿ�ӿڡ�
*
*��ڲ�������
*
*���ڲ�������
*
****************************************************************************/

void InitXintf(void)
{

	#if  F2812
   
   //ѡ����������͸��ٵĶ�ʱת�������Ļ���ʱ��
    XintfRegs.XINTCNF2.bit.XTIMCLK = 0x0000;
    
    // Zone 0:
	XintfRegs.XTIMING0.bit.XWRTRAIL = 3;    //д���ڵĸ���ʱ��Ϊ3��XTIMCLK����
	XintfRegs.XTIMING0.bit.XWRACTIVE = 7;   //д���ڵļ���ȴ�ʱ��Ϊ7��XTIMCLK����
	XintfRegs.XTIMING0.bit.XWRLEAD = 3;     //д���ڵĽ���ʱ��Ϊ3��XTIMCLK����
	XintfRegs.XTIMING0.bit.X2TIMING = 0;
	
	// Zone 2
	XintfRegs.XTIMING2.bit.USEREADY = 0;    //������ʱ������XREADY�ź�
	XintfRegs.XTIMING2.bit.XRDLEAD = 3;     //�����ڵĽ���ʱ��Ϊ6��XTIMCLK����
	XintfRegs.XTIMING2.bit.XWRACTIVE = 7;   //д���ڵļ���ȴ�ʱ��Ϊ14��XTIMCLK����
	XintfRegs.XTIMING2.bit.XRDTRAIL = 3;    //�����ڵĸ���ʱ��Ϊ6��XTIMCLK
	XintfRegs.XTIMING2.bit.X2TIMING = 1;    

    XintfRegs.XBANK.bit.BANK = 2; //2���Ĵ洢��ת����Ч
    XintfRegs.XBANK.bit.BCYC = 3; 
	
	#endif
}	
	
//===========================================================================
// No more.
//===========================================================================
