void zou()
{
	if (tk%10==0 &&hu<hujia)hu+=hujiah;
	if (xue1>xue)
	{
		if (xue+hu>=xue1)
		{
			hu-=xue1-xue;
			xue=xue1;
		}
		else{
			xue+=hu;
			hu=0;
			kouxue=10;
		}
	}
	xue1=xue;
	gotoxy(1,8);printf("钱：%d      ",qian);
	gotoxy(1,7);printf("法力值：%d     ",fa);
	gotoxy(1,6);
	if (kouxue>0&&(tk/2)%2==0)SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
	if (kouxue>0)kouxue--;
	printf("血量：%d      ",xue);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	
	printf("护甲：%d      攻击：%d  ",hu,li); 
	if(tk%5==0 && fa<=100) fa+=huifa; 
	if(tk%10==0 && hu>0) hu--;
	int x1,y1; 
	int i,j;
	guaiwu();
	zidan();
	
	if (cc==0)
	{
		for (int i=1;i<=3;i++)
		{
			
			if (di[x][y+1]==0)
			{
				gotoxy(x,y);printf(" ");
				gotoxy(x,y-1);printf(" ");
				di[x][y]=0;di[x][y-1]=0;
				y++;
				di[x][y]=1000;di[x][y-1]=1000;
				gotoxy(x,y);printf("A");
				gotoxy(x,y-1);printf("O");
			}
		}
		
	}
	if (gong==0)
	{ 
		if (check('I'))
		{
			if (fa>=40 && ji[3]==true && ji3==0)
			{
				ji3=140;
				fa-=40;
				ji31=t;
			}
			else
			if (fa>=90 && ji[4]==true)
			{
				hu+=30;
				fa-=90;
				ji4=80;
				li*=3;
			} 
			else
			if (fa>=15 && ji[2]==true)
			{
				int xx1=x,yy1=y-25;
				if (yy1<9)yy1=9;
				d++;
				dan[d].x=xx1;dan[d].y=yy1;
				dan[d].x1=0;dan[d].y1=1;
				dan[d].shang=li*3;dan[d].b=true;
				dan[d].shu=1;dan[d].cc='O';
				if (xx1-1>=0)
				{
					d++;
					dan[d].x=xx1-1;dan[d].y=yy1-1;
					dan[d].x1=0;dan[d].y1=1;
					dan[d].shang=li*3;dan[d].b=true;
					dan[d].shu=1;dan[d].cc='O';
				}
				if (xx1-2>=0)
				{
					d++;
					dan[d].x=xx1-2;dan[d].y=yy1-2;
					dan[d].x1=0;dan[d].y1=1;
					dan[d].shang=li*2;dan[d].b=true;
					dan[d].shu=1;dan[d].cc='O';
				}
				if (xx1+1<=80)
				{
					d++;
					dan[d].x=xx1+1;dan[d].y=yy1-1;
					dan[d].x1=0;dan[d].y1=1;
					dan[d].shang=li*3;dan[d].b=true;
					dan[d].shu=1;dan[d].cc='O';
				}
				if (xx1+2<=80)
				{
					d++;
					dan[d].x=xx1+2;dan[d].y=yy1-2;
					dan[d].x1=0;dan[d].y1=1;
					dan[d].shang=li*2;dan[d].b=true;
					dan[d].shu=1;dan[d].cc='O';
				}
				fa-=15;
			}
		}
		
		if (check('K'))
		{
			if (fa>15 && ji[1]==true && ji1==0)
			{
				ji1=1;
				fa-=15;
			}
			
		}
		if (cc==0)
		{
			if (check('J'))
			{
				gong=1;
				gt=-1;
				if (ji1>0)
				{
					d++;
					dan[d].x=x-1;dan[d].y=y;
					dan[d].x1=-1;dan[d].y1=0;
					dan[d].shang=li/3;dan[d].b=true;dan[d].shu=2;dan[d].cc='O';
					d++;
					dan[d].x=x-2;dan[d].y=y-1;
					dan[d].x1=-1;dan[d].y1=0;
					dan[d].shang=li/3;dan[d].b=true;dan[d].shu=2;dan[d].cc='O';
					d++;
					dan[d].x=x-1;dan[d].y=y-2;
					dan[d].x1=-1;dan[d].y1=0;
					dan[d].shang=li/3;dan[d].b=true;dan[d].shu=2;dan[d].cc='O';
					ji1=0;
				}	
				
			}
			if (check('L'))
			{
				gong=1;
				gt=1;
				
				
				if (ji1>0)
				{
					d++;
					dan[d].x=x+1;dan[d].y=y;
					dan[d].x1=1;dan[d].y1=0;
					dan[d].shang=li/3;dan[d].b=true;dan[d].shu=2;dan[d].cc='O';
					d++;
					dan[d].x=x+2;dan[d].y=y-1;
					dan[d].x1=1;dan[d].y1=0;
					dan[d].shang=li/3;dan[d].b=true;dan[d].shu=2;dan[d].cc='O';	
					d++;
					dan[d].x=x+1;dan[d].y=y-2;
					dan[d].x1=1;dan[d].y1=0;
					dan[d].shang=li/3;dan[d].b=true;dan[d].shu=2;dan[d].cc='O';
					ji1=0;
				}
			}
			if (check('A'))
			{
				gotoxy(x,y);printf(" ");
				gotoxy(x,y-1);printf(" ");
				di[x][y]=0;di[x][y-1]=0;
				if (x>0 && di[x-1][y]==0 && di[x-1][y-1]==0)x--;
				di[x][y]=1000;di[x][y-1]=1000;
				gotoxy(x,y);printf("A");
				gotoxy(x,y-1);printf("O");
				t=-1;
			}
			
			if (check('D'))
			{
				gotoxy(x,y);printf(" ");
				gotoxy(x,y-1);printf(" ");
				di[x][y]=0;di[x][y-1]=0;
				if (x<79 && di[x+1][y]==0 && di[x+1][y-1]==0)x++;
				di[x][y]=1000;di[x][y-1]=1000;
				gotoxy(x,y);printf("A");
				gotoxy(x,y-1);printf("O");
				t=1;
			}
			if (check('W'))
			{
				cc=1;
			}
			
		}
		else
		{
			if (di[x][y+1]!=0&&cc>5)cc=0;
			if (check('S'))cc=0;
			if (check('A'))
			{
				gotoxy(x,y);printf(" ");
				gotoxy(x,y-1);printf(" ");
				di[x][y]=0;di[x][y-1]=0;
				if (x>0 && di[x-1][y]==0 && di[x-1][y-1]==0)x--;
				di[x][y]=1000;di[x][y-1]=1000;
				gotoxy(x,y);printf("A");
				gotoxy(x,y-1);printf("O");
				t=-1;
			}
			if (check('D'))
			{
				gotoxy(x,y);printf(" ");
				gotoxy(x,y-1);printf(" ");
				di[x][y]=0;di[x][y-1]=0;
				if (x<79 && di[x+1][y]==0 && di[x+1][y-1]==0)x++;
				di[x][y]=1000;di[x][y-1]=1000;
				gotoxy(x,y);printf("A");
				gotoxy(x,y-1);printf("O");
				t=1;
			}
			
		}
			
	}
	else
	{
		
		if(gong==3) 
		{
			x1=x,y1=y;
			for (i=1;i<=ju;i++)
			{
				
				x1+=gt;if (x1==-1 || x1==80)break; 
				gotoxy(x1,y1);
				if (di[x1][y1]==0 || di[x1][y1]>1000)
				{
					if (i==1) printf("+");
					else printf("-");
					if (di[x1][y1]>1000)
					{
						guai[di[x1][y1]-1000].xue-=li;
					}
				}
				
			}
			if (jian==2)
			{
				
				d++;
				dan[d].x=x;dan[d].y=y;
				dan[d].x1=gt;dan[d].y1=0;
				dan[d].shang=li;dan[d].b=true;dan[d].shu=2;
				if (gt==1)dan[d].cc='>';
				else dan[d].cc='<'; 
			} 
		}
		if (gong==5)
		{
			gong=0;
			x1=x,y1=y;
			for (i=1;i<=ju;i++)
			{
				x1+=gt;if (x1==-1 || x1==80)break; 
				gotoxy(x1,y1);
				if (di[x1][y1]==0 || di[x1][y1]>1000)printf(" ");
				
			}
			
		}
		else gong++;
		
	}
	//===================================================================
	if (ji4>0)
	{
		ji4--;
		if (ji4==0) li/=3;
	}
	if (ji3>0)
	{
		ji3--;
		int cck=y-rand()%16,x1,y1;
		
		
		
		for (int iii=1;iii<=2;iii++)
		{
			cck=y-rand()%7;
			if (ji31==0)ji31=1;
			x1=x;y1=cck;
			while (x1>0 && x1<79 && y1>8)
			{
				y1--;x1+=ji31;
			}
			d++;dan[d].x=x1;dan[d].y=y1;
			dan[d].x1=ji31;dan[d].y1=1;dan[d].cc='*';
			dan[d].shang=li/3;dan[d].b=true;dan[d].shu=3;
		}
		
	}
	if (cc>0)
	{
		if (cc>=1 && cc<=4)
		{
			gotoxy(x,y);printf(" ");
			gotoxy(x,y-1);printf(" ");
			di[x][y]=0;di[x][y-1]=0;
			if (di[x][y-2]==0)y--; 
			di[x][y]=1000;di[x][y-1]=1000;
			gotoxy(x,y);printf("A");
			gotoxy(x,y-1);printf("O");
		}
		else
		if (cc>=5 &&cc<=7)
		{
			gotoxy(x,y);printf(" ");
			gotoxy(x,y-1);printf(" ");
			di[x][y]=0;di[x][y-1]=0;
			di[x][y]=1000;di[x][y-1]=1000;
			gotoxy(x,y);printf("A");
			gotoxy(x,y-1);printf("O");
		}
		else if (cc>=8 && cc<=11)
		{
			gotoxy(x,y);printf(" ");
			gotoxy(x,y-1);printf(" ");
			di[x][y]=0;di[x][y-1]=0;
			if (di[x][y+1]==0)y++;
			di[x][y]=1000;di[x][y-1]=1000;
			gotoxy(x,y);printf("A");
			gotoxy(x,y-1);printf("O");
		}
		cc++;
		if (cc==12)cc=0;
	}

	ss=0;
	if (ji4>0)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED);
		gotoxy(x,y);printf("A");
		gotoxy(x,y-1);printf("O");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	}
}
