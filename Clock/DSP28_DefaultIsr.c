
/****************************************************************************
*
*ÎÄ¼þÃû£ºDSP28_DefaultIsr.c
*
*¹¦  ÄÜ£º´ËÎÄ¼þ°üº¬ÁËÓëF2812ËùÓÐÄ¬ÈÏÏà¹ØµÄÖÐ¶Ïº¬º¯Êý£¬ÎÒÃÇÖ»ÐèÔÚÏàÓ¦µÄÖÐ¶Ïº¯Êý
*        ÖÐ¼ÓÈë´úÂëÒÔÊµÏÖÖÐ¶Ïº¯ÊýµÄ¹¦ÄÜ¾Í¿ÉÒÔ
*
*×÷  Õß: likyo from hellodsp
*
****************************************************************************/

#include "DSP28_Device.h"

//---------------------------------------------------------------------------
// INT13, INT14, NMI, XINT1, XINT2 µÄÖÐ¶Ï·þÎñº¯Êý:
//
interrupt void INT13_ISR(void)     // INT13 »òÕß CPU-Timer1ÖÐ¶Ïº¯Êý
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);
  
  // ·µ»Ø;
}

interrupt void INT14_ISR(void)     // CPU-Timer2ÖÐ¶Ïº¯Êý
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);
  
  // ·µ»Ø;
}

interrupt void NMI_ISR(void)       // Íâ²¿·ÇÆÁ±ÎµÄÖÐ¶Ïº¯Êý
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);
  
  // ·µ»Ø;
}

interrupt void  XINT1_ISR(void)     //XINT1£¨Íâ²¿½Ó¿Ú£©ÖÐ¶Ïº¯Êý
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);
  
  // ·µ»Ø;
}     

interrupt void  XINT2_ISR(void)     //XINT2£¨Íâ²¿½Ó¿Ú£©ÖÐ¶Ïº¯Êý
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;); 
  
  // ·µ»Ø;
}

//---------------------------------------------------------------------------
// DATALOG, RTOSINT, EMUINT, RTOS ÖÐ¶Ï·þÎñº¯Êý:
//
interrupt void DATALOG_ISR(void)   // CPUÊý¾Ý¼ÇÂ¼ÖÐ¶Ïº¯Êý
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;); 
  
  // ·µ»Ø;

}

interrupt void RTOSINT_ISR(void)   // CPUÊµÊ±OSÖÐ¶Ïº¯Êý
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;); 
  
  // ·µ»Ø;
}

interrupt void EMUINT_ISR(void)    // CPU·ÂÕæÖÐ¶Ïº¯Êý
{
   // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);
  
  // ·µ»Ø;
}

//---------------------------------------------------------------------------
// ILLEGAL Instruction Trap ÖÐ¶Ï·þÎñº¯Êý:
//
interrupt void ILLEGAL_ISR(void)   // ·Ç·¨²Ù×÷²¶»ñÖÐ¶Ï
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);
  
  // ·µ»Ø;
}

//---------------------------------------------------------------------------
// ÓÃ»§¶¨ÒåµÄÈíÖÐ¶Ï:
//
interrupt void USER0_ISR(void)     // ÓÃ»§¶¨ÒåµÄÖÐ¶Ï0
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;); 
  
  // ·µ»Ø;
}

interrupt void USER1_ISR(void)     // ÓÃ»§¶¨ÒåµÄÖÐ¶Ï1
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;); 
  
  // ·µ»Ø;
}

interrupt void USER2_ISR(void)     // ÓÃ»§¶¨ÒåµÄÖÐ¶Ï2
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);
  
  // ·µ»Ø;

}

interrupt void USER3_ISR(void)     // ÓÃ»§¶¨ÒåµÄÖÐ¶Ï3
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);
  
  // ·µ»Ø;

}

interrupt void USER4_ISR(void)     // ÓÃ»§¶¨ÒåµÄÖÐ¶Ï4
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);  

  // ·µ»Ø;
}

interrupt void USER5_ISR(void)     // ÓÃ»§¶¨ÒåµÄÖÐ¶Ï5
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);
  
  // ·µ»Ø;
}

interrupt void USER6_ISR(void)     // ÓÃ»§¶¨ÒåµÄÖÐ¶Ï 6
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);
  
  // ·µ»Ø;
}

interrupt void USER7_ISR(void)     // ÓÃ»§¶¨ÒåµÄÖÐ¶Ï7
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);
  
  // ·µ»Ø;
}

interrupt void USER8_ISR(void)     // ÓÃ»§¶¨ÒåµÄÖÐ¶Ï8
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);
  
  // ·µ»Ø;
}

interrupt void USER9_ISR(void)     // ÓÃ»§¶¨ÒåµÄÖÐ¶Ï9
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);
  
  // ·µ»Ø;
}

