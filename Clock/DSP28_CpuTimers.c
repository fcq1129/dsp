
/****************************************************************************
*
*�ļ�����DSP28_CpuTimers.c
*
*��  �ܣ���ʼ��32λCPU��ʱ��
*
*��  ��: likyo from hellodsp
*
****************************************************************************/

#include "DSP28_Device.h"

struct CPUTIMER_VARS CpuTimer0; //���û����ŵ�CPU��ʱ��ֻ��CpuTimer0��CpuTimer1
struct CPUTIMER_VARS CpuTimer1; //��CpuTimer2����������ʵϰ����ϵͳOS������DSP
struct CPUTIMER_VARS CpuTimer2; //BIOS��

/****************************************************************************
*
*��    �ƣ�InitCpuTimers()
*
*��    �ܣ���ʼ��CpuTimer0��
*
*��ڲ�������
*
*���ڲ�������
*
****************************************************************************/

void InitCpuTimers(void)
{
	CpuTimer0.RegsAddr = &CpuTimer0Regs; //ʹ��CpuTimer0.RegsAddr ָ��ʱ���Ĵ���
	
	CpuTimer0Regs.PRD.all  = 0xFFFFFFFF; //��ʼ��CpuTimer0�����ڼĴ���

	CpuTimer0Regs.TPR.all  = 0;          //��ʼ����ʱ��Ԥ���������
	CpuTimer0Regs.TPRH.all = 0;
	
	CpuTimer0Regs.TCR.bit.TSS = 1;       //ֹͣ��ʱ��       

	CpuTimer0Regs.TCR.bit.TRB = 1;       //�����ڼĴ���PRD�е�ֵװ��������Ĵ���TIM��           
	
	CpuTimer0.InterruptCount = 0;        //��ʼ����ʱ���жϼ�����
}	
	
/****************************************************************************
*
*��    �ƣ�ConfigCpuTimer()
*
*��    �ܣ��˺�����ʹ��Freq��Period������������CPU��ʱ���������á�Freq��MHz
*          Ϊ��λ��Period��us��Ϊ��λ��
*
*��ڲ�����*Timer��ָ���Ķ�ʱ������Freq��Period
*
*���ڲ�������
*
****************************************************************************/

void ConfigCpuTimer(struct CPUTIMER_VARS *Timer, float Freq, float Period)
{
	Uint32 	temp;
	
	Timer->CPUFreqInMHz = Freq;
	Timer->PeriodInUSec = Period;
	temp = (long) (Freq * Period);
	Timer->RegsAddr->PRD.all = temp;  //����ʱ�����ڼĴ�����ֵ

	Timer->RegsAddr->TPR.all  = 0;    //����ʱ��Ԥ����Ĵ�����ֵ
	Timer->RegsAddr->TPRH.all  = 0;
	
	// ��ʼ����ʱ�����ƼĴ���:
	Timer->RegsAddr->TCR.bit.TIF=1;   //����жϱ�־λ
	Timer->RegsAddr->TCR.bit.TSS = 1; //ֹͣ��ʱ�� 
	Timer->RegsAddr->TCR.bit.TRB = 1; //��ʱ����װ������ʱ�����ڼĴ�����ֵװ�붨ʱ���������Ĵ���
	Timer->RegsAddr->TCR.bit.SOFT = 1;
	Timer->RegsAddr->TCR.bit.FREE = 1;     
	Timer->RegsAddr->TCR.bit.TIE = 1; //ʹ�ܶ�ʱ���ж�
	
	Timer->InterruptCount = 0;        //��ʼ����ʱ���жϼ�����
}

//===========================================================================
// No more.
//===========================================================================
