/**********************************************************
*功能：时间的结构体
*参数：小时、分钟、秒
*********************************************************/
#ifndef _CLOCK_H_
#define _CLOCK_H_

typedef struct {
	unsigned int hours;
	unsigned int mins;
	unsigned int secs;
} CLOCK;

extern CLOCK Clock;
#endif
