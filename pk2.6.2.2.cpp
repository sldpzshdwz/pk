#include"zidan.cpp"
#include"guaiwu.cpp"
#include"zou.cpp"
void hehe(int x1,int y1,int x2,int y2)
{
	int i,j;
	for (i=x1;i<=x2;i++)
		for (j=y1;j<=y2;j++)
		{
			gotoxy(i,j);printf("@");di[i][j]=1;
		}
}
void kkk()
{
	system("cls");
	memset(di,0,sizeof(di));
	gotoxy(1,5);printf("����� ��"); 
	hehe(0,27,79,27);
	hehe(15,25,17,26);
	hehe(22,23,24,24);
	hehe(23,13,25,14);
	hehe(29,21,31,22);
	hehe(30,16,32,17);
	
	
	hehe(36,19,38,27);
	hehe(37,14,37,19);
	
	
	hehe(42,16,44,17);
	hehe(48,15,50,16);
	hehe(55,14,57,15);
	hehe(60,14,62,15);
	hehe(65,13,67,14);
	hehe(70,12,72,13);
	hehe(75,12,77,13);
	gotoxy(x,y); printf("A");di[x][y]=1000;
	gotoxy(x,y-1); printf("O");di[x][y-1]=1000;
	g=3;guai[1].b=true;guai[1].x=66;guai[1].y=12;guai[1].xue=11;
	guai[2].b=true;guai[2].x=65;guai[2].y=12;guai[2].xue=11;
	guai[3].b=true;guai[3].x=64;guai[3].y=12;guai[3].xue=11;
	guai[1].lei=1;guai[2].lei=1;guai[3].lei=1;
	while (1)
	{
		
		int tx,ty;
		tx=clock();
		zou();tk++;if (tk==100000000)tk=0;
		if (x==79) break;
		if (xue+hu<=0) {printf("������\n");Sleep(2000);break;}
		ty=clock();
		if (yc-(ty-tx)>0)Sleep(yc-(ty-tx));
	}	
}
void kkk3()
{
	system("cls");
	memset(di,0,sizeof(di));
	hehe(0,27,79,27);
	gotoxy(1,5);printf("����� ��"); 
	gotoxy(x,y); printf("A");di[x][y]=1000;
	gotoxy(x,y-1); printf("O");di[x][y-1]=1000;
	g=9;
	guai[1].b=true;guai[1].x=66;guai[1].y=12;guai[1].xue=21;
	guai[2].b=true;guai[2].x=65;guai[2].y=12;guai[2].xue=11;
	guai[3].b=true;guai[3].x=64;guai[3].y=12;guai[3].xue=11;
	guai[4].b=true;guai[4].x=66;guai[4].y=14;guai[4].xue=11;
	guai[5].b=true;guai[5].x=65;guai[5].y=14;guai[5].xue=11;
	guai[6].b=true;guai[6].x=64;guai[6].y=14;guai[6].xue=11;
	guai[7].b=true;guai[7].x=66;guai[7].y=16;guai[7].xue=21;
	guai[8].b=true;guai[8].x=65;guai[8].y=16;guai[8].xue=11;
	guai[9].b=true;guai[9].x=64;guai[9].y=16;guai[9].xue=11;
	bool bk=false; 
	while (1)
	{
		int tx,ty;
		tx=clock();
		zou();tk++;if (tk==100000000)tk=0;
		
		if (x==79 && g==0) break;
		
		if (xue+hu<=0) {printf("������\n");Sleep(2000);break;}
		ty=clock();
		if (yc-(ty-tx)>0)Sleep(yc-(ty-tx));
	}
}
void kkkcs()
{
	system("cls");
	memset(di,0,sizeof(di));
	hehe(0,27,79,27);
	gotoxy(1,5);printf("����� ��"); 
	gotoxy(x,y); printf("A");di[x][y]=1000;
	gotoxy(x,y-1); printf("O");di[x][y-1]=1000;
	g=9;
	guai[1].b=true;guai[1].x=66;guai[1].y=12;guai[1].xue=21;guai[1].lei=3;
	guai[2].b=true;guai[2].x=65;guai[2].y=12;guai[2].xue=11;guai[2].lei=3;
	guai[3].b=true;guai[3].x=64;guai[3].y=12;guai[3].xue=11;guai[3].lei=3;
	guai[4].b=true;guai[4].x=66;guai[4].y=14;guai[4].xue=11;guai[4].lei=3;
	guai[5].b=true;guai[5].x=65;guai[5].y=14;guai[5].xue=11;guai[5].lei=3;
	guai[6].b=true;guai[6].x=64;guai[6].y=14;guai[6].xue=11;guai[6].lei=3;
	guai[7].b=true;guai[7].x=66;guai[7].y=16;guai[7].xue=21;guai[7].lei=3;
	guai[8].b=true;guai[8].x=65;guai[8].y=16;guai[8].xue=11;guai[8].lei=3;
	guai[9].b=true;guai[9].x=64;guai[9].y=16;guai[9].xue=11;guai[9].lei=3;
	bool bk=false; 
	while (1)
	{
		int tx,ty;
		tx=clock();
		zou();tk++;if (tk==100000000)tk=0;
		
		if (x==79 && g==0) break;
		
		if (xue+hu<=0) {printf("������\n");Sleep(2000);break;}
		ty=clock();
		if (yc-(ty-tx)>0)Sleep(yc-(ty-tx));
	}
}
void kkk4()
{
	system("cls");
	memset(di,0,sizeof(di));
	hehe(0,27,79,27);
	gotoxy(1,5);printf("����� ��"); 
	gotoxy(x,y); printf("A");di[x][y]=1000;
	gotoxy(x,y-1); printf("O");di[x][y-1]=1000;
	g=6;
	guai[1].b=true;guai[1].x=67;guai[1].y=12;guai[1].xue=1;
	guai[2].b=true;guai[2].x=65;guai[2].y=12;guai[2].xue=1;
	guai[3].b=true;guai[3].x=64;guai[3].y=12;guai[3].xue=1;
	guai[4].b=true;guai[4].x=66;guai[4].y=12;guai[4].xue=1;
	guai[5].b=true;guai[5].x=68;guai[5].y=12;guai[5].xue=1;
	guai[6].b=true;guai[6].x=69;guai[6].y=12;guai[6].xue=1;
	bool bk=false; 
	while (1)
	{
		int tx,ty;
		tx=clock();
		zou();tk++;if (tk==100000000)tk=0;
		
		if (x==79 && g==0) break;
		if (xue+hu<=0) {printf("������\n");Sleep(2000);break;}
		ty=clock();
		if (yc-(ty-tx)>0)Sleep(yc-(ty-tx));
	}
}

