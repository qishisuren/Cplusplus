#include "head.h"
//�����ϵ��
void add(PER per[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "������";
		cin >> per[i].name;
		cout << "�Ա�";
		cin >> per[i].sex;
		cout << "סַ��";
		cin >> per[i].address;
		cout << "��ϵ�绰��";
		cin >> per[i].tel_no;
		cout << "�������䣺";
		cin >> per[i].e_mail;
		cout << "���";
		cin >> per[i].group;
	}
}
