#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <conio.h>
#define sleep(n) Sleep(n * 1000)
#define usleep(n) Sleep(n/1000)

void num1(int x, int y)
{
	int i;
	for (i = 3; i <= 9; i++)
	{
		printf("\033[%d;%dH", i + y, x + 6);
		printf("■\n");
	}
}

void num2(int x, int y)
{
	int i;
	printf("\033[%d;%dH", 4 + y, x + 6);
	printf("■\n");
	printf("\033[%d;%dH", 5 + y, x + 6);
	printf("■\n");
	printf("\033[%d;%dH", 7 + y, x);
	printf("■\n");
	printf("\033[%d;%dH", 8 + y, x);
	printf("■\n");
	for (i = 3; i <= 9; i += 3)
	{
		printf("\033[%d;%dH", i + y, x);
		printf("■■■■\n");
	}
}

void num3(int x, int y)
{
	int i;
	for (i = 4; i <= 8; i++)
	{
		printf("\033[%d;%dH", i + y, x + 6);
		printf("■\n");
	}
	for (i = 3; i <= 9; i += 3)
	{
		printf("\033[%d;%dH", i + y, x);
		printf("■■■■\n");
	}
}

void num4(int x, int y)
{
	int i;
	printf("\033[%d;%dH", 6 + y, x + 2);
	printf("■■\n");
	for (i = 3; i <= 6; i++)
	{
		printf("\033[%d;%dH", i + y, x);
		printf("■\n");
	}
	for (i = 3; i <= 9; i++)
	{
		printf("\033[%d;%dH", i + y, x + 6);
		printf("■\n");
	}
}

void num5(int x, int y)
{
	int i;
	printf("\033[%d;%dH", 4 + y, x);
	printf("■\n");
	printf("\033[%d;%dH", 5 + y, x);
	printf("■\n");
	printf("\033[%d;%dH", 7 + y, x + 6);
	printf("■\n");
	printf("\033[%d;%dH", 8 + y, x + 6);
	printf("■\n");
	for (i = 3; i <= 9; i += 3)
	{
		printf("\033[%d;%dH", i + y, x);
		printf("■■■■\n");
	}
}

void num6(int x, int y)
{
	int i;
	printf("\033[%d;%dH", 7 + y, x + 6);
	printf("■\n");
	printf("\033[%d;%dH", 8 + y, x + 6);
	printf("■\n");
	for (i = 3; i <= 9; i++)
	{
		printf("\033[%d;%dH", i + y, x);
		printf("■\n");
	}
	for (i = 3; i <= 9; i += 3)
	{
		printf("\033[%d;%dH", i + y, x + 2);
		printf("■■■\n");
	}
}

void num7(int x, int y)
{
	int i;
	printf("\033[%d;%dH", 3 + y, x + 2);
	printf("■■\n");
	for (i = 3; i <= 5; i++)
	{
		printf("\033[%d;%dH", i + y, x);
		printf("■\n");
	}
	for (i = 3; i <= 9; i++)
	{
		printf("\033[%d;%dH", i + y, x + 6);
		printf("■\n");
	}
}

void num8(int x, int y)
{
	int i;
	for (i = 3; i <= 9; i += 3)
	{
		printf("\033[%d;%dH", i + y, x + 2);
		printf("■■\n");
	}
	for (i = 3; i <= 9; i++)
	{
		printf("\033[%d;%dH", i + y, x);
		printf("■\n");
	}
	for (i = 3; i <= 9; i++)
	{
		printf("\033[%d;%dH", i + y, x + 6);
		printf("■\n");
	}
}

void num9(int x, int y)
{
	int i;
	for (i = 3; i <= 6; i += 3)
	{
		printf("\033[%d;%dH", i + y, x + 2);
		printf("■■\n");
	}
	for (i = 3; i <= 6; i++)
	{
		printf("\033[%d;%dH", i + y, x);
		printf("■\n");
	}
	for (i = 3; i <= 9; i++)
	{
		printf("\033[%d;%dH", i + y, x + 6);
		printf("■\n");
	}
}

