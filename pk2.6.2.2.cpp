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
	gotoxy(1,5);printf("李泽刚 编"); 
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
		if (xue+hu<=0) {printf("你输了\n");Sleep(2000);break;}
		ty=clock();
		if (yc-(ty-tx)>0)Sleep(yc-(ty-tx));
	}	
}
void kkk3()
{
	system("cls");
	memset(di,0,sizeof(di));
	hehe(0,27,79,27);
	gotoxy(1,5);printf("李泽刚 编"); 
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
		
		if (xue+hu<=0) {printf("你输了\n");Sleep(2000);break;}
		ty=clock();
		if (yc-(ty-tx)>0)Sleep(yc-(ty-tx));
	}
}
void kkkcs()
{
	system("cls");
	memset(di,0,sizeof(di));
	hehe(0,27,79,27);
	gotoxy(1,5);printf("李泽刚 编"); 
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
		
		if (xue+hu<=0) {printf("你输了\n");Sleep(2000);break;}
		ty=clock();
		if (yc-(ty-tx)>0)Sleep(yc-(ty-tx));
	}
}
void kkk4()
{
	system("cls");
	memset(di,0,sizeof(di));
	hehe(0,27,79,27);
	gotoxy(1,5);printf("李泽刚 编"); 
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
		if (xue+hu<=0) {printf("你输了\n");Sleep(2000);break;}
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
	gotoxy(1,5);printf("李泽刚 编"); 
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
		if (xue+hu<=0) {printf("你输了\n");Sleep(2000);break;}
		ty=clock();
		if (yc-(ty-tx)>0)Sleep(yc-(ty-tx));
	}	
}
void kkk5()
{
	system("cls");
	memset(di,0,sizeof(di));
	hehe(0,27,79,27);
	gotoxy(1,5);printf("李泽刚 编"); 
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
		if (xue+hu<=0) {printf("你输了\n");Sleep(2000);break;}
		ty=clock();
		if (yc-(ty-tx)>0)Sleep(yc-(ty-tx));
	}
}
void kkk6()
{
	system("cls");
	memset(di,0,sizeof(di));
	hehe(0,27,79,27);
	gotoxy(1,5);printf("李泽刚 编"); 
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
		if (xue+hu<=0) {printf("你输了\n");Sleep(2000);break;}
		ty=clock();
		if (yc-(ty-tx)>0)Sleep(yc-(ty-tx));
	}
}
void kkk7()
{
	system("cls");
	memset(di,0,sizeof(di));
	hehe(0,27,79,27);
	gotoxy(1,5);printf("李泽刚 编"); 
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
		if (xue<=0) {printf("你输了\n");Sleep(2000);break;}
		if (x==12  && y==26 && tk%10==0 && cheng)
		{
			gotoxy(0,35);qing2(); 
			gotoxy(1,35);
			sl("城门守护者：想进去就交50元吧(回车继续)\n");
			sss=' ';while (sss!='\n'){sss=getchar();}
			
			sl("1,好吧\n2,我自己找路进去\n");
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
						gotoxy(1,38);sl("钱不够.....(回车继续)\n");
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
			sl("徐国申老奶奶：听说你去了森林，很勇敢\n");
			sl("徐申国老奶奶：不如给你300元作为奖励吧\n");
			sl("徐国申老奶奶：你可要好好学习，天天向上，不要辜负老奶奶的期望啊\n(回车继续)");sss=' ';while (sss!='\n'){sss=getchar();}
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
			printf("小贩：要买点食物吗\n我有%d个烧饼(加血)\n%d个花生(加攻击)\n%d个蛋糕(???)(回车继续)\n",fan1,fan2,fan3);
			sss=' ';while (sss!='\n'){sss=getchar();}
			ss=getch();
			printf("1,烧饼(200元)\n2，花生(200元)\n3，蛋糕（300元）\n");
			ss=getch();
			if (ss=='1') 
			{
				if (qian>=200 && fan1>0)
				{
					qian-=200;
					fan1-=1;
					xue+=200;
					sl("血+200\n"); 
				} 
				else
				{
					sl("钱或储量不够\n"); 
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
					sl("攻+10\n"); 
				} 
				else
				{
					sl("钱或储量不够\n"); 
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
					sl("拉肚子，血-100(呵呵)，攻+25\n"); 
				} 
				else
				{
					sl("钱或储量不够\n"); 
				}
			}
			sl("欢迎再来！！！(回车继续)\n"); 
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
	gotoxy(1,5);printf("李泽刚 编"); 
	
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
		gotoxy(50,5);printf("BOSS血量：%d     ",guai[1].xue);
		if (x==79 && g==0) break;
		if (xue+hu<=0) {printf("你输了\n");Sleep(2000);break;}
		ty=clock();
		if (yc-(ty-tx)>0)Sleep(yc-(ty-tx));
	}
}