void kkk2()
{
	system("cls");
	memset(di,0,sizeof(di));
	hehe(0,27,79,27);
	hehe(45,22,47,26);
	g=10;
	gotoxy(1,5);printf("����� ��"); 
	gotoxy(x,y); printf("A");di[x][y]=1000;
	gotoxy(x,y-1); printf("O");di[x][y-1]=1000;
	guai[1].b=true;guai[1].x=23;guai[1].y=12;guai[1].xue=1;guai[1].f=-1;
	guai[2].b=true;guai[2].x=25;guai[2].y=12;guai[2].xue=1;guai[2].f=-1;
	guai[3].b=true;guai[3].x=34;guai[3].y=12;guai[3].xue=1;
	guai[4].b=true;guai[4].x=33;guai[4].y=12;guai[4].xue=1;
	guai[5].b=true;guai[5].x=32;guai[5].y=12;guai[5].xue=1;
	guai[6].b=true;guai[6].x=31;guai[6].y=12;guai[6].xue=1;
	guai[7].b=true;guai[7].x=30;guai[7].y=12;guai[7].xue=1;
	guai[8].b=true;guai[8].x=29;guai[8].y=12;guai[8].xue=1;
	guai[9].b=true;guai[9].x=28;guai[9].y=12;guai[9].xue=1;
	guai[1].lei=1;guai[2].lei=1;guai[3].lei=1;guai[4].lei=1;guai[5].lei=1;guai[6].lei=1;guai[7].lei=1;guai[8].lei=1;guai[9].lei=1;
	while (1)
	{
		int tx,ty;
		tx=clock();
		zou();tk++;if (tk==100000000)tk=0;
		if (x==79) break;
		if (xue+hu<=0) {printf("������\n");Sleep(2000);break;}
		ty=clock();
		if (yc-(ty-tx)>0)Sleep(yc-(ty-tx));
	}	
}
void kkk5()
{
	system("cls");
	memset(di,0,sizeof(di));
	hehe(0,27,79,27);
	gotoxy(1,5);printf("����� ��"); 
	gotoxy(x,y); printf("A");di[x][y]=1000;
	gotoxy(x,y-1); printf("O");di[x][y-1]=1000;
	g=9;
	guai[1].b=true;guai[1].x=67;guai[1].y=12;guai[1].xue=11;guai[1].lei=2;
	guai[2].b=true;guai[2].x=65;guai[2].y=12;guai[2].xue=21;guai[2].lei=1;
	guai[3].b=true;guai[3].x=64;guai[3].y=12;guai[3].xue=11;guai[3].lei=2;
	guai[4].b=true;guai[4].x=66;guai[4].y=12;guai[4].xue=11;guai[4].lei=2;
	guai[5].b=true;guai[5].x=68;guai[5].y=12;guai[5].xue=11;guai[5].lei=1;
	guai[6].b=true;guai[6].x=69;guai[6].y=12;guai[6].xue=11;guai[6].lei=3;
	guai[7].b=true;guai[7].x=70;guai[7].y=12;guai[7].xue=11;guai[7].lei=5;
	guai[8].b=true;guai[8].x=71;guai[8].y=12;guai[8].xue=11;guai[8].lei=1;
	guai[9].b=true;guai[9].x=72;guai[9].y=12;guai[9].xue=1;guai[9].lei=1;
	bool bk=false; 
	while (1)
	{
		int tx,ty;
		tx=clock();
		zou();tk++;if (tk==100000000)tk=0;
		
		if (x==79 && g==0) break;
		if (xue+hu<=0) {printf("������\n");Sleep(2000);break;}
		ty=clock();
		if (yc-(ty-tx)>0)Sleep(yc-(ty-tx));
	}
}
void kkk6()
{
	system("cls");
	memset(di,0,sizeof(di));
	hehe(0,27,79,27);
	gotoxy(1,5);printf("����� ��"); 
	gotoxy(x,y); printf("A");di[x][y]=1000;
	gotoxy(x,y-1); printf("O");di[x][y-1]=1000;
	g=10;
	hehe(30,24,40,27);hehe(35,21,40,24);
	guai[1].b=true;guai[1].x=67;guai[1].y=12;guai[1].xue=11;guai[1].lei=1;
	guai[2].b=true;guai[2].x=69;guai[2].y=12;guai[2].xue=11;guai[2].lei=1;
	guai[3].b=true;guai[3].x=68;guai[3].y=12;guai[3].xue=11;guai[3].lei=2;
	guai[4].b=true;guai[4].x=66;guai[4].y=10;guai[4].xue=1;guai[4].lei=1;
	guai[5].b=true;guai[5].x=68;guai[5].y=10;guai[5].xue=11;guai[5].lei=2;
	guai[6].b=true;guai[6].x=69;guai[6].y=14;guai[6].xue=1;guai[6].lei=2;
	guai[7].b=true;guai[7].x=70;guai[7].y=14;guai[7].xue=1;guai[7].lei=3;
	guai[8].b=true;guai[8].x=71;guai[8].y=14;guai[8].xue=1;guai[8].lei=3;
	guai[9].b=true;guai[9].x=72;guai[9].y=14;guai[9].xue=1;guai[9].lei=3;guai[9].yan=100;
	guai[10].b=true;guai[10].x=73;guai[10].y=14;guai[10].xue=11;guai[10].lei=5;
	bool bk=false; 
	while (1)
	{
		int tx,ty;
		tx=clock();
		zou();tk++;if (tk==100000000)tk=0;
		
		if (x==79 && g==0) break;
		if (xue+hu<=0) {printf("������\n");Sleep(2000);break;}
		ty=clock();
		if (yc-(ty-tx)>0)Sleep(yc-(ty-tx));
	}
}
void kkk7()
{
	system("cls");
	memset(di,0,sizeof(di));
	hehe(0,27,79,27);
	gotoxy(1,5);printf("����� ��"); 
	gotoxy(x,y); printf("A");di[x][y]=1000;
	gotoxy(x,y-1); printf("O");di[x][y-1]=1000;
	int i,j;
	hehe(15,15,18,27);
	hehe(13,25,13,26);gotoxy(13,25);printf("W");gotoxy(13,26);printf("A");
	
	hehe(9,22,11,22);hehe(6,19,8,19);
	
	hehe(30,25,30,26);gotoxy(30,25);printf("L");gotoxy(30,26);printf("A");
	
	hehe(35,25,35,26);gotoxy(35,25);printf("o");gotoxy(35,26);printf("w");
	hehe(9,16,11,16);
	for (i=15;i<=18;i++)
		for (j=18;j<=23;j++)
		{
			gotoxy(i,j);printf("|");
		}
	bool bk=false,lao=true,cheng=true;int fan1=2,fan2=2,fan3=1; 
	while (1)
	{
		int tx,ty;
		tx=clock();
		zou();tk++;if (tk==100000000)tk=0;
		
		if (x==79 && g==0) break;
		if (xue<=0) {printf("������\n");Sleep(2000);break;}
		if (x==12  && y==26 && tk%10==0 && cheng)
		{
			gotoxy(0,35);qing2(); 
			gotoxy(1,35);
			sl("�����ػ��ߣ����ȥ�ͽ�50Ԫ��(�س�����)\n");
			sss=' ';while (sss!='\n'){sss=getchar();}
			
			sl("1,�ð�\n2,���Լ���·��ȥ\n");
			bk=true;
			while (bk)
			{ 
				ss=getch();
				if (ss=='1')
				{
					if (qian>=50)
					{
						for (i=15;i<=18;i++)
							for (j=18;j<=23;j++)
							{
								gotoxy(i,j);printf(" ");
								di[i][j]=0;
							}
						qian-=50;
						gotoxy(1,5);
						bk=false;	
					}
					else
					{
						gotoxy(1,38);sl("Ǯ����.....(�س�����)\n");
						sss=' ';while (sss!='\n'){sss=getchar();}
						gotoxy(1,38);printf("              "); 
					}
					cheng=false;
				}
				else
				if (ss=='2')
				{
					bk=false;
					gotoxy(1,5); 
					cheng=false;
				} 
				else
				{
					bk=false;
				}
			}
			gotoxy(x,y);printf(" ");
			gotoxy(x,y-1);printf(" ");
			di[x][y]=0;di[x][y-1]=0;
			if (x>0 && di[x-1][y]==0 && di[x-1][y-1]==0)x--;
			di[x][y]=1000;di[x][y-1]=1000;
			gotoxy(x,y); printf("A");di[x][y]=1000;
			gotoxy(x,y-1); printf("O");di[x][y-1]=1000;
		}
		if (x==29  && y==26 && tk%10==0 && lao==true)
		{
			gotoxy(0,35);qing2(); 
			gotoxy(0,35);
			sl("����������̣���˵��ȥ��ɭ�֣����¸�\n");
			sl("����������̣��������300Ԫ��Ϊ������\n");
			sl("����������̣����Ҫ�ú�ѧϰ���������ϣ���Ҫ���������̵�������\n(�س�����)");sss=' ';while (sss!='\n'){sss=getchar();}
			qian+=300;
			gotoxy(x,y);printf(" ");
			gotoxy(x,y-1);printf(" ");
			di[x][y]=0;di[x][y-1]=0;
			if (x>0 && di[x-1][y]==0 && di[x-1][y-1]==0)x--;
			di[x][y]=1000;di[x][y-1]=1000;
			gotoxy(x,y); printf("A");di[x][y]=1000;
			gotoxy(x,y-1); printf("O");di[x][y-1]=1000;
			lao=false;
		}
		if (x==34  && y==26 && tk%10==0)
		{
			gotoxy(0,35);qing2(); 
			gotoxy(0,35);
			printf("С����Ҫ���ʳ����\n����%d���ձ�(��Ѫ)\n%d������(�ӹ���)\n%d������(???)(�س�����)\n",fan1,fan2,fan3);
			sss=' ';while (sss!='\n'){sss=getchar();}
			ss=getch();
			printf("1,�ձ�(200Ԫ)\n2������(200Ԫ)\n3�����⣨300Ԫ��\n");
			ss=getch();
			if (ss=='1') 
			{
				if (qian>=200 && fan1>0)
				{
					qian-=200;
					fan1-=1;
					xue+=200;
					sl("Ѫ+200\n"); 
				} 
				else
				{
					sl("Ǯ��������\n"); 
				}
			} 
			else
			if (ss=='2')
			{
				if (qian>=200 && fan2>0)
				{
					qian-=200;
					fan2-=1;
					li+=10;
					sl("��+10\n"); 
				} 
				else
				{
					sl("Ǯ��������\n"); 
				}
			}
			else
			if (ss=='3')
			{
				if (qian>=300 && fan3>0)
				{
					qian-=300;
					fan3-=1;
					xue-=100;li+=25;
					sl("�����ӣ�Ѫ-100(�Ǻ�)����+25\n"); 
				} 
				else
				{
					sl("Ǯ��������\n"); 
				}
			}
			sl("��ӭ����������(�س�����)\n"); 
			sss=' ';while (sss!='\n'){sss=getchar();}
			gotoxy(x,y);printf(" ");
			gotoxy(x,y-1);printf(" ");
			di[x][y]=0;di[x][y-1]=0;
			if (x>0 && di[x-1][y]==0 && di[x-1][y-1]==0)x--;
			di[x][y]=1000;di[x][y-1]=1000;
			gotoxy(x,y); printf("A");di[x][y]=1000;
			gotoxy(x,y-1); printf("O");di[x][y-1]=1000;
		}
		ty=clock();
		if (yc-(ty-tx)>0)Sleep(yc-(ty-tx));
	}
} 
void kkk8()
{
	system("cls");
	memset(di,0,sizeof(di));
	hehe(0,27,79,27);
	gotoxy(1,5);printf("����� ��"); 
	
	gotoxy(x,y); printf("A");di[x][y]=1000;
	gotoxy(x,y-1); printf("O");di[x][y-1]=1000;
	g=1;
	
	guai[1].b=true;guai[1].x=67;guai[1].y=25;guai[1].xue=3000;guai[1].lei=100;guai[1].ji1=4;

	bool bk=false; 
	while (1)
	{
		int tx,ty;
		tx=clock();
		zou();tk++;if (tk==100000000)tk=0;
		gotoxy(50,5);printf("BOSSѪ����%d     ",guai[1].xue);
		if (x==79 && g==0) break;
		if (xue+hu<=0) {printf("������\n");Sleep(2000);break;}
		ty=clock();
		if (yc-(ty-tx)>0)Sleep(yc-(ty-tx));
	}
}

