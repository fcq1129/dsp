#include"DSP28_Device.h"
CLOCK Clock = {12,59,50};  //定义一个clock初值为零

void main()
{
	InitSysCtrl();  //初始化系统
	
	DINT;          //关中断  
	IER = 0x0000;
	IFR = 0x0000;

	InitPieCtrl();  //初始化PIE

	InitPieVectTable();  //初始化PIE中断向量表

	InitPeripherals();   //初始化外设
	PieCtrl.PIEIER1.bit.INTx7 = 1; //使能PIE模块中的CPU定时器0的中断
	IER|=M_INT1;                   //开CPU中断1；
	EINT;                          //使能全局中断

	ConfigCpuTimer(&CpuTimer0,150,900000); //CpuTimer0中断时间1s
	StartCpuTimer0();             //启动CPU定时器0	
	
	GpioDataRegs.GPDDAT.bit.GPIOD5 = 0; //输出为低
	GpioDataRegs.GPDDAT.bit.GPIOD6 = 0;

	WriteLcdCom(0x01);////清屏
    WriteLcdCom(0x0c);////整体显示开,游标开

	WriteLcdCom(0x90);  //第二行显示信息
	WriteLcdDat(0xb7);
	WriteLcdDat(0xeb);
	WriteLcdDat(0xb3);
	WriteLcdDat(0xa4);
	WriteLcdDat(0xc7);
	WriteLcdDat(0xe0);
	
	for(;;)
		
	{    WriteLcdCom(0x80);        //第一行第一个字节地址
//		ShowNumber(9);
		ShowNumber(Clock.hours/10); //显示小时
		ShowNumber(Clock.hours%10);

		WriteLcdDat(0xa1);      //在小时和分钟之间加：分隔
		WriteLcdDat(0xc3);

		ShowNumber(Clock.mins/10); //显示分钟
		ShowNumber(Clock.mins%10);

		WriteLcdDat(0xa1);      //在分钟和秒之间加：分隔
		WriteLcdDat(0xc3);

		ShowNumber(Clock.secs/10);  //显示秒
		ShowNumber(Clock.secs%10);
			
		WriteLcdCom(0x90);  //第二行显示信息
		WriteLcdDat(0xb7);
		WriteLcdDat(0xeb);
		WriteLcdDat(0xb3);
		WriteLcdDat(0xa4);
		WriteLcdDat(0xc7);
		WriteLcdDat(0xe0);
	}

    
      


}
