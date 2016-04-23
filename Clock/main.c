#include"DSP28_Device.h"
CLOCK Clock = {12,59,50};  //����һ��clock��ֵΪ��

void main()
{
	InitSysCtrl();  //��ʼ��ϵͳ
	
	DINT;          //���ж�  
	IER = 0x0000;
	IFR = 0x0000;

	InitPieCtrl();  //��ʼ��PIE

	InitPieVectTable();  //��ʼ��PIE�ж�������

	InitPeripherals();   //��ʼ������
	PieCtrl.PIEIER1.bit.INTx7 = 1; //ʹ��PIEģ���е�CPU��ʱ��0���ж�
	IER|=M_INT1;                   //��CPU�ж�1��
	EINT;                          //ʹ��ȫ���ж�

	ConfigCpuTimer(&CpuTimer0,150,900000); //CpuTimer0�ж�ʱ��1s
	StartCpuTimer0();             //����CPU��ʱ��0	
	
	GpioDataRegs.GPDDAT.bit.GPIOD5 = 0; //���Ϊ��
	GpioDataRegs.GPDDAT.bit.GPIOD6 = 0;

	WriteLcdCom(0x01);////����
    WriteLcdCom(0x0c);////������ʾ��,�α꿪

	WriteLcdCom(0x90);  //�ڶ�����ʾ��Ϣ
	WriteLcdDat(0xb7);
	WriteLcdDat(0xeb);
	WriteLcdDat(0xb3);
	WriteLcdDat(0xa4);
	WriteLcdDat(0xc7);
	WriteLcdDat(0xe0);
	
	for(;;)
		
	{    WriteLcdCom(0x80);        //��һ�е�һ���ֽڵ�ַ
//		ShowNumber(9);
		ShowNumber(Clock.hours/10); //��ʾСʱ
		ShowNumber(Clock.hours%10);

		WriteLcdDat(0xa1);      //��Сʱ�ͷ���֮��ӣ��ָ�
		WriteLcdDat(0xc3);

		ShowNumber(Clock.mins/10); //��ʾ����
		ShowNumber(Clock.mins%10);

		WriteLcdDat(0xa1);      //�ڷ��Ӻ���֮��ӣ��ָ�
		WriteLcdDat(0xc3);

		ShowNumber(Clock.secs/10);  //��ʾ��
		ShowNumber(Clock.secs%10);
			
		WriteLcdCom(0x90);  //�ڶ�����ʾ��Ϣ
		WriteLcdDat(0xb7);
		WriteLcdDat(0xeb);
		WriteLcdDat(0xb3);
		WriteLcdDat(0xa4);
		WriteLcdDat(0xc7);
		WriteLcdDat(0xe0);
	}

    
      


}
