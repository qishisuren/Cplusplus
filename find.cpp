#include"head.h"
//��������ѯ��ϵ��
void find1(PER per[], int n)
{
	int i, find = 0;
	char Name[NAM_LEN];
	cout << "����Ҫ��ѯ��ϵ�˵�������";
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
		cout << "������" << per[i].name << endl;
		cout << "�Ա�" << per[i].sex << endl;
		cout << "סַ��" << per[i].address << endl;
		cout << "�绰��" << per[i].tel_no << endl;
		cout << "�������䣺" << per[i].e_mail << endl;
		cout << "���" << per[i].group << endl;
	}
	else
		cout << "�����ڴ���ϵ��";
}
//���ֻ����������ϵ��
void find2(PER per[], int n)
{
	int i, find = 0;
	char number[TEL_LEN];
	cout << "����Ҫ��ѯ��ϵ�˵ĵ绰��";
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
		cout << "������" << per[i].name << endl;
		cout << "�Ա�" << per[i].sex << endl;
		cout << "סַ��" << per[i].address << endl;
		cout << "�绰��" << per[i].tel_no << endl;
		cout << "�������䣺" << per[i].e_mail << endl;
		cout << "���" << per[i].group << endl;
	}
	else
		cout << "�����ڴ���ϵ��";
}
//������ģ����ѯ��ϵ��
void find3(PER per[], int n)
{
	int i, find = 0;
	char firstname[NAM_LEN];
	cout << "����Ҫ��ѯ��ϵ�˵����ϣ�";
	cin >> firstname;
	cout << "����      �Ա�      סַ           �绰          ��������               ���" << endl;
	for (i = 0; i < n; i++)
	{
		char s1[3];
		memcpy(s1, per[i].name, 2); //��per�����ǰ�����ַ�����������һ���֣����ݸ�mwmcpy
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
