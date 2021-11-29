#include "head.h"
//删除联系人
int del(PER per[], int n)
{
	char Name[NAM_LEN];
	int i = 0, j, find = 0;
	cout << "请输入想删除记录中的名字:";
	cin >> Name;
	for (i = 0; i < n; i++)
	{
		if (strcmp(per[i].name, Name) == 0)
			find = 1;
		if (find == 1)
			break;
	}
	if (find == 1)
	{
		for (j = i; j < n - 1; j++)
		{
			per[j] = per[j + 1];
		}
		cout << "删除并";
	}
	else
		cout << "不存在此联系人";
	return i;
}
//修改联系人
void change(PER per[], int n)
{
	int i, find = 0;
	char j;
	char Name[NAM_LEN];
	cout << "请输入要修改的联系人姓名：";
	cin >> Name;
	for (i = 0; i < n; i++)
	{
		if (strcmp(per[i].name, Name) == 0)
			find = 1;
		if (find == 1)
			break;
	}
	if (find == 1)
	{
		system("cls");
		cout << "姓名：" << per[i].name << endl;
		cout << "性别：" << per[i].sex << endl;
		cout << "住址：" << per[i].address << endl;
		cout << "电话：" << per[i].tel_no << endl;
		cout << "电子邮箱：" << per[i].e_mail << endl;
		cout << "组别：" << per[i].group << endl;
		cout << "※※※※※※※" << endl;
		cout << "1.姓名      ※" << endl;
		cout << "2.性别      ※" << endl;
		cout << "3.住址      ※" << endl;
		cout << "4.联系电话  ※" << endl;
		cout << "5.E_MAIL    ※" << endl;
		cout << "6.组别      ※" << endl;
		cout << "0.退出      ※" << endl;
		cout << "※※※※※※※" << endl;
	ONE:cout << "选择修改项：";
		cin >> j;
		cout << "___________" << endl;
		switch (j)
		{
		case '1':
			cout << "请重新输入姓名：";
			cin >> per[i].name;
			break;
		case '2':
			cout << "请重新输入性别：";
			cin >> per[i].sex;
			break;
		case '3':
			cout << "请重新输入住址：";
			cin >> per[i].address;
			break;
		case '4':
			cout << "请重新输入联系电话：";
			cin >> per[i].tel_no;
			break;
		case '5':
			cout << "请重新输入E_MAIL：";
			cin >> per[i].e_mail;
			break;
		case '6':
			cout << "请重新输入组别：";
			cin >> per[i].group;
			break;
		case '0':
			break;
		default:
			cout << "输入错误！请重新输入";
			goto ONE;
		}
		cout << "修改并";
	}
	else
		cout << "不存在此联系人";
}
