#include<map>
#include<cmath>
#include<stack>
#include<queue>
#include<vector>
#include<cstdio>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<ctime>
#include<cstdlib>
#include<unistd.h>
#include<fstream>
#define ll long long
#define ull unsigned long long
#define INF 0x7fffffff
#define mod 1000000007
#define bug(x) cout<<"Bug "<<(x)<<endl
#define el cout<<endl
using namespace std;
inline int read()
{
	int s=0,w=1;
	char ch=getchar();
	while(ch<'0' || ch>'9'){if(ch=='-')w=-1;ch=getchar();}
	while(ch>='0' && ch<='9') s=s*10+ch-'0',ch=getchar();
	return s*w;
}
inline ll lread()
{
	ll s=0,w=1;
	char ch=getchar();
	while(ch<'0' || ch>'9'){if(ch=='-')w=-1;ch=getchar();}
	while(ch>='0' && ch<='9') s=s*10+ch-'0',ch=getchar();
	return s*w;
}
char changeb(char s)
{
	return (s-'a'+'A');
}
void init()
{
	system("update.exe");
}
const int N=1e3+10;
int n;
string word[N],cx[N],zw[N];
int jieguo[N];
int cwgs=0;
int t[N];
int main()
{
//	freopen("words.txt","r",stdin);
//	freopen(".out","w",stdout);
//	fstream file;
//	file.open("words.txt");
	system("title M Words Book ���ʱ� v1.3.4   By Makerlife");
	cout<<"���ڼ�����......"<<endl;
	init();
	memset(jieguo,1,sizeof(jieguo));
	system("cls");
	cout<<"��ӭʹ�� M Words Book ���ʱ�\n�汾 v1.3.4"<<endl;
	cout<<"�������� Makerlife ����"<<endl;
//	cout<<"������ʹ�� update.exe ���и���"<<endl;
//	cout<<"https://mtools.makerlife.tk/M-Words-Book.zip"<<endl;
	cout<<"����뵥�ʣ������ʽ��� Read Me.md����"<<endl;
	srand((int)time(0));
//	file>>n;
	n=read();
	int tn=n;
	if(n<4)
	{
		cout<<"����: ������������С�� 4\n������: 1"<<endl;
		cout<<"�밴�س��˳�......"<<endl;
		char ch=getchar();
		return 0;
	}
//	fstream file;
//	file.open("words.txt");
	for(int i=2;i<=3*n+1;i++)
	{
		if(i%3==2) getline(cin,word[(i+1)/3]);/*file>>word[(i+1)/3];cin>>word[(i+1)/3];*/
		if(i%3==0)
		{
			string tmpcx;
			getline(cin,tmpcx);
			if(!((tmpcx[0]>='a' && tmpcx[0]<='z') || (tmpcx[0]>='A' && tmpcx[0]<='Z')))
			{
				cx[i/3]=' ';
				zw[i/3]=tmpcx;
				i++;
				continue;
			}
			else
			{
				cx[i/3]=tmpcx;
			}
//			getline(cin,cx[i/3]);/*file>>word[i/3];cin>>cx[i/3];*/
		}
		if(i%3==1) getline(cin,zw[(i-1)/3]);/*file>>word[(i-1)/3];cin>>zw[(i-1)/3];*/
	}
//	fclose;
	el;
	cout<<"����ɹ�"<<endl;//���뵥�ʱ�
	usleep(500000);
	system("cls");
	cout<<"������Ҫ���еĵ�������: ";
	int m;
	m=read();
	if(m>n)
	{
		cout<<"����: ��Ŀ�������ܴ��ڵ�������\n������: 2"<<endl;
		cout<<"�밴�س��˳�......"<<endl;
		char ch=getchar();
		return 0;
	}
	system("cls");
	int memsetn=rand()%tn+1;
	for(int i=0;i<=n+1;i++)
	{
		t[i]=memsetn;
	}
//	cout<<t[1]<<endl;
//	t[0]=rand()%n+1;

	cout<<"���� 1 Ϊѡ���Ĵ��壬��������Ϊѡ��Ӣ�ﵥ��: ";
	int tmppp=read();
	system("cls");
	if(tmppp==1)
	{
		for(int i=0;i<m;)//����
		{
			cout<<"�Ѵ�� "<<i<<"/"<<m<<" ������"<<endl;
	        cout<<"��ѡ�񵥴� ";
	//		t[i]=rand()%n+1;
			while(1)//ȷ����֮ǰ����Ŀ���ظ�
			{
				int f=0;
				for(int j=0;j<i;j++)
				{
					if(t[i]==t[j])
					{
						f=1;
						break;
					}
				}
				if(f==0) break;
				t[i]=rand()%n+1;
			}
			cout<<word[t[i]];
			int t1,t2,t3,t4;
			int sj=rand()%4+1;
			t1=rand()%n+1;//����ABCDѡ��
			t2=rand()%n+1;
			t3=rand()%n+1;
			t4=rand()%n+1;
			if(sj==1)//ȷ��ѡ��ظ�
			{
				t1=t[i];
				while(t1==t2 || t1==t3 || t1==t4 || t2==t3 || t2==t4 || t3==t4)
				{
					t2=rand()%n+1;
					t3=rand()%n+1;
					t4=rand()%n+1;
	//
	//				bug(t1);
	//				bug(t2);
	//				bug(t3);
	//				bug(t4);
	//				el;
	//
				}
			}
			if(sj==2)
			{
				t2=t[i];
				while(t1==t2 || t1==t3 || t1==t4 || t2==t3 || t2==t4 || t3==t4)
				{
					t1=rand()%n+1;
					t3=rand()%n+1;
					t4=rand()%n+1;
	//
	//				bug(t1);
	//				bug(t2);
	//				bug(t3);
	//				bug(t4);
	//				el;

				}
			}
			if(sj==3)
			{
				t3=t[i];
				while(t1==t2 || t1==t3 || t1==t4 || t2==t3 || t2==t4 || t3==t4)
				{
					t1=rand()%n+1;
					t2=rand()%n+1;
					t4=rand()%n+1;
	//
	//				bug(t1);
	//				bug(t2);
	//				bug(t3);
	//				bug(t4);
	//				el;

				}
			}
			if(sj==4)
			{
				t4=t[i];
				while(t1==t2 || t1==t3 || t1==t4 || t2==t3 || t2==t4 || t3==t4)
				{
					t2=rand()%n+1;
					t3=rand()%n+1;
					t1=rand()%n+1;
	//
	//				bug(t1);
	//				bug(t2);
	//				bug(t3);
	//				bug(t4);
	//				el;

				}
			}
			cout<<" �����壨�������д��ĸ����"<<endl;
			el;
			if(cx[t1]==" ") cout<<"A "<<zw[t1]<<endl;
			else cout<<"A "<<cx[t1]<<" "<<zw[t1]<<endl;
			if(cx[t2]==" ") cout<<"B "<<zw[t2]<<endl;
			else cout<<"B "<<cx[t2]<<" "<<zw[t2]<<endl;
			if(cx[t3]==" ") cout<<"C "<<zw[t3]<<endl;
			else cout<<"C "<<cx[t3]<<" "<<zw[t3]<<endl;
			if(cx[t4]==" ") cout<<"D "<<zw[t4]<<endl;
			else cout<<"D "<<cx[t4]<<" "<<zw[t4]<<endl;
	//		cout<<"C "<<cx[t3]<<" "<<zw[t3]<<endl;
	//		cout<<"D "<<cx[t4]<<" "<<zw[t4]<<endl;

	//		cout<<char(sj+'A'-1)<<endl;

			char input;
			cin>>input;//����ѡ��
			if('a'<=input && input<='z')
			{
				input=changeb(input);
			}
			if(!('A'<=input && input<='D'))
			{
				cout<<"����: ���벻�Ϸ�\n������: 3"<<endl;
				jieguo[i]=0;
				system("pause");
				system("cls");
				continue;
			}
			if(input==char(sj+'A'-1))
			{
				cout<<"�ش���ȷ��"<<endl;
				i++;
				if(jieguo[i]!=0) jieguo[i]=1;
				system("TIMEOUT /T 1");
			}
			else
			{
				cout<<"�ش����"<<endl;
				cout<<word[t[i]]<<" "<<cx[t[i]]<<" "<<zw[t[i]]<<endl;
				jieguo[i]=0;
				system("pause");
			}
			system("cls");
		}
		for(int i=0;i<m;i++)
		{
			if(jieguo[i]==0)
			{
				cwgs++;
			}
		}
		if(cwgs!=0)
		{
			cout<<"���� "<<cwgs<<" �����ʻ���Ҫ��ǿ���䣺\n\n";
			for(int i=0;i<m;i++)
			{
				if(jieguo[i]==0)
				{
					cout<<word[t[i]]<<" "<<cx[t[i]]<<" "<<zw[t[i]]<<endl;
				}
			}
			cout<<"\n\n";
		}
		if(cwgs!=m)
		{
			cout<<"���� "<<m-cwgs<<" ���������յĲ���\n\n";
			for(int i=0;i<m;i++)
			{
				if(jieguo[i]!=0)
				{
					cout<<word[t[i]]<<" "<<cx[t[i]]<<" "<<zw[t[i]]<<endl;
				}
			}
			cout<<"\n\n";
		}
		cout<<"�밴�س��˳�......"<<endl;
		char ch=getchar();
		ch=getchar();
		return 0;
	}
	else
	{
		for(int i=0;i<m;)//����
		{
			cout<<"�Ѵ�� "<<i<<"/"<<m<<" ������"<<endl;
	        cout<<"��ѡ������Ϊ ";
			while(1)//ȷ����֮ǰ����Ŀ���ظ�
			{
				int f=0;
				for(int j=0;j<i;j++)
				{
					if(t[i]==t[j])
					{
						f=1;
						break;
					}
				}
				if(f==0) break;
				t[i]=rand()%n+1;
			}
			cout<<zw[t[i]];
			int t1,t2,t3,t4;
			int sj=rand()%4+1;
			t1=rand()%n+1;//����ABCDѡ��
			t2=rand()%n+1;
			t3=rand()%n+1;
			t4=rand()%n+1;
			if(sj==1)//ȷ��ѡ��ظ�
			{
				t1=t[i];
				while(t1==t2 || t1==t3 || t1==t4 || t2==t3 || t2==t4 || t3==t4)
				{
					t2=rand()%n+1;
					t3=rand()%n+1;
					t4=rand()%n+1;
	//
	//				bug(t1);
	//				bug(t2);
	//				bug(t3);
	//				bug(t4);
	//				el;
	//
				}
			}
			if(sj==2)
			{
				t2=t[i];
				while(t1==t2 || t1==t3 || t1==t4 || t2==t3 || t2==t4 || t3==t4)
				{
					t1=rand()%n+1;
					t3=rand()%n+1;
					t4=rand()%n+1;
				}
			}
			if(sj==3)
			{
				t3=t[i];
				while(t1==t2 || t1==t3 || t1==t4 || t2==t3 || t2==t4 || t3==t4)
				{
					t1=rand()%n+1;
					t2=rand()%n+1;
					t4=rand()%n+1;
				}
			}
			if(sj==4)
			{
				t4=t[i];
				while(t1==t2 || t1==t3 || t1==t4 || t2==t3 || t2==t4 || t3==t4)
				{
					t2=rand()%n+1;
					t3=rand()%n+1;
					t1=rand()%n+1;
				}
			}
			cout<<" �ĵ��ʣ��������д��ĸ����"<<endl;
			el;
			if(cx[t1]==" ") cout<<"A "<<word[t1]<<endl;
			else cout<<"A "<<word[t1]<<" "<<cx[t1]<<endl;
			if(cx[t2]==" ") cout<<"B "<<word[t2]<<endl;
			else cout<<"B "<<word[t2]<<" "<<cx[t2]<<endl;
			if(cx[t3]==" ") cout<<"C "<<word[t3]<<endl;
			else cout<<"C "<<word[t3]<<" "<<cx[t3]<<endl;
			if(cx[t4]==" ") cout<<"D "<<word[t4]<<endl;
			else cout<<"D "<<word[t4]<<" "<<cx[t4]<<endl;
	//		cout<<"C "<<cx[t3]<<" "<<zw[t3]<<endl;
	//		cout<<"D "<<cx[t4]<<" "<<zw[t4]<<endl;

	//		cout<<char(sj+'A'-1)<<endl;

			char input;
			cin>>input;//����ѡ��
			if('a'<=input && input<='z')
			{
				input=changeb(input);
			}
			if(!('A'<=input && input<='D'))
			{
				cout<<"����: ���벻�Ϸ�\n������: 3"<<endl;
				jieguo[i]=0;
				system("pause");
				system("cls");
				continue;
			}
			if(input==char(sj+'A'-1))
			{
				cout<<"�ش���ȷ��"<<endl;
				i++;
				if(jieguo[i]!=0) jieguo[i]=1;
				system("TIMEOUT /T 1");
			}
			else
			{
				cout<<"�ش����"<<endl;
				cout<<word[t[i]]<<" "<<cx[t[i]]<<" "<<zw[t[i]]<<endl;
				jieguo[i]=0;
				system("pause");
			}
			system("cls");
		}
		for(int i=0;i<m;i++)
		{
			if(jieguo[i]==0)
			{
				cwgs++;
			}
		}
		if(cwgs!=0)
		{
			cout<<"���� "<<cwgs<<" �����ʻ���Ҫ��ǿ���䣺\n\n";
			for(int i=0;i<m;i++)
			{
				if(jieguo[i]==0)
				{
					cout<<word[t[i]]<<" "<<cx[t[i]]<<" "<<zw[t[i]]<<endl;
				}
			}
			cout<<"\n\n";
		}
		if(cwgs!=m)
		{
			cout<<"���� "<<m-cwgs<<" ���������յĲ���\n\n";
			for(int i=0;i<m;i++)
			{
				if(jieguo[i]!=0)
				{
					cout<<word[t[i]]<<" "<<cx[t[i]]<<" "<<zw[t[i]]<<endl;
				}
			}
			cout<<"\n\n";
		}
		cout<<"�밴�س��˳�......"<<endl;
		char ch=getchar();
		ch=getchar();
		return 0;
	}
}