interrupt void USER10_ISR(void)    // ÓÃ»§¶¨ÒåµÄÖÐ¶Ï10
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;); 
  
  // ·µ»Ø;
}

interrupt void USER11_ISR(void)    // ÓÃ»§¶¨ÒåµÄÖÐ¶Ï11
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);
  
  // ·µ»Ø;
}

//---------------------------------------------------------------------------
//ÒÔÏÂÎªÍâÉèÖÐ¶Ïº¯Êý 
//
interrupt void  ADCINT_ISR(void)     // ADCÖÐ¶Ïº¯Êý
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP1;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}


interrupt void  TINT0_ISR(void)      // CPU-Timer0ÖÐ¶Ïº¯Êý
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP1;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
	
  // ·µ»Ø;


//Ã¿ÖÐ¶ÏÒ»´ÎÃëÊý¼ÓÒ»
	if(Clock.secs < 59) 
		++Clock.secs;
	else 
	{	
		Clock.secs = 0;
		if(Clock.mins < 59)
			++Clock.mins;
		else
		{
			Clock.mins = 0;
			if(Clock.hours < 23)
				++Clock.hours;
			else
				Clock.hours=0;
		}
	}




	CpuTimer0Regs.TCR.bit.TIF = 1; //Çå³ý¶¨Ê±Æ÷ÖÐ¶Ï±êÖ¾Î»
	PieCtrl.PIEACK.bit.ACK1 = 1;  //ÏìÓ¦Í¬×éÖÐ¶Ï
	EINT;
}


interrupt void  WAKEINT_ISR(void)    // WDÖÐ¶Ïº¯Êý
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP1;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}


interrupt void PDPINTA_ISR( void )    // EV-A¹¦ÂÊÇý¶¯±£»¤ÖÐ¶Ïº¯Êý
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP1;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}


interrupt void CMP1INT_ISR(void)    // ±È½Ïµ¥Ôª1µÄ±È½ÏÖÐ¶Ï
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP2;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}

interrupt void CMP2INT_ISR(void)    // ±È½Ïµ¥Ôª2µÄ±È½ÏÖÐ¶Ï
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐÏ 
  // PieCtrl.PIEACK.all = PIEACK_GROUP2;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}

interrupt void CMP3INT_ISR(void)    // ±È½Ïµ¥Ôª3µÄ±È½ÏÖÐ¶Ï
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP2;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}

interrupt void T1PINT_ISR(void)    // Í¨ÓÃ¶¨Ê±Æ÷T1µÄÖÜÆÚÖÐ¶Ï
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP2;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}

interrupt void T1CINT_ISR(void)    // Í¨ÓÃ¶¨Ê±Æ÷T1µÄ±È½ÏÖÐ¶Ï
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP2;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}

interrupt void T1UFINT_ISR(void)   // Í¨ÓÃ¶¨Ê±Æ÷1µÄÏÂÒçÖÐ¶Ï
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP2;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}

interrupt void T1OFINT_ISR(void)   // Í¨ÓÃ¶¨Ê±Æ÷1µÄÉÏÒçÖÐ¶Ï
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP2;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}
      
interrupt void T2PINT_ISR(void)     //Í¨ÓÃ¶¨Ê±Æ÷2µÄÖÜÆÚÖÐ¶Ï
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP3;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}

interrupt void T2CINT_ISR(void)     // Í¨ÓÃ¶¨Ê±Æ÷2µÄ±È½ÏÖÐ¶Ï
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP3;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}

interrupt void T2UFINT_ISR(void)    // Í¨ÓÃ¶¨Ê±Æ÷2µÄÏÂÒçÖÐ¶Ï
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP3;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}

interrupt void T2OFINT_ISR(void)    // Í¨ÓÃ¶¨Ê±Æ÷2µÄÉÏÒçÖÐ¶Ï
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP3;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}

interrupt void CAPINT1_ISR(void)    // ²¶»ñµ¥Ôª1ÖÐ¶Ï
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP3;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}

interrupt void CAPINT2_ISR(void)    // ²¶»ñµ¥Ôª2ÖÐ¶Ï
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP3;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}

interrupt void CAPINT3_ISR(void)    // ²¶»ñµ¥Ôª3ÖÐ¶Ï
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP3;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}
      

interrupt void  PDPINTB_ISR(void)   // EV-B¹¦ÂÊÇý¶¯±£»¤ÖÐ¶Ïº¯Êý
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP1;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}

interrupt void CMP4INT_ISR(void)    // ±È½Ïµ¥Ôª4µÄ±È½ÏÖÐ¶Ïº¯Êý
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP4;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}

interrupt void CMP5INT_ISR(void)    // ±È½Ïµ¥Ôª5µÄ±È½ÏÖÐ¶Ïº¯Êý
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP4;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}