void gaiji()
{
	system("cls");
	printf("如果你将两个按键一样的技能启用，其中一个就会失效\n");
	for (int i=1;i<=4;i++)
	{
		if (i==1 && yji[1])
		{
			printf("1,冲击波(按k)："); 
			if (ji[1]) printf("已启用...\n");
			else printf("未启用...\n");
		}	
		if (i==2 && yji[2])
		{
			printf("2,加强冲击波(按I)："); 
			if (ji[2]) printf("已启用...\n");
			else printf("未启用...\n");
		}
		if (i==3 && yji[3])
		{
			printf("3,天马流星拳(按I)："); 
			if (ji[3]) printf("已启用...\n");
			else printf("未启用...\n");
		}
		if (i==4 && yji[4])
		{
			printf("4,醉拳(按I)："); 
			if (ji[4]) printf("已启用...\n");
			else printf("未启用...\n");
		}
	}
	sl("你要更改那一个技能的状态？？？（已启用变未启用，反之一样）\n");
	scanf("%d",&ss);if (ss<0 || ss>1000) return ;
	if (yji[ss])
	{
		if (ji[ss])ji[ss]=false;
		else ji[ss]=true;
		sl("已更改\n");
	}
	else
	{
		sl("未拥有此技能\n"); 
	}
	printf("1，再改变技能一次\n其他键，退出\n");
	ss=getch();
	if (ss=='1')gaiji(); 
	system("cls");
}

