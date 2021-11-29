#include "head.h"
//添加联系人
void add(PER per[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "姓名：";
		cin >> per[i].name;
		cout << "性别：";
		cin >> per[i].sex;
		cout << "住址：";
		cin >> per[i].address;
		cout << "联系电话：";
		cin >> per[i].tel_no;
		cout << "电子邮箱：";
		cin >> per[i].e_mail;
		cout << "组别：";
		cin >> per[i].group;
	}
}
