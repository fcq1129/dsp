/*LCD12864显示数字的驱动程序*/

#ifndef _LCD_H_
#define _LCD_H_

extern unsigned char LcdDataList[];
void WriteLcdCom(unsigned char c);
void WriteLcdDat(unsigned char d);
void ShowNumber(unsigned int n);


#endif
