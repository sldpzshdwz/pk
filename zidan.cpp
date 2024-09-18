#include<conio.h>
#include<iostream>
#include<windows.h>
#include<cstring>
#include<stdlib.h>
#include<ctime>
#include<cstdio>
#include<cstdlib>
#include<fstream>
#include<time.h> 
#include<stdio.h>
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)
using namespace std;
bool zuobi=false;
int x,y,cc=0,ss,lss,sss,tie,t=0,tk=0,xue=100,hu=0,xue1=100;int di[510][510],qian=50,jian;
bool zdp[510][510];
int hujia=0,hujiah=0,huifa=1;
int gong=0,gt=0,li=10,ju=0,fa=0;bool ji[100];int ji1,ji31,ji3=0,ji4=0;bool yji[100];
int yc=50,kouxue=0;
struct t
{
	int f,xue,x,y,lei,yan,ji1,ji2,ji3,ji4,ji5,ji6;
	bool b;
	t()
	{
		f=1;lei=1;
		b=false;ji1=0;ji2=0;
		
	}
}guai[1100];int g=0;
struct c
{
	int x,y,x1,y1,shang,shu;
	char cc;
	bool b;
	c()
	{
		cc='O';
		b=true;
		shang=5;
		shu=2;
	}
}dan[4100];int d=0;
void gotoxy(int x,int y)
{
     COORD jump;
     jump.X= x;
     jump.Y= y;
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),jump);
}
bool check(char c){//检测某个按键是否按下
    if(!KEY_DOWN(c))return false;  
    else return true; 
}  
void qing()
{
	for (int i=1;i<=50;i++){gotoxy(1,i);printf("                                                                                                                                     \n");	}
} 
void qing2()
{
	for (int i=1;i<=50;i++){printf("                                                                                                                                     \n");	}
} 
void sl(char *p)
{
    while(1)
    {
        if(*p!=0) printf("%c",*p++);
        else break;
        Sleep(10);
    }
}
void zidan()
{
	memset(zdp,true,sizeof(zdp));
	int i,j;
	for (i=1;i<=d;i++)
	{	
		if (dan[i].b==true)
		{
			for (j=1;j<=dan[i].shu;j++)
			{
				int x1=dan[i].x1,y1=dan[i].y1;	
				if (dan[i].x+x1>=0 && dan[i].x+x1<80 && dan[i].y>0 && di[dan[i].x+x1][dan[i].y+y1]==0)
				{
					if (di[dan[i].x][dan[i].y]==0&&zdp[dan[i].x][dan[i].y]) { gotoxy(dan[i].x,dan[i].y); printf(" "); }
					dan[i].x+=x1;dan[i].y+=y1;
					gotoxy(dan[i].x,dan[i].y);printf("%c",dan[i].cc);
					if (j==dan[i].shu)zdp[dan[i].x][dan[i].y]=false;
				}
				else
				{
					if (dan[i].x+x1>=0 && dan[i].x+x1<80 && dan[i].y>0){
						if (di[dan[i].x][dan[i].y]==0) { gotoxy(dan[i].x,dan[i].y); printf(" "); }
						int tt1=di[dan[i].x+x1][dan[i].y+y1];
						if (tt1>1000) guai[tt1-1000].xue-=dan[i].shang;
						if (tt1==1000) xue-=dan[i].shang;
						dan[i].b=false;break;
					}
					else{
						if (dan[i].x>=0 && dan[i].x<80 && dan[i].y>0) { gotoxy(dan[i].x,dan[i].y); printf(" "); }
						dan[i].b=false;break;
					}
				}		
			}
		}
	}
	
	for (i=1;i<=d;i++)
	{
		if (dan[i].b==false)
		{
			for (j=i;j<d;j++)dan[j]=dan[j+1];
			d--;if (i>d)break;
		}
	}
	if (d<0)d=0;
}
