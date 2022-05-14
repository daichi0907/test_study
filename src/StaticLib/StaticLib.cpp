// StaticLib.cpp : スタティック ライブラリ用の関数を定義します。
//

#include "pch.h"
#include "framework.h"
#include "../include/StaticLib.h"


bool is_leap_year(int year)
{
	// 100で割り切れた際は平年の可能性がある
	if (year % 100)
	{
		// 400で割り切れたらうるう年
		return (year % 400) == 0;
	}
	// 上記以外で4で割り切れる年はうるう年
	else
	{
		return (year % 4) == 0;
	}
}