void gaiji()
{
	system("cls");
	printf("����㽫��������һ���ļ������ã�����һ���ͻ�ʧЧ\n");
	for (int i=1;i<=4;i++)
	{
		if (i==1 && yji[1])
		{
			printf("1,�����(��k)��"); 
			if (ji[1]) printf("������...\n");
			else printf("δ����...\n");
		}	
		if (i==2 && yji[2])
		{
			printf("2,��ǿ�����(��I)��"); 
			if (ji[2]) printf("������...\n");
			else printf("δ����...\n");
		}
		if (i==3 && yji[3])
		{
			printf("3,��������ȭ(��I)��"); 
			if (ji[3]) printf("������...\n");
			else printf("δ����...\n");
		}
		if (i==4 && yji[4])
		{
			printf("4,��ȭ(��I)��"); 
			if (ji[4]) printf("������...\n");
			else printf("δ����...\n");
		}
	}
	sl("��Ҫ������һ�����ܵ�״̬�������������ñ�δ���ã���֮һ����\n");
	scanf("%d",&ss);if (ss<0 || ss>1000) return ;
	if (yji[ss])
	{
		if (ji[ss])ji[ss]=false;
		else ji[ss]=true;
		sl("�Ѹ���\n");
	}
	else
	{
		sl("δӵ�д˼���\n"); 
	}
	printf("1���ٸı似��һ��\n���������˳�\n");
	ss=getch();
	if (ss=='1')gaiji(); 
	system("cls");
}