void num0(int x, int y)
{
	int i;
	for (i = 3; i <= 9; i += 6)
	{
		printf("\033[%d;%dH", i + y, x + 2);
		printf("■■\n");
	}
	for (i = 3; i <= 9; i++)
	{
		printf("\033[%d;%dH", i + y, x);
		printf("■\n");
	}
	for (i = 3; i <= 9; i++)
	{
		printf("\033[%d;%dH", i + y, x + 6);
		printf("■\n");
	}
}

void mon(int x, int y)
{
	printf("\033[%d;%dH", 3 + y, x);
	printf(" 日\n");
	printf("\033[%d;%dH", 4 + y, x);
	printf(" 月←\n");
	printf("\033[%d;%dH", 5 + y, x);
	printf(" 火\n");
	printf("\033[%d;%dH", 6 + y, x);
	printf(" 水\n");
	printf("\033[%d;%dH", 7 + y, x);
	printf(" 木\n");
	printf("\033[%d;%dH", 8 + y, x);
	printf(" 金\n");
	printf("\033[%d;%dH", 9 + y, x);
	printf(" 土\n");
}

void tue(int x, int y)
{
	printf("\033[%d;%dH", 3 + y, x);
	printf(" 日\n");
	printf("\033[%d;%dH", 4 + y, x);
	printf(" 月\n");
	printf("\033[%d;%dH", 5 + y, x);
	printf(" 火←\n");
	printf("\033[%d;%dH", 6 + y, x);
	printf(" 水\n");
	printf("\033[%d;%dH", 7 + y, x);
	printf(" 木\n");
	printf("\033[%d;%dH", 8 + y, x);
	printf(" 金\n");
	printf("\033[%d;%dH", 9 + y, x);
	printf(" 土\n");
}

void wen(int x, int y)
{
	printf("\033[%d;%dH", 3 + y, x);
	printf(" 日\n");
	printf("\033[%d;%dH", 4 + y, x);
	printf(" 月\n");
	printf("\033[%d;%dH", 5 + y, x);
	printf(" 火\n");
	printf("\033[%d;%dH", 6 + y, x);
	printf(" 水←\n");
	printf("\033[%d;%dH", 7 + y, x);
	printf(" 木\n");
	printf("\033[%d;%dH", 8 + y, x);
	printf(" 金\n");
	printf("\033[%d;%dH", 9 + y, x);
	printf(" 土\n");
}

void thu(int x, int y)
{
	printf("\033[%d;%dH", 3 + y, x);
	printf(" 日\n");
	printf("\033[%d;%dH", 4 + y, x);
	printf(" 月\n");
	printf("\033[%d;%dH", 5 + y, x);
	printf(" 火\n");
	printf("\033[%d;%dH", 6 + y, x);
	printf(" 水\n");
	printf("\033[%d;%dH", 7 + y, x);
	printf(" 木←\n");
	printf("\033[%d;%dH", 8 + y, x);
	printf(" 金\n");
	printf("\033[%d;%dH", 9 + y, x);
	printf(" 土\n");
}

void fri(int x, int y)
{
	printf("\033[%d;%dH", 3 + y, x);
	printf(" 日\n");
	printf("\033[%d;%dH", 4 + y, x);
	printf(" 月\n");
	printf("\033[%d;%dH", 5 + y, x);
	printf(" 火\n");
	printf("\033[%d;%dH", 6 + y, x);
	printf(" 水\n");
	printf("\033[%d;%dH", 7 + y, x);
	printf(" 木\n");
	printf("\033[%d;%dH", 8 + y, x);
	printf(" 金←\n");
	printf("\033[%d;%dH", 9 + y, x);
	printf(" 土\n");
}