interrupt void CMP6INT_ISR(void)    // ±È½Ïµ¥Ôª6µÄ±È½ÏÖÐ¶Ïº¯Êý
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP4;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}

interrupt void T3PINT_ISR(void)     // Í¨ÓÃ¶¨Ê±Æ÷3µÄÖÜÆÚÖÐ¶Ïº¯Êý
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP4;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}

interrupt void T3CINT_ISR(void)     // Í¨ÓÃ¶¨Ê±Æ÷3µÄ±È½ÏÖÐ¶Ïº¯Êý
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP4;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}

interrupt void T3UFINT_ISR(void)    // Í¨ÓÃ¶¨Ê±Æ÷3µÄÏÂÒçÖÐ¶Ïº¯Êý
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP4;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}

interrupt void T3OFINT_ISR(void)    // Í¨ÓÃ¶¨Ê±Æ÷3µÄÉÏÒçÖÐ¶Ïº¯Êý
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP4;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}
     
interrupt void T4PINT_ISR(void)    // Í¨ÓÃ¶¨Ê±Æ÷4µÄÖÜÆÚÖÐ¶Ïº¯Êý
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP5;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}

interrupt void T4CINT_ISR(void)    // Í¨ÓÃ¶¨Ê±Æ÷4µÄ±È½ÏÖÐ¶Ïº¯Êý
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP5;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}

interrupt void T4UFINT_ISR(void)   // Í¨ÓÃ¶¨Ê±Æ÷4µÄÏÂÒçÖÐ¶Ïº¯Êý
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP5;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}

interrupt void T4OFINT_ISR(void)   // Í¨ÓÃ¶¨Ê±Æ÷4µÄÉÏÒçÖÐ¶Ïº¯Êý
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP5;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}

interrupt void CAPINT4_ISR(void)   // ²¶»ñµ¥Ôª4ÖÐ¶Ïº¯Êý
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP5;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}

interrupt void CAPINT5_ISR(void)   // ²¶»ñµ¥Ôª5ÖÐ¶Ïº¯Êý
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP5;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}

interrupt void CAPINT6_ISR(void)   // ²¶»ñµ¥Ôª6ÖÐ¶Ïº¯Êý
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP5;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}


interrupt void MRINTA_ISR(void)     // McBSP-A½ÓÊÕÖÐ¶Ïº¯Êý
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP6;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}

interrupt void MXINTA_ISR(void)     // McBSP-A·¢ËÍÖÐ¶Ïº¯Êý
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP6;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}


interrupt void SPIRXINTA_ISR(void)    // SPI-A½ÓÊÕÖÐ¶Ïº¯Êý
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP6;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}


interrupt void SPITXINTA_ISR(void)     // SPI-A·¢ËÍÖÐ¶Ïº¯Êý
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP6;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}


interrupt void SCIRXINTA_ISR(void)     // SCI-A½ÓÊÕÖÐ¶Ïº¯Êý
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP9;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}

interrupt void SCITXINTA_ISR(void)     // SCI-A·¢ËÍÖÐ¶Ïº¯Êý
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP9;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}


interrupt void SCIRXINTB_ISR(void)     // SCI-B½ÓÊÕÖÐ¶Ïº¯Êý
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP9;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}

interrupt void SCITXINTB_ISR(void)     // SCI-B·¢ËÍÖÐ¶Ïº¯Êý
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP9;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}


interrupt void ECAN0INTA_ISR(void)  // eCAN0ÖÐ¶Ïº¯Êý
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP9;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}

interrupt void ECAN1INTA_ISR(void)  // eCAN1ÖÐ¶Ïº¯Êý
{
  // ÔÚÕâÀï²åÈëÖÐ¶Ïº¯ÊýµÄ´úÂë
  
  // ×¢ÒâÍË³öÖÐ¶Ïº¯ÊýÊ±ÐèÒªÏÈÊÍ·ÅPIE£¬Ê¹µÃPIEÄÜ¹»ÏìÓ¦Í¬×éÆäËûÖÐ¶Ï 
  // PieCtrl.PIEACK.all = PIEACK_GROUP9;
  
  // ÏÂÃæÁ½ÐÐÖ»ÊÇÎªÁË±àÒë¶øÐ´µÄ£¬²åÈë´úÂëºóÇë½«ÆäÉ¾³ý
  
  // ÖÐ¶Ïº¯Êý´úÂë
     asm ("      ESTOP0");
     for(;;);

  // ·µ»Ø;
}


interrupt void PIE_RESERVED(void)  // PIE±£ÁôµÄ¿Õ¼ä£¬½ö¹©TI²âÊÔ
{
  asm ("      ESTOP0");
  for(;;);
}

interrupt void rsvd_ISR(void)          // TI²âÊÔÓÃ
{
  asm ("      ESTOP0");
  for(;;);
}

//===========================================================================
// No more.
//===========================================================================

