#include<iostream>
#include"windows.h"
#include"conio.h"
using namespace std;
int main()
{
	FILE *fp;
	int num(1),xmax,ymax,x0,y0,xm,ym;
	double xf,yf;
	POINT  pt;   
	fp=fopen("Point.txt","w");
	if(fp==NULL)
	{
		cout<<"can't open file\n";
		exit(1);
	}
	cout<<"1.������x�����ֵ��y�����ֵ"<<endl;
	cin>>xmax>>ymax;
	cout<<"2.ȷ��ԭ��λ�ã����ո����¼ԭ������;\n";
	getch();
	GetCursorPos(&pt); 
	x0=pt.x;
	y0=pt.y;
	cout<<"Finished...\n3.ȷ��x�����ֵ��λ�ã����ո����¼�õ�����;\n";
	getch();
	GetCursorPos(&pt); 
	xm=pt.x;
	cout<<"Finished...\n4.ȷ��y�����ֵ��λ�ã����ո����¼�õ�����;\n";
	getch();
	GetCursorPos(&pt); 
	ym=pt.y;
	cout<<"Finished...\n�����������:"<<endl;
	getch();
	system("cls");
	cout<<"�밴�ո��¼������:"<<endl;
	while(1)
	{
		getch();
		GetCursorPos(&pt); 
		xf=(double)(pt.x-x0)*xmax/(xm-x0);
		yf=(double)(pt.y-y0)*ymax/(ym-y0);
		printf("%d.(%.2lf,%.2lf)\n",num,xf,yf);
		fprintf(fp,"%.2lf\t%.2lf\n",xf,yf);
		num++;
	}
	fclose(fp);
	system("pause");
	return 0;
}