void sat(int x, int y)
{
	printf("\033[%d;%dH", 3 + y, x);
	printf(" 日\n");
	printf("\033[%d;%dH", 4 + y, x);
	printf(" 月\n");
	printf("\033[%d;%dH", 5 + y, x);
	printf(" 火\n");
	printf("\033[%d;%dH", 6 + y, x);
	printf(" 水\n");
	printf("\033[%d;%dH", 7 + y, x);
	printf(" 木\n");
	printf("\033[%d;%dH", 8 + y, x);
	printf(" 金\n");
	printf("\033[%d;%dH", 9 + y, x);
	printf(" 土←\n");
}

void sun(int x, int y)
{
	printf("\033[%d;%dH", 3 + y, x);
	printf(" 日←\n");
	printf("\033[%d;%dH", 4 + y, x);
	printf(" 月\n");
	printf("\033[%d;%dH", 5 + y, x);
	printf(" 火\n");
	printf("\033[%d;%dH", 6 + y, x);
	printf(" 水\n");
	printf("\033[%d;%dH", 7 + y, x);
	printf(" 木\n");
	printf("\033[%d;%dH", 8 + y, x);
	printf(" 金\n");
	printf("\033[%d;%dH", 9 + y, x);
	printf(" 土\n");
}

int outputnum(int x, int y, int z)
{
	int nod, i, tm[4];
	if (x != 0)
	{
		nod = log10(x) + 1;
		for (i = 0; i < nod; i++)
		{
			tm[i] = x % 10;
			x /= 10;
		}
	}
	else
	{
		nod = 1;
		tm[0] = 0;
	}
	if (nod == 1)
	{
		tm[1] = 0;
		nod++;
	}
	for (i = nod - 1; i >= 0; i--)
	{
		if (tm[i] == 1)
		{
			num1(y, z);
		}
		else if (tm[i] == 2)
		{
			num2(y, z);
		}
		else if (tm[i] == 3)
		{
			num3(y, z);
		}
		else if (tm[i] == 4)
		{
			num4(y, z);
		}
		else if (tm[i] == 5)
		{
			num5(y, z);
		}
		else if (tm[i] == 6)
		{
			num6(y, z);
		}
		else if (tm[i] == 7)
		{
			num7(y, z);
		}
		else if (tm[i] == 8)
		{
			num8(y, z);
		}
		else if (tm[i] == 9)
		{
			num9(y, z);
		}
		else if (tm[i] == 0)
		{
			num0(y, z);
		}
		y += 9;
	}
	return(y);
}

int outputdow(int x, int y, int z)
{
	int i;

	if (x == 1)
	{
		mon(y, z);
	}
	else if (x == 2)
	{
		tue(y, z);
	}
	else if (x == 3)
	{
		wen(y, z);
	}
	else if (x == 4)
	{
		thu(y, z);
	}
	else if (x == 5)
	{
		fri(y, z);
	}
	else if (x == 6)
	{
		sat(y, z);
	}
	else
	{
		sun(y, z);
	}
	return(y + 6);
}

