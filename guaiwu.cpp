
void guaiwu()
{
	int i,j;
	for (i=1;i<=g;i++)
	{	
		if (guai[i].x<1||guai[i].x>79)guai[i].xue=0;
		if (guai[i].xue<=0 && guai[i].b) 
		{
			guai[i].b=false;
			gotoxy(guai[i].x,guai[i].y);printf(" ");
			gotoxy(guai[i].x,guai[i].y-1);printf(" ");
			if (guai[i].lei==5){gotoxy(guai[i].x,guai[i].y-2);printf(" ");}
			di[guai[i].x][guai[i].y]=0;di[guai[i].x][guai[i].y-1]=0;
			if (guai[i].lei==5){di[guai[i].x][guai[i].y-2]=0;}
			for (int ii=i;ii<g;ii++) guai[ii]=guai[ii+1];
			g--;
			
		}
		if (guai[i].b)
		{
			if (guai[i].lei==1 && (tk+guai[i].yan)%3==0)
			{
				if (di[guai[i].x+guai[i].f][guai[i].y]==1000)
				{
					xue-=10;
				}
				else
				if (di[guai[i].x][guai[i].y+1]==0)
				{
					gotoxy(guai[i].x,guai[i].y);printf(" ");
					gotoxy(guai[i].x,guai[i].y-1);printf(" ");
					di[guai[i].x][guai[i].y]=0;di[guai[i].x][guai[i].y-1]=0;
					guai[i].y++;
					di[guai[i].x][guai[i].y]=1000+i;di[guai[i].x][guai[i].y-1]=1000+i;
					gotoxy(guai[i].x,guai[i].y);printf("A");
					gotoxy(guai[i].x,guai[i].y-1);printf("T");
				}
				else
				{
					gotoxy(guai[i].x,guai[i].y);printf(" ");
					gotoxy(guai[i].x,guai[i].y-1);printf(" ");
					di[guai[i].x][guai[i].y]=0;di[guai[i].x][guai[i].y-1]=0;
					if (di[guai[i].x+guai[i].f][guai[i].y]!=0 || di[guai[i].x+guai[i].f]
					[guai[i].y-1]!=0 || guai[i].x+guai[i].f==80 || guai[i].x+guai[i].f==0) 
					guai[i].f=-guai[i].f;
					else guai[i].x+=guai[i].f;
					di[guai[i].x][guai[i].y]=1000+i;di[guai[i].x][guai[i].y-1]=1000+i;
					gotoxy(guai[i].x,guai[i].y);printf("A");
					gotoxy(guai[i].x,guai[i].y-1);printf("T");
				}
			}
			else
			if (guai[i].lei==2 && (tk+guai[i].yan)%5==0)
			{
				
				if (di[guai[i].x][guai[i].y+1]==0)
				{
					gotoxy(guai[i].x,guai[i].y);printf(" ");
					gotoxy(guai[i].x,guai[i].y-1);printf(" ");
					di[guai[i].x][guai[i].y]=0;di[guai[i].x][guai[i].y-1]=0;
					guai[i].y++;
					di[guai[i].x][guai[i].y]=1000+i;di[guai[i].x][guai[i].y-1]=1000+i;
					gotoxy(guai[i].x,guai[i].y);printf("A");
					gotoxy(guai[i].x,guai[i].y-1);printf("Z");
				}
				else
				{
					gotoxy(guai[i].x,guai[i].y);printf(" ");
					gotoxy(guai[i].x,guai[i].y-1);printf(" ");
					di[guai[i].x][guai[i].y]=0;di[guai[i].x][guai[i].y-1]=0;
					if (di[guai[i].x+guai[i].f][guai[i].y]!=0 || di[guai[i].x+guai[i].f]
					[guai[i].y-1]!=0 || guai[i].x+guai[i].f==80 || guai[i].x+guai[i].f==0) 
					guai[i].f=-guai[i].f;
					else guai[i].x+=guai[i].f;
					di[guai[i].x][guai[i].y]=1000+i;di[guai[i].x][guai[i].y-1]=1000+i;
					gotoxy(guai[i].x,guai[i].y);printf("A");
					gotoxy(guai[i].x,guai[i].y-1);printf("Z");
				}
				if ((tk+guai[i].yan)%30==0)
				{
					bool bk=true;int tf,x11=guai[i].x,y11=guai[i].y;
					if (guai[i].x>x) tf=-1;
					else tf=1;
					x11+=tf;
					while (1)
					{
						if (di[x11][y11]>0) break;
						x11+=tf;
						if (x11<1 || x11>79) break;
					}
					if (di[x11][y11]==1000)
					{
						d++;
						dan[d].x=guai[i].x+tf;dan[d].y=guai[i].y;
						dan[d].x1=tf;dan[d].y1=0;
						dan[d].shang=10;dan[d].b=true;
						dan[d].shu=1;dan[d].cc='O';
					}
				}
			}
			else
			if (guai[i].lei==3 && (tk+guai[i].yan)%5==0)
			{
				
				if (di[guai[i].x][guai[i].y+1]==0)
				{
					gotoxy(guai[i].x,guai[i].y);printf(" ");
					gotoxy(guai[i].x,guai[i].y-1);printf(" ");
					di[guai[i].x][guai[i].y]=0;di[guai[i].x][guai[i].y-1]=0;
					guai[i].y++;
					di[guai[i].x][guai[i].y]=1000+i;di[guai[i].x][guai[i].y-1]=1000+i;
					gotoxy(guai[i].x,guai[i].y);printf("A");
					gotoxy(guai[i].x,guai[i].y-1);printf("U");
				}
				else
				{
					gotoxy(guai[i].x,guai[i].y);printf(" ");
					gotoxy(guai[i].x,guai[i].y-1);printf(" ");
					di[guai[i].x][guai[i].y]=0;di[guai[i].x][guai[i].y-1]=0;
					if (di[guai[i].x+guai[i].f][guai[i].y]!=0 || di[guai[i].x+guai[i].f]
					[guai[i].y-1]!=0 || guai[i].x+guai[i].f==80 || guai[i].x+guai[i].f==0) 
					guai[i].f=-guai[i].f;
					else guai[i].x+=guai[i].f;
					di[guai[i].x][guai[i].y]=1000+i;di[guai[i].x][guai[i].y-1]=1000+i;
					gotoxy(guai[i].x,guai[i].y);printf("A");
					gotoxy(guai[i].x,guai[i].y-1);printf("U");
				}
				if ((tk+guai[i].yan)%50==0)
				{
					int xx1,yy1;xx1=x;yy1=y-25;
					if (yy1<9)yy1=9;
					yy1+=rand()%4;
					d++;
					dan[d].x=xx1;dan[d].y=yy1;
					dan[d].x1=0;dan[d].y1=1;
					dan[d].shang=5;dan[d].b=true;
					dan[d].shu=1;dan[d].cc='V';
					if (xx1-1!=-1)
					{
						d++;
						dan[d].x=xx1-1;dan[d].y=yy1-1;
						dan[d].x1=0;dan[d].y1=1;
						dan[d].shang=5;dan[d].b=true;
						dan[d].shu=1;dan[d].cc='|';
					}
					if (xx1+1!=81)
					{
						d++;
						dan[d].x=xx1+1;dan[d].y=yy1-1;
						dan[d].x1=0;dan[d].y1=1;
						dan[d].shang=5;dan[d].b=true;
						dan[d].shu=1;dan[d].cc='|';
					}
				}
			}
			else
			if (guai[i].lei==4)
			{
				
					guai[i].xue--;
					if (di[guai[i].x+guai[i].f][guai[i].y]==1000)
					{
						xue-=2;
					}
					else
					if (di[guai[i].x][guai[i].y+1]==0)
					{
						gotoxy(guai[i].x,guai[i].y);printf(" ");
						gotoxy(guai[i].x,guai[i].y-1);printf(" ");
						di[guai[i].x][guai[i].y]=0;di[guai[i].x][guai[i].y-1]=0;
						guai[i].y++;
						di[guai[i].x][guai[i].y]=1000+i;di[guai[i].x][guai[i].y-1]=1000+i;
						gotoxy(guai[i].x,guai[i].y);printf("A");
						gotoxy(guai[i].x,guai[i].y-1);printf("q");
					}
					else
					{
						gotoxy(guai[i].x,guai[i].y);printf(" ");
						gotoxy(guai[i].x,guai[i].y-1);printf(" ");
						di[guai[i].x][guai[i].y]=0;di[guai[i].x][guai[i].y-1]=0;
						if (di[guai[i].x+guai[i].f][guai[i].y]!=0 || di[guai[i].x+guai[i].f]
						[guai[i].y-1]!=0 || guai[i].x+guai[i].f==80 || guai[i].x+guai[i].f==0) 
						guai[i].f=-guai[i].f;
						else guai[i].x+=guai[i].f;
						di[guai[i].x][guai[i].y]=1000+i;di[guai[i].x][guai[i].y-1]=1000+i;
						gotoxy(guai[i].x,guai[i].y);printf("A");
						gotoxy(guai[i].x,guai[i].y-1);printf("q");
					}
			}
			else
			if (guai[i].lei==5 && (tk+guai[i].yan)%5==0)
			{
				
				if (di[guai[i].x][guai[i].y+1]==0)
				{
					gotoxy(guai[i].x,guai[i].y);printf(" ");
					gotoxy(guai[i].x,guai[i].y-1);printf(" ");
					gotoxy(guai[i].x,guai[i].y-2);printf(" ");
					di[guai[i].x][guai[i].y]=0;di[guai[i].x][guai[i].y-1]=0;di[guai[i].x][guai[i].y-2]=0;
					guai[i].y++;
					di[guai[i].x][guai[i].y]=1000+i;di[guai[i].x][guai[i].y-1]=1000+i;di[guai[i].x][guai[i].y-2]=1000+i;
					gotoxy(guai[i].x,guai[i].y);printf("A");
					gotoxy(guai[i].x,guai[i].y-1);printf("+");
					gotoxy(guai[i].x,guai[i].y-2);printf("O");
				}
				else
				{
					gotoxy(guai[i].x,guai[i].y);printf(" ");
					gotoxy(guai[i].x,guai[i].y-1);printf(" ");
					gotoxy(guai[i].x,guai[i].y-2);printf(" ");
					di[guai[i].x][guai[i].y]=0;di[guai[i].x][guai[i].y-1]=0;di[guai[i].x][guai[i].y-2]=0;
					if (di[guai[i].x+guai[i].f][guai[i].y]!=0 || di[guai[i].x+guai[i].f]
					[guai[i].y-1]!=0 ||di[guai[i].x+guai[i].f][guai[i].y-2]!=0|| guai[i].x+guai[i].f==80 || guai[i].x+guai[i].f==0) 
					guai[i].f=-guai[i].f;
					else guai[i].x+=guai[i].f;
					di[guai[i].x][guai[i].y]=1000+i;di[guai[i].x][guai[i].y-1]=1000+i;di[guai[i].x][guai[i].y-2]=1000+i;
					gotoxy(guai[i].x,guai[i].y);printf("A");
					gotoxy(guai[i].x,guai[i].y-1);printf("+");
					gotoxy(guai[i].x,guai[i].y-2);printf("O");
				}
				if ((tk+guai[i].yan)%50==0)
				{
					int pf=0;if (guai[i].x-x>0)pf=25;else pf=-25;
					int xx1,yy1;xx1=x+pf;yy1=y-25;
					if (yy1<9){xx1+=-(pf/25)*(9-yy1);yy1=9;}
					if (xx1>0&&xx1<79){
						d++;
						dan[d].x=xx1;dan[d].y=yy1;
						dan[d].x1=-pf/25;dan[d].y1=1;
						dan[d].shang=4;dan[d].b=true;
						dan[d].shu=1;dan[d].cc='*';
						d++;
						dan[d].x=xx1+1;dan[d].y=yy1;
						dan[d].x1=-pf/25;dan[d].y1=1;
						dan[d].shang=4;dan[d].b=true;
						dan[d].shu=1;dan[d].cc='*';
						d++;
						dan[d].x=xx1-1;dan[d].y=yy1;
						dan[d].x1=-pf/25;dan[d].y1=1;
						dan[d].shang=4;dan[d].b=true;
						dan[d].shu=1;dan[d].cc='*';
						d++;
						dan[d].x=xx1;dan[d].y=yy1+1;
						dan[d].x1=-pf/25;dan[d].y1=1;
						dan[d].shang=4;dan[d].b=true;
						dan[d].shu=1;dan[d].cc='*';
						d++;
						dan[d].x=xx1;dan[d].y=yy1-1;
						dan[d].x1=-pf/25;dan[d].y1=1;
						dan[d].shang=4;dan[d].b=true;
						dan[d].shu=1;dan[d].cc='*';
					}
				}
			}
			else
			if (guai[i].lei==100)
			{
				if ((tk+guai[i].yan)%150==0)
				{
					int anss=rand()%4+1;
					while (anss==guai[i].ji1)anss=rand()%4+1;
					guai[i].ji1=anss;
					if (anss==2)
					{
						guai[i].ji2=0;	
					}
				}
				if (guai[i].ji1==1)
				{ 
					for(int iid=1;iid<=2;iid++){
						if (di[guai[i].x+guai[i].f][guai[i].y]==1000)
						{
							xue-=5;
						}
						else
						if (di[guai[i].x][guai[i].y+1]==0)
						{
							gotoxy(guai[i].x,guai[i].y);printf(" ");
							gotoxy(guai[i].x,guai[i].y-1);printf(" ");
							di[guai[i].x][guai[i].y]=0;di[guai[i].x][guai[i].y-1]=0;
							guai[i].y++;
							di[guai[i].x][guai[i].y]=1000+i;di[guai[i].x][guai[i].y-1]=1000+i;
							gotoxy(guai[i].x,guai[i].y);printf("A");
							gotoxy(guai[i].x,guai[i].y-1);printf("e");
						}
						else
						{
							gotoxy(guai[i].x,guai[i].y);printf(" ");
							gotoxy(guai[i].x,guai[i].y-1);printf(" ");
							di[guai[i].x][guai[i].y]=0;di[guai[i].x][guai[i].y-1]=0;
							if (di[guai[i].x+guai[i].f][guai[i].y]!=0 || di[guai[i].x+guai[i].f]
							[guai[i].y-1]!=0 || guai[i].x+guai[i].f==80 || guai[i].x+guai[i].f==0 
							|| guai[i].x-x>15 && guai[i].f==1 || guai[i].x-x<-15 && guai[i].f==-1) 
							guai[i].f=-guai[i].f;
							else guai[i].x+=guai[i].f;
							di[guai[i].x][guai[i].y]=1000+i;di[guai[i].x][guai[i].y-1]=1000+i;
							gotoxy(guai[i].x,guai[i].y);printf("A");
							gotoxy(guai[i].x,guai[i].y-1);printf("e");
						}
					}
				}
				else
				if (guai[i].ji1==2)
				{ 
					if ((tk+guai[i].yan)%5==0)
					{
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
						if (di[guai[i].x][guai[i].y+1]==0)
						{
							gotoxy(guai[i].x,guai[i].y);printf(" ");
							gotoxy(guai[i].x,guai[i].y-1);printf(" ");
							di[guai[i].x][guai[i].y]=0;di[guai[i].x][guai[i].y-1]=0;
							guai[i].y++;
							di[guai[i].x][guai[i].y]=1000+i;di[guai[i].x][guai[i].y-1]=1000+i;
							gotoxy(guai[i].x,guai[i].y);printf("A");
							gotoxy(guai[i].x,guai[i].y-1);printf("e");
						}
						else
						{
							gotoxy(guai[i].x,guai[i].y);printf(" ");
							gotoxy(guai[i].x,guai[i].y-1);printf(" ");
							di[guai[i].x][guai[i].y]=0;di[guai[i].x][guai[i].y-1]=0;
							if (di[guai[i].x+guai[i].f][guai[i].y]!=0 || di[guai[i].x+guai[i].f]
							[guai[i].y-1]!=0 || guai[i].x+guai[i].f==80 || guai[i].x+guai[i].f==0) 
							guai[i].f=-guai[i].f;
							else guai[i].x+=guai[i].f;
							di[guai[i].x][guai[i].y]=1000+i;di[guai[i].x][guai[i].y-1]=1000+i;
							gotoxy(guai[i].x,guai[i].y);printf("A");
							gotoxy(guai[i].x,guai[i].y-1);printf("e");
						}
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
					}
					
					if ((tk+guai[i].yan)%40==30||(tk+guai[i].yan)%40==10)
					{
						bool bk=true;int tf,x11=guai[i].x,y11=guai[i].y;
						if (guai[i].x>x) tf=-1;
						else tf=1;
						x11+=tf;
						while (1)
						{
							if (di[x11][y11]>0) break;
							x11+=tf;
							if (x11<1 || x11>79) break;
						}
						if (di[x11][y11]==1000)
						{
							guai[i].ji2=guai[i].y-rand()%3;
						}
					}
					
					if ((tk+guai[i].yan)%40>=30 || (tk+guai[i].yan)%40>=10&&(tk+guai[i].yan)%40<=20)
					{
						if (guai[i].ji2!=0)
						{
							int tf;
							d++;if (guai[i].x>x) tf=-1;else tf=1;
							dan[d].x=guai[i].x;dan[d].y=guai[i].ji2;
							dan[d].x1=tf;dan[d].y1=0;
							dan[d].shang=3;dan[d].b=true;
							dan[d].shu=1;dan[d].cc='-';
						}	
						else
						{
							bool bk=true;int tf,x11=guai[i].x,y11=guai[i].y;
							if (guai[i].x>x) tf=-1;
							else tf=1;
							x11+=tf;
							while (1)
							{
								if (di[x11][y11]>0) break;
								x11+=tf;
								if (x11<1 || x11>79) break;
							}
							if (di[x11][y11]==1000)
							{
								guai[i].ji2=guai[i].y-rand()%3;
							}
						}
						
					}
					
				}
				else
				if (guai[i].ji1==3 && (tk+guai[i].yan)%10==0)
				{
					
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
					if (di[guai[i].x][guai[i].y+1]==0)
					{
						gotoxy(guai[i].x,guai[i].y);printf(" ");
						gotoxy(guai[i].x,guai[i].y-1);printf(" ");
						di[guai[i].x][guai[i].y]=0;di[guai[i].x][guai[i].y-1]=0;
				    	guai[i].y++;
						di[guai[i].x][guai[i].y]=1000+i;di[guai[i].x][guai[i].y-1]=1000+i;
						gotoxy(guai[i].x,guai[i].y);printf("A");
						gotoxy(guai[i].x,guai[i].y-1);printf("e");
					}
					else
					{
						gotoxy(guai[i].x,guai[i].y);printf(" ");
						gotoxy(guai[i].x,guai[i].y-1);printf(" ");
						di[guai[i].x][guai[i].y]=0;di[guai[i].x][guai[i].y-1]=0;
						if (di[guai[i].x+guai[i].f][guai[i].y]!=0 || di[guai[i].x+guai[i].f]
						[guai[i].y-1]!=0 || guai[i].x+guai[i].f==80 || guai[i].x+guai[i].f==0) 
						guai[i].f=-guai[i].f;
						else guai[i].x+=guai[i].f;
						di[guai[i].x][guai[i].y]=1000+i;di[guai[i].x][guai[i].y-1]=1000+i;
						gotoxy(guai[i].x,guai[i].y);printf("A");
						gotoxy(guai[i].x,guai[i].y-1);printf("e");
					}
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

					if ((tk+guai[i].yan)%30==0)
					{
						int suiji=rand()%3;
						if (suiji==0){
							int tf;
							if (guai[i].x>x) tf=-1;
							else tf=1;
							if (di[guai[i].x+tf][guai[i].y]==0 && di[guai[i].x+tf][guai[i].y-1]==0)
							{
								g++;
								guai[g].b=true;guai[g].x=guai[i].x+tf;guai[g].y=guai[i].y;guai[g].xue=101;guai[g].lei=4;
							}
						}
						else if (suiji==1){
							int tf;
							if (guai[i].x>x) tf=1;
							else tf=-1;
							if (di[guai[i].x+tf][guai[i].y]==0 && di[guai[i].x+tf][guai[i].y-1]==0)
							{
								g++;
								guai[g].b=true;guai[g].x=guai[i].x+tf;guai[g].y=guai[i].y;guai[g].xue=41;guai[g].lei=5;
							}
						}
						else if (suiji==2){
							int tf;
							if (guai[i].x>x) tf=1;
							else tf=-1;
							if (di[guai[i].x+tf][guai[i].y]==0 && di[guai[i].x+tf][guai[i].y-1]==0)
							{
								g++;
								guai[g].b=true;guai[g].x=guai[i].x+tf;guai[g].y=guai[i].y;guai[g].xue=41;guai[g].lei=3;
							}
						}
					}
					
				}
				else
				if (guai[i].ji1==4 && (tk+guai[i].yan)%5==0)
				{
					
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
					if (di[guai[i].x][guai[i].y+1]==0)
					{
						gotoxy(guai[i].x,guai[i].y);printf(" ");
						gotoxy(guai[i].x,guai[i].y-1);printf(" ");
						di[guai[i].x][guai[i].y]=0;di[guai[i].x][guai[i].y-1]=0;
				    	guai[i].y++;
						di[guai[i].x][guai[i].y]=1000+i;di[guai[i].x][guai[i].y-1]=1000+i;
						gotoxy(guai[i].x,guai[i].y);printf("A");
						gotoxy(guai[i].x,guai[i].y-1);printf("e");
					}
					else
					{
						gotoxy(guai[i].x,guai[i].y);printf(" ");
						gotoxy(guai[i].x,guai[i].y-1);printf(" ");
						di[guai[i].x][guai[i].y]=0;di[guai[i].x][guai[i].y-1]=0;
						if (di[guai[i].x+guai[i].f][guai[i].y]!=0 || di[guai[i].x+guai[i].f]
						[guai[i].y-1]!=0 || guai[i].x+guai[i].f==80 || guai[i].x+guai[i].f==0) 
						guai[i].f=-guai[i].f;
						else guai[i].x+=guai[i].f;
						di[guai[i].x][guai[i].y]=1000+i;di[guai[i].x][guai[i].y-1]=1000+i;
						gotoxy(guai[i].x,guai[i].y);printf("A");
						gotoxy(guai[i].x,guai[i].y-1);printf("e");
					}
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
					
						int xx1,yy1;xx1=x+(rand()%20-10);yy1=y-25;
						if (yy1<9)yy1=9;
						if (xx1>-1&&xx1<81)
						{
							d++;
							dan[d].x=xx1;dan[d].y=yy1;
							dan[d].x1=0;dan[d].y1=1;
							dan[d].shang=10;dan[d].b=true;
							dan[d].shu=1;dan[d].cc='V';
						}
						if (xx1-1>-1&&xx1-1<81)
						{
							d++;
							dan[d].x=xx1-1;dan[d].y=yy1-1;
							dan[d].x1=0;dan[d].y1=1;
							dan[d].shang=7;dan[d].b=true;
							dan[d].shu=1;dan[d].cc='|';
						}
						if (xx1-2>-1&&xx1-2<81)
						{
							d++;
							dan[d].x=xx1-2;dan[d].y=yy1-2;
							dan[d].x1=0;dan[d].y1=1;
							dan[d].shang=5;dan[d].b=true;
							dan[d].shu=1;dan[d].cc='|';
						}
						if (xx1+1>-1&&xx1+1<81)
						{
							d++;
							dan[d].x=xx1+1;dan[d].y=yy1-1;
							dan[d].x1=0;dan[d].y1=1;
							dan[d].shang=7;dan[d].b=true;
							dan[d].shu=1;dan[d].cc='|';
						}
						if (xx1+2>-1&&xx1+2<81)
						{
							d++;
							dan[d].x=xx1+2;dan[d].y=yy1-2;
							dan[d].x1=0;dan[d].y1=1;
							dan[d].shang=5;dan[d].b=true;
							dan[d].shu=1;dan[d].cc='|';
						}
					
					
				}
			}
		}
	}
}