void zhu()
{
	system("cls");
	
	
	ju=5;
	sl("在古老的大森林里....\n");
	sl("冒险者瑞兹：森林里有好多怪物，你能帮我消灭他吗？？？我会给你报酬的。\n");
	sl("冒险者瑞兹：给你一把短剑吧（距离5），去消灭这些怪物。（输入4新手教程）\n");
	sl("1,小队怪物(+350元)\n2,叠罗汉的怪物(+400元)\n3,配合默契的怪物(+500元)\n4,我还不会操作呢\n5,还是算了吧\n6,我想对你说几句话(通关后再来)\n");
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
			sl("冒险者：你真垃圾，竟然选择了最弱的怪物，不过这三百五十块还是给你吧(回车继续)\n"); qian+=350; 
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
			sl("冒险者：还不错，击败了叠罗汉的怪物，这四百块作为你的报酬吧(回车继续)\n"); qian+=400; 
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
			sl("冒险者：你真厉害，竟然击败了最强的怪物，这五百块作为你的报酬吧(回车继续)\n"); qian+=500; 
			sss=' ';while (sss!='\n'){sss=getchar();}
		}
		if (ss=='4') 
		{
			gotoxy(1,9); 
			sl("冒险者：W跳跃，A,D键行走，S键在空中迅速下跌；\nJ,L攻击（J向左，L向右），按k后按J,L远攻（需要法力）\n输出一大串乱码时按回车可以继续游戏\n");
			sl("ps:若一次性按太多次回车可能会导致卡bug哦~~(回车继续)"); 
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
			sl("冒险者：好吧，下次再见(回车继续)\n");
			bk=false;
			sss=' ';while (sss!='\n'){sss=getchar();}
		} 
		else
		if (ss=='6'){
			gotoxy(1,9);sl("冒险者：先输入那串数字吧：\n");
			int shuaaa;scanf("%d",&shuaaa);
			if (shuaaa==323992923){
				sl("作者qq：1339097071，欢迎提出bug（虽然没有奖励）\n");
				sl("你现在可以作弊\n");
				sl("拥有所有技能，无限钱，无限血(回车继续)\n");
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
				sl("你输错了，先通关再来吧(回车继续)\n");
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
		sl("要更改技能吗？？？\n1,要\n2,不用了\n");
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
	sl("你：在森林也有一段时间了，该回去城镇了.....\n");
	sl("1,回城镇圣光之城\n2,回城镇玛雅之光\n");
	printf("护甲的作用：当你存在护甲并受到伤害时，这些伤害会扣到护甲上。\n护甲会自动衰减。\n");
	
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
	printf("回车继续...."); 
	sss=' ';while (sss!='\n'){sss=getchar();}
	system("cls");
	bk=true;
	while (bk)
	{
		gotoxy(0,1); 
		int kbk; 
		
		sl("“终于回到城镇了”，你说。\n"); 
		sl("我现在还有");printf("%d",qian);sl("元钱   ");printf("%d",xue);sl("滴血   ");printf("%d",li);sl("点攻击\n"); 
		gotoxy(0,3); 
		 
		printf("1，去医院\n2，去武器铺\n3，去训练场\n4，走出城镇\n");
		gotoxy(0,7); 
		ss=getch();
		if (ss=='1')
		{
			sl("花费50元+45血量,你要治疗几次？？？（不治疗输0,输入数字后要按回车）");
			scanf("%d",&kbk); 
			if (kbk*50<=qian){qian-=kbk*50;xue+=45*kbk;gotoxy(0,7);sl("增加了血量");} 
			else 
			{
				gotoxy(0,7);sl("钱不够....."); 
			} 
			qing();
		} 
		else
		if (ss=='2')
		{
			sl("1.铁剑(距8，99元)\n2，长剑（距12，199元）\n3，寒光铁剑（距6，450元，攻击时放出寒光,很好的一把剑）\n4,铁甲(自动将护甲增加到10，200元)\n5,法杖（法力回复速度增加一倍，250元）\n(不买输入0,输入数字后要按回车)");
			scanf("%d",&kbk); 
			if (kbk==1)
			{
				if (qian>=100)
				{
					gotoxy(0,7);sl("获得：铁剑");
					ju=8;qian-=99;
				} 
				else
				{
					gotoxy(0,7);sl("钱不够....."); 
				}
			}
			else if (kbk==2)
			{
				if (qian>=200)
				{
					gotoxy(0,7);sl("获得：长剑");
					ju=12;qian-=199;
				} 
				else
				{
					gotoxy(0,7);sl("钱不够....."); 
				}
			}
			else if (kbk==3)
			{
				if (qian>=450)
				{
					gotoxy(0,7);sl("获得：寒光铁剑");
					ju=6;qian-=450;jian=2;
				} 
				else
				{
					gotoxy(0,7);sl("钱不够....."); 
				}
			}
			else if (kbk==4)
			{
				if (qian>=200)
				{
					gotoxy(0,7);sl("获得：铁甲");
					qian-=200;hujia=10;hujiah=2;
				} 
				else
				{
					gotoxy(0,7);sl("钱不够....."); 
				}
			}
			else if (kbk==5)
			{
				if (qian>=250)
				{
					gotoxy(0,7);sl("获得：法杖");
					qian-=250;huifa=2;
				} 
				else
				{
					gotoxy(0,7);sl("钱不够....."); 
				}
			}
			sss=' ';while (sss!='\n'){sss=getchar();}
			qing();
		} 
		else 
		if (ss=='3')
		{
			sl("花费50元+2攻击,你要增加几次？？？（不增加输0,输入数字后要按回车）");
			scanf("%d",&kbk); 
			if (kbk*50<=qian){qian-=kbk*50;li+=2*kbk;gotoxy(0,7);sl("增加了攻击");} 
			else 
			{
				gotoxy(0,7);sl("钱不够....."); 
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
	sl("必须要去森林深处了.....(回车继续)\n");sss=' ';while (sss!='\n'){sss=getchar();}
	sl("森林守护者：最近，许多怪物在森林中心游荡。\n");
	sl("如果你可以消灭他们的话，我可以给你一本技能书\n"); 
	sss=' ';while (sss!='\n'){sss=getchar();}
	x=1;y=26;
    kkk6(); 
	if (xue<=0)return ;
	
	system("cls");
	sl("森林守护者：你要什么技能书？？？\n1，加强冲击波（加强的冲击波，施法按i）\n2，天马流星拳(持续的流星雨,施法按i)\n3，醉拳(攻击*3,护甲加30,施法按i)\n");		
	bk=true;
	while (bk)
	{
		cc=getch();
		if (cc=='1')
		{
			yji[2]=true;ji[2]=true;
			bk=false;
			sl("你得到了技能，加强冲击波(回车继续)\n");
			sss=' ';while (sss!='\n'){sss=getchar();}
		}
		if (cc=='2')
		{
			yji[3]=true;ji[3]=true;
			bk=false;
			sl("你得到了技能，天马流星拳(回车继续)\n");
			sss=' ';while (sss!='\n'){sss=getchar();}
		}
		if (cc=='3')
		{
			yji[4]=true;ji[4]=true;
			bk=false;
			sl("你得到了技能，醉拳(回车继续)\n");
			sss=' ';while (sss!='\n'){sss=getchar();}
		}
	} 
	system("cls");
	/*
	sl("要更改技能吗？？？（若不更改则使用不了新技能）\n1,要\n2,不用了\n");
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
	sl("森林守护者：听说在这附近有一个小镇，你去看看吧(回车继续)\n");sss=' ';while (sss!='\n'){sss=getchar();}
	sl("你：好吧\n");sss=' ';while (sss!='\n'){sss=getchar();}
	sl("森林守护者：不过那里似乎有可怕的boss在出没.....\n");
	printf("ps:小镇里有一些友好的NPC可以对话\n对话方式是站在他的左边\n");
	if (ji[3]==true)sl("ps:天马流星拳的释放方法：向你想要施法的方向走一步再按i\n"); 
	if (ji[2]==true)sl("ps:加强冲击波要谨慎使用哦，呵呵\n");
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
		sl("作弊赢了有什么了不起的，输了才了不起呢\n");
	}
	else
	{
		system("cls");
		sl("能来到这里的人，已经无往不胜了\n");
		sl("你武艺高强，即便是在江湖之中，也有一席之地\n");
		sl("你可以出师了，我会给你一本只有武功绝世的人才能拥有的秘籍\n");
		sl("秘籍：323992923，好好记着，去找冒险者瑞兹，会有用的(开始新的冒险TK吧！)\n"); 
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
		sl("新的冒险：775839201\n");
	}
	system("pause");
	return 0;
}