int main(void)
{
	time_t now;
	struct tm *ltm;
	int ann = 1, //pause.exeを促すメッセージ用。10回カウントを行う
		year, month, day, DoW, hour, min, sec, //現在時刻 
		busec = 100, //時刻を正確に表示するために使用。secよりも先に値を取得し、secと値が一致しなくなった時に、時計の表示を変える 
		j, //キー入力を取得する。伝統的にjを使用。 
		place, //x軸のどの位置から文字を印字し始めればいいかを記憶する。 
		y = 0, //y軸のどの位置から文字を印字するかを記憶する。0の時、数字上辺は3行目にくる。
		hourch = 0, yearch = 0, //時間表記や年月日(サイズ)切り替えの状態を保存する。
		alhour = -1, almin = -1, alon = 0, alc = 0,  //アラームの時間を保存する。初期化では、負の値を入れて置く。
		count = 0, goodcount = 0;

	while (1)
	{
		time(&now);
		ltm = localtime(&now);
		busec = ltm->tm_sec;
		while (1)
		{
			time(&now);
			ltm = localtime(&now);
			sec = ltm->tm_sec;
			if (busec != sec) {
				break;
			}
			usleep(100000);
		}

		if (kbhit() != 0) {
			j = getch();
			if (j == 27) {
				system("cls");
				printf("clock.exeを終了しています。");
				sleep(1);
				break;
			}
			else if (j == 32) {
				hourch++;
				if (hourch == 2) hourch = 0;
			}
			else if (j == 9) {
				yearch++;
				y = 9;
				if (yearch == 2) {
					yearch = 0;
					y = 0;
				}
			}
			else if (j == 105) {
				system("start C:\\\"Program Files (x86)\"\\Google\\Chrome\\Application\\chrome.exe");
			}
			else if (j == 115) {
				count = 0;
				goodcount = 0;
				while (count < 5) {
					usleep(500000);
					if (kbhit() != 0) {
						j = getch();
						if (j == 115) goodcount++;
					}
					count++;
				}
				if (goodcount == 5) {
					system("cls");
					printf("5秒後にシャットダウンを行います。\n");
					system("shutdown -s -t 5");
					printf("cキーでキャンセル");
					while (1) {
						if (kbhit() != 0) {
							if (getch() == 99) {
								system("shutdown -a");
								system("cls");
								printf("シャットダウンを中止しました。");
								sleep(2);
								break;
							}
						}
					}
				}
			}
			else if (j == 97) //a
			{
				usleep(500000);
				if (kbhit() != 0) {
					j = getch();
					if (j == 97) {
						system("cls");
						printf("アラームを設定してください(0:00～23:59)　Enterで入力開始\n\n");
						while (1)
						{
							if (kbhit() != 0) {
								j = getch();
								if (j == 13) break;
							}
						}
						printf("  :  ");
						printf("\033[%d;%dH", 3, 1);
						scanf("%d", &alhour);
						printf("\033[%d;%dH", 3, 4);
						scanf("%d", &almin);
						if (alhour < 0 || 23 < alhour || almin < 0 || 59 < almin) {
							printf("不正な値が入力されました");
							alhour = -1;
							almin = -1;
							alon = 0;
						}
						else {
							printf("%d:%dにアラームをセットしました。",alhour,almin);
							alon = 1;
						}
						sleep(2);
					}
					else {
						if (alhour != -1 && almin != -1) {
							alon++;
							if (alon == 2) alon = 0;
						}
						else {
							printf("\033[%d;%dH", 1, 63);
							printf("NULL");
							sleep(2);
						}
					}
				}
				else {
					if (alhour != -1 && almin != -1) {
						alon++;
						if (alon == 2) alon = 0;
					}
					else {
						printf("\033[%d;%dH", 1, 65);
						printf("NULL");
						sleep(2);
					}
				}
			}
		}

		time(&now);
		ltm = localtime(&now);
		year = ltm->tm_year + 1900;
		month = ltm->tm_mon + 1;
		day = ltm->tm_mday;
		DoW = ltm->tm_wday; //0=日
		hour = ltm->tm_hour;
		min = ltm->tm_min;

		if (alon == 1) {
			if (hour == alhour && min == almin && sec == 1) {
				Beep(988, 750);
				alc++;
			}
			else if (0 < alc) {
				Beep(988, 750);
				alc++;
				if (alc == 10) {
					alc = 0;
					alon = 0;
				}
			}
		}
		else alc = 0;

		system("cls");
		if (ann <= 10) {
			printf("pause.exeを起動し、fn + pause で最前面に固定することをお勧めします。");
			ann++;
		}
		else {
			if (sec <= 10) {
				printf("Esc:アプリの終了  space:12/24時間表記切り替え  Tab:サイズ切り替え");
			}
			else if (10 < sec && sec <= 20) {
				printf("a:アラームON/OFF(右上にAL→ON)  a長押し:アラームの時間設定");
			}
			else if (20 < sec && sec <= 30) {
				printf("i:GoogleChrome  s長押し:シャットダウン");
			}
			else if (30 < sec && sec <= 40) {
				printf("Esc:アプリの終了  space:12/24時間表記切り替え  Tab:サイズ切り替え");
			}
			else if (40 < sec && sec <= 50) {
				printf("a:アラームON/OFF(右上にAL→ON)  a長押し:アラームの時間設定");
			}
			else {
				printf("i:GoogleChrome  s長押し:シャットダウン");
			}
			if (alon == 1) {
				printf("\033[%d;%dH", 1, 66);
				printf("  AL");
				printf("\033[%d;%dH", 2, 65);
				printf("%2d:%2d",alhour,almin);
			}
		}
		if (yearch == 1) {
			place = 2;
			place = outputnum(year, place, 0);
			printf("\033[%d;%dH", 9, place);
			printf("■\n");
			place += 3;
			place = outputnum(month, place, 0);
			printf("\033[%d;%dH", 9, place);
			printf("■\n");
			place += 3;
			place = outputnum(day, place, 0);
			place = outputdow(DoW, place, 0);
			printf("------------------------------------------------------------------------------------\n");
			y = 9;
		}
		else {
			y = 1;
			printf("\033[%d;%dH", 2, 1);
			printf("%d年%d月%d日 ",year,month,day);
			if (DoW == 0) {
				printf("日曜日");
			}
			else if (DoW == 1) {
				printf("月曜日");
			}
			else if (DoW == 2) {
				printf("火曜日");
			}
			else if (DoW == 3) {
				printf("水曜日");
			}
			else if (DoW == 4) {
				printf("木曜日");
			}
			else if (DoW == 5) {
				printf("金曜日");
			}
			else if (DoW == 6) {
				printf("土曜日");
			}
		}
		if (hourch == 1) {
			if (hour <= 12) {
				printf("\033[%d;%dH", 2 + y, 0);
				printf(" ■■■■■\n");
				printf("\033[%d;%dH", 3 + y, 0);
				printf(" ■      ■\n");
				printf("\033[%d;%dH", 4 + y, 0);
				printf(" ■■■■■\n");
				printf("\033[%d;%dH", 5 + y, 0);
				printf(" ■      ■\n");
				printf("\033[%d;%dH", 7 + y, 0);
				printf(" ■■■■■\n");
				printf("\033[%d;%dH", 8 + y, 0);
				printf(" ■  ■  ■\n");
				printf("\033[%d;%dH", 9 + y, 0);
				printf(" ■  ■  ■\n");
			}
			else {
				printf("\033[%d;%dH", 2 + y, 0);
				printf(" ■■■■■\n");
				printf("\033[%d;%dH", 3 + y, 0);
				printf(" ■      ■\n");
				printf("\033[%d;%dH", 4 + y, 0);
				printf(" ■■■■■\n");
				printf("\033[%d;%dH", 5 + y, 0);
				printf(" ■\n");
				printf("\033[%d;%dH", 7 + y, 0);
				printf(" ■■■■■\n");
				printf("\033[%d;%dH", 8 + y, 0);
				printf(" ■  ■  ■\n");
				printf("\033[%d;%dH", 9 + y, 0);
				printf(" ■  ■  ■\n");
			}
			if (12 < hour) {
				hour -= 12;
			}
		}
		place = 16;
		if (hourch == 0 && yearch == 0) place = 2;
		place = outputnum(hour, place, y);
		place += 2;
		printf("\033[%d;%dH", 4 + y, place);
		printf("■\n");
		printf("\033[%d;%dH", 8 + y, place);
		printf("■\n");
		place += 5;
		place = outputnum(min, place, y);
		place += 2;
		printf("\033[%d;%dH", 4 + y, place);
		printf("■\n");
		printf("\033[%d;%dH", 8 + y, place);
		printf("■\n");
		place += 5;
		place = outputnum(sec, place, y);
	}
}
