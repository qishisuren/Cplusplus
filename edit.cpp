#include "head.h"
//ɾ����ϵ��
int del(PER per[], int n)
{
	char Name[NAM_LEN];
	int i = 0, j, find = 0;
	cout << "��������ɾ����¼�е�����:";
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
		cout << "ɾ����";
	}
	else
		cout << "�����ڴ���ϵ��";
	return i;
}
//�޸���ϵ��
void change(PER per[], int n)
{
	int i, find = 0;
	char j;
	char Name[NAM_LEN];
	cout << "������Ҫ�޸ĵ���ϵ��������";
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
		cout << "������" << per[i].name << endl;
		cout << "�Ա�" << per[i].sex << endl;
		cout << "סַ��" << per[i].address << endl;
		cout << "�绰��" << per[i].tel_no << endl;
		cout << "�������䣺" << per[i].e_mail << endl;
		cout << "���" << per[i].group << endl;
		cout << "��������������" << endl;
		cout << "1.����      ��" << endl;
		cout << "2.�Ա�      ��" << endl;
		cout << "3.סַ      ��" << endl;
		cout << "4.��ϵ�绰  ��" << endl;
		cout << "5.E_MAIL    ��" << endl;
		cout << "6.���      ��" << endl;
		cout << "0.�˳�      ��" << endl;
		cout << "��������������" << endl;
	ONE:cout << "ѡ���޸��";
		cin >> j;
		cout << "___________" << endl;
		switch (j)
		{
		case '1':
			cout << "����������������";
			cin >> per[i].name;
			break;
		case '2':
			cout << "�����������Ա�";
			cin >> per[i].sex;
			break;
		case '3':
			cout << "����������סַ��";
			cin >> per[i].address;
			break;
		case '4':
			cout << "������������ϵ�绰��";
			cin >> per[i].tel_no;
			break;
		case '5':
			cout << "����������E_MAIL��";
			cin >> per[i].e_mail;
			break;
		case '6':
			cout << "�������������";
			cin >> per[i].group;
			break;
		case '0':
			break;
		default:
			cout << "�����������������";
			goto ONE;
		}
		cout << "�޸Ĳ�";
	}
	else
		cout << "�����ڴ���ϵ��";
}
