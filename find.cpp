#include"head.h"
//按姓名查询联系人
void find1(PER per[], int n)
{
	int i, find = 0;
	char Name[NAM_LEN];
	cout << "输入要查询联系人的姓名：";
	cin >> Name;
	for (i = 0; i < n; i++)
	{
		if (strcmp(per[i].name, Name) == 0)
		{
			find = 1;
			break;
		}
	}
	if (find)
	{
		cout << "姓名：" << per[i].name << endl;
		cout << "性别：" << per[i].sex << endl;
		cout << "住址：" << per[i].address << endl;
		cout << "电话：" << per[i].tel_no << endl;
		cout << "电子邮箱：" << per[i].e_mail << endl;
		cout << "组别：" << per[i].group << endl;
	}
	else
		cout << "不存在此联系人";
}
//按手机号码查找联系人
void find2(PER per[], int n)
{
	int i, find = 0;
	char number[TEL_LEN];
	cout << "输入要查询联系人的电话：";
	cin >> number;
	for (i = 0; i < n; i++)
	{
		if (strcmp(per[i].tel_no, number) == 0)
		{
			find = 1;
			break;
		}
	}
	if (find)
	{
		cout << "姓名：" << per[i].name << endl;
		cout << "性别：" << per[i].sex << endl;
		cout << "住址：" << per[i].address << endl;
		cout << "电话：" << per[i].tel_no << endl;
		cout << "电子邮箱：" << per[i].e_mail << endl;
		cout << "组别：" << per[i].group << endl;
	}
	else
		cout << "不存在此联系人";
}
//按姓氏模糊查询联系人
void find3(PER per[], int n)
{
	int i, find = 0;
	char firstname[NAM_LEN];
	cout << "输入要查询联系人的姓氏：";
	cin >> firstname;
	cout << "姓名      性别      住址           电话          电子邮箱               组别" << endl;
	for (i = 0; i < n; i++)
	{
		char s1[3];
		memcpy(s1, per[i].name, 2); //把per数组的前两个字符（即姓名第一个字）传递给mwmcpy
		s1[2] = '\0';
		if (strcmp(s1, firstname) == 0)
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
