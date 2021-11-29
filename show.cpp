#include"head.h"
//显示同一组别联系人
void show1(PER per[], int n)
{
	int i, find = 0;
	char GROUP[GROUP_LEN];
	cout << "输入要查询的组别：";
	cin >> GROUP;
	cout << "姓名      性别      住址           电话          电子邮箱               组别" << endl;
	for (i = 0; i < n; i++)
	{
		if (strcmp(per[i].group, GROUP) == 0)
		{
			cout << setiosflags(ios::left) << setw(NAM_LEN) << per[i].name;
			cout << setiosflags(ios::left) << setw(SEX_LEN) << per[i].sex;
			cout << setiosflags(ios::left) << setw(ADD_LEN) << per[i].address;
			cout << setiosflags(ios::left) << setw(TEL_LEN) << per[i].tel_no;
			cout << setiosflags(ios::left) << setw(MAIL_LEN) << per[i].e_mail;
			cout << setiosflags(ios::left) << setw(GROUP_LEN) << per[i].group << endl;
		}
	}
}
//按性别显示联系人
void show2(PER per[], int n)
{
	int i, find = 0;
	char SEX[SEX_LEN];
	cout << "输入要查询的性别：";
	cin >> SEX;
	cout << "姓名      性别      住址           电话          电子邮箱               组别" << endl;
	for (i = 0; i < n; i++)
	{
		if (strcmp(per[i].sex, SEX) == 0)
		{
			cout << setiosflags(ios::left) << setw(NAM_LEN) << per[i].name;
			cout << setiosflags(ios::left) << setw(SEX_LEN) << per[i].sex;
			cout << setiosflags(ios::left) << setw(ADD_LEN) << per[i].address;
			cout << setiosflags(ios::left) << setw(TEL_LEN) << per[i].tel_no;
			cout << setiosflags(ios::left) << setw(MAIL_LEN) << per[i].e_mail;
			cout << setiosflags(ios::left) << setw(GROUP_LEN) << per[i].group << endl;
		}
	}

}
//显示所有联系人
void show3(PER per[], int n)
{
	cout << "姓名    性别   住址   电话  电子邮箱  组别" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << setw(NAM_LEN) << per[i].name;
		cout << setw(SEX_LEN) << per[i].sex;
		cout << setw(ADD_LEN) << per[i].address;
		cout << setw(TEL_LEN) << per[i].tel_no;
		cout << setw(MAIL_LEN) << per[i].e_mail;
		cout << setw(GROUP_LEN) << per[i].group << endl;
	}
}