void zhu()
{
	system("cls");
	
	
	ju=5;
	sl("�ڹ��ϵĴ�ɭ����....\n");
	sl("ð�������ȣ�ɭ�����кö������ܰ����������𣿣����һ���㱨��ġ�\n");
	sl("ð�������ȣ�����һ�Ѷ̽��ɣ�����5����ȥ������Щ���������4���ֽ̳̣�\n");
	sl("1,С�ӹ���(+350Ԫ)\n2,���޺��Ĺ���(+400Ԫ)\n3,���Ĭ���Ĺ���(+500Ԫ)\n4,�һ����������\n5,�������˰�\n6,�������˵���仰(ͨ�غ�����)\n");
	bool bk=true; 
	while (bk)
	{
		ss=getch();
		if (ss=='1')
		{
			x=1;y=26;
			kkk4(); 
			if (xue<=0)return ;
			bk=false; 
			system("cls");
			sl("ð���ߣ�������������Ȼѡ���������Ĺ��������������ʮ�黹�Ǹ����(�س�����)\n"); qian+=350; 
			sss=' ';while (sss!='\n'){sss=getchar();}
		}
		else
		if (ss=='2')
		{
			x=1;y=26;
			kkk3(); 
			if (xue<=0)return ;
			bk=false; 
			system("cls");
			sl("ð���ߣ������������˵��޺��Ĺ�����İٿ���Ϊ��ı����(�س�����)\n"); qian+=400; 
			sss=' ';while (sss!='\n'){sss=getchar();}
		} 
		else
		if (ss=='3')
		{
			x=1;y=26;
			kkk5();
			if (xue<=0)return ;
			bk=false; 
			system("cls");
			sl("ð���ߣ�������������Ȼ��������ǿ�Ĺ������ٿ���Ϊ��ı����(�س�����)\n"); qian+=500; 
			sss=' ';while (sss!='\n'){sss=getchar();}
		}
		if (ss=='4') 
		{
			gotoxy(1,9); 
			sl("ð���ߣ�W��Ծ��A,D�����ߣ�S���ڿ���Ѹ���µ���\nJ,L������J����L���ң�����k��J,LԶ������Ҫ������\n���һ������ʱ���س����Լ�����Ϸ\n");
			sl("ps:��һ���԰�̫��λس����ܻᵼ�¿�bugŶ~~(�س�����)"); 
			sss=' ';while (sss!='\n'){sss=getchar();}
			gotoxy(1,9);
			printf("                                                                                ");
			gotoxy(1,10);
			printf("                                                                                ");
			gotoxy(1,11);
			printf("                                                                                ");
			gotoxy(1,12);
			printf("                                                                                "); 
		} 
		else
		if (ss=='5') 
		{
			system("cls");
			sl("ð���ߣ��ðɣ��´��ټ�(�س�����)\n");
			bk=false;
			sss=' ';while (sss!='\n'){sss=getchar();}
		} 
		else
		if (ss=='6'){
			gotoxy(1,9);sl("ð���ߣ��������Ǵ����ְɣ�\n");
			int shuaaa;scanf("%d",&shuaaa);
			if (shuaaa==323992923){
				sl("����qq��1339097071����ӭ���bug����Ȼû�н�����\n");
				sl("�����ڿ�������\n");
				sl("ӵ�����м��ܣ�����Ǯ������Ѫ(�س�����)\n");
				xue=99999;qian=99999;yji[2]=true;yji[3]=true;yji[4]=true;
				zuobi=true;
				sss=' ';while (sss!='\n'){sss=getchar();}
				
				 
				gotoxy(1,9);
				printf("                                                                                                                          ");
				gotoxy(1,10);
				printf("                                                                                                                          ");
				gotoxy(1,11);
				printf("                                                                                                                          ");
				gotoxy(1,12);
				printf("                                                                                                                          ");
			
				
			}
			else{
				sl("������ˣ���ͨ��������(�س�����)\n");
				sss=' ';while (sss!='\n'){sss=getchar();}
				gotoxy(1,9);
				printf("                                                                                                                          ");
				gotoxy(1,10);
				printf("                                                                                                                          ");
				gotoxy(1,11);
				printf("                                                                                                                          ");
				gotoxy(1,12);
				printf("                                                                                                                          ");
			}
		}
	} 
	system("cls");
	if (zuobi){
		sl("Ҫ���ļ����𣿣���\n1,Ҫ\n2,������\n");
		bk=true;
		while (bk)
		{
			cc=getch();
			if (cc=='1')
			{
				gaiji();
				bk=false;
			}
			else
			if (cc=='2')
			{
				bk=false;
			}
		}
	}
	system("cls");
	sl("�㣺��ɭ��Ҳ��һ��ʱ���ˣ��û�ȥ������.....\n");
	sl("1,�س���ʥ��֮��\n2,�س�������֮��\n");
	printf("���׵����ã�������ڻ��ײ��ܵ��˺�ʱ����Щ�˺���۵������ϡ�\n���׻��Զ�˥����\n");
	
	bk=true; 
	while (bk)
	{
		ss=getch();
		if (ss=='1')
		{
			x=1;y=26;
			kkk2(); 
			if (xue<=0)return ;
			bk=false; 
		} 
		else
		if (ss=='2')
		{
			x=1;y=26;
			kkk(); 
			if (xue<=0)return ;
			bk=false; 
		} 
	} 
	system("cls");
	printf("�س�����...."); 
	sss=' ';while (sss!='\n'){sss=getchar();}
	system("cls");
	bk=true;
	while (bk)
	{
		gotoxy(0,1); 
		int kbk; 
		
		sl("�����ڻص������ˡ�����˵��\n"); 
		sl("�����ڻ���");printf("%d",qian);sl("ԪǮ   ");printf("%d",xue);sl("��Ѫ   ");printf("%d",li);sl("�㹥��\n"); 
		gotoxy(0,3); 
		 
		printf("1��ȥҽԺ\n2��ȥ������\n3��ȥѵ����\n4���߳�����\n");
		gotoxy(0,7); 
		ss=getch();
		if (ss=='1')
		{
			sl("����50Ԫ+45Ѫ��,��Ҫ���Ƽ��Σ���������������0,�������ֺ�Ҫ���س���");
			scanf("%d",&kbk); 
			if (kbk*50<=qian){qian-=kbk*50;xue+=45*kbk;gotoxy(0,7);sl("������Ѫ��");} 
			else 
			{
				gotoxy(0,7);sl("Ǯ����....."); 
			} 
			qing();
		} 
		else
		if (ss=='2')
		{
			sl("1.����(��8��99Ԫ)\n2����������12��199Ԫ��\n3��������������6��450Ԫ������ʱ�ų�����,�ܺõ�һ�ѽ���\n4,����(�Զ����������ӵ�10��200Ԫ)\n5,���ȣ������ظ��ٶ�����һ����250Ԫ��\n(��������0,�������ֺ�Ҫ���س�)");
			scanf("%d",&kbk); 
			if (kbk==1)
			{
				if (qian>=100)
				{
					gotoxy(0,7);sl("��ã�����");
					ju=8;qian-=99;
				} 
				else
				{
					gotoxy(0,7);sl("Ǯ����....."); 
				}
			}
			else if (kbk==2)
			{
				if (qian>=200)
				{
					gotoxy(0,7);sl("��ã�����");
					ju=12;qian-=199;
				} 
				else
				{
					gotoxy(0,7);sl("Ǯ����....."); 
				}
			}
			else if (kbk==3)
			{
				if (qian>=450)
				{
					gotoxy(0,7);sl("��ã���������");
					ju=6;qian-=450;jian=2;
				} 
				else
				{
					gotoxy(0,7);sl("Ǯ����....."); 
				}
			}
			else if (kbk==4)
			{
				if (qian>=200)
				{
					gotoxy(0,7);sl("��ã�����");
					qian-=200;hujia=10;hujiah=2;
				} 
				else
				{
					gotoxy(0,7);sl("Ǯ����....."); 
				}
			}
			else if (kbk==5)
			{
				if (qian>=250)
				{
					gotoxy(0,7);sl("��ã�����");
					qian-=250;huifa=2;
				} 
				else
				{
					gotoxy(0,7);sl("Ǯ����....."); 
				}
			}
			sss=' ';while (sss!='\n'){sss=getchar();}
			qing();
		} 
		else 
		if (ss=='3')
		{
			sl("����50Ԫ+2����,��Ҫ���Ӽ��Σ���������������0,�������ֺ�Ҫ���س���");
			scanf("%d",&kbk); 
			if (kbk*50<=qian){qian-=kbk*50;li+=2*kbk;gotoxy(0,7);sl("�����˹���");} 
			else 
			{
				gotoxy(0,7);sl("Ǯ����....."); 
			} 
		
			qing();
		} 
		else
		if (ss=='4')
		{
			bk=false;
		}
	} 
	system("cls");
	sl("����Ҫȥɭ�����.....(�س�����)\n");sss=' ';while (sss!='\n'){sss=getchar();}
	sl("ɭ���ػ��ߣ��������������ɭ�������ε���\n");
	sl("���������������ǵĻ����ҿ��Ը���һ��������\n"); 
	sss=' ';while (sss!='\n'){sss=getchar();}
	x=1;y=26;
    kkk6(); 
	if (xue<=0)return ;
	
	system("cls");
	sl("ɭ���ػ��ߣ���Ҫʲô�����飿����\n1����ǿ���������ǿ�ĳ������ʩ����i��\n2����������ȭ(������������,ʩ����i)\n3����ȭ(����*3,���׼�30,ʩ����i)\n");		
	bk=true;
	while (bk)
	{
		cc=getch();
		if (cc=='1')
		{
			yji[2]=true;ji[2]=true;
			bk=false;
			sl("��õ��˼��ܣ���ǿ�����(�س�����)\n");
			sss=' ';while (sss!='\n'){sss=getchar();}
		}
		if (cc=='2')
		{
			yji[3]=true;ji[3]=true;
			bk=false;
			sl("��õ��˼��ܣ���������ȭ(�س�����)\n");
			sss=' ';while (sss!='\n'){sss=getchar();}
		}
		if (cc=='3')
		{
			yji[4]=true;ji[4]=true;
			bk=false;
			sl("��õ��˼��ܣ���ȭ(�س�����)\n");
			sss=' ';while (sss!='\n'){sss=getchar();}
		}
	} 
	system("cls");
	/*
	sl("Ҫ���ļ����𣿣���������������ʹ�ò����¼��ܣ�\n1,Ҫ\n2,������\n");
	bk=true;
	while (bk)
	{
		cc=getch();
		if (cc=='1')
		{
			gaiji();
			bk=false;
		}
		else
		if (cc=='2')
		{
			bk=false;
		}
	} */
	cc=0;
    system("cls");
	sl("ɭ���ػ��ߣ���˵���⸽����һ��С����ȥ������(�س�����)\n");sss=' ';while (sss!='\n'){sss=getchar();}
	sl("�㣺�ð�\n");sss=' ';while (sss!='\n'){sss=getchar();}
	sl("ɭ���ػ��ߣ����������ƺ��п��µ�boss�ڳ�û.....\n");
	printf("ps:С������һЩ�Ѻõ�NPC���ԶԻ�\n�Ի���ʽ��վ���������\n");
	if (ji[3]==true)sl("ps:��������ȭ���ͷŷ�����������Ҫʩ���ķ�����һ���ٰ�i\n"); 
	if (ji[2]==true)sl("ps:��ǿ�����Ҫ����ʹ��Ŷ���Ǻ�\n");
	sss=' ';while (sss!='\n'){sss=getchar();}
	x=1;y=26;
    kkk7(); 
	if (xue<=0)return ;
	x=1;y=26;
    kkk8(); 
	if (xue<=0)return ;
	if (zuobi)
	{
		system("cls");
		sl("����Ӯ����ʲô�˲���ģ����˲��˲�����\n");
	}
	else
	{
		system("cls");
		sl("������������ˣ��Ѿ�������ʤ��\n");
		sl("�����ո�ǿ���������ڽ���֮�У�Ҳ��һϯ֮��\n");
		sl("����Գ�ʦ�ˣ��һ����һ��ֻ���书�������˲���ӵ�е��ؼ�\n");
		sl("�ؼ���323992923���úü��ţ�ȥ��ð�������ȣ������õ�(��ʼ�µ�ð��TK�ɣ�)\n"); 
	}
}
int main()
{
	system("cls");
	 
	yc=70;
	srand(time(0));fa=100;
	for (int i=1;i<=1000;i++)guai[i].yan=rand()%100000;
	memset(ji,false,sizeof(ji));memset(yji,false,sizeof(yji));ji[1]=true;yji[1]=true;
	zhu();
	if (xue<=0&&zuobi){
		system("cls");
		sl("�µ�ð�գ�775839201\n");
	}
	system("pause");
	return 0;
}
