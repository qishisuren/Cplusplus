#include"head.h"
//������ ��ҳ
int main()
{
	int  k, m;
	PER per[num];//����PER���������
	char select1;
	cout << endl;
	while (1) {
	TOP:system("cls");
		cout << "������������������������������������������������������������������������" << endl
			<< "��                           15���ƿ�1��Ѧ�                          ��" << endl
			<< "��                                                                    ��" << endl
			<< "��                            �� �� ͨ Ѹ ¼                          ��" << endl
			<< "��                                                                    ��" << endl
			<< "��                           1. �����ϵ��.                           ��" << endl
			<< "��                                                                    ��" << endl
			<< "��                           2. ��ѯ����ʾ����ϵ��.                   ��" << endl
			<< "��                                                                    ��" << endl
			<< "��                           3. �༭(ɾ������ϵ��.                    ��" << endl
			<< "��                                                                    ��" << endl
			<< "��                           0. �˳�                                  ��" << endl
			<< "������������������������������������������������������������������������" << endl << endl
			<< "\t\t\tѡ�� :";
		cin >> select1;
		switch (select1)
		{
		case '1':cout << "������ӵ�����" << endl;
			add(per, 1);
			cout << "       ������Է��ز˵�   ";
			addtoFile(per, 1);
			system("pause");
			break;
		case '2':TWO:m = readfromFile(per);
			readfromFile(per);
			cout << "(1) ��������������ϵ��" << endl;
			cout << "(2) �����ֻ����������ϵ��" << endl;
			cout << "(3) ��������ģ����ѯ(������һ���֣�" << endl;
			cout << "(4) ��ʾͬһ������ϵ��" << endl;
			cout << "(5) ��ʾͬһ�Ա����ϵ��" << endl;
			cout << "(6) ��ʾ������ϵ��" << endl;
			cout << "(0) ���ز˵�" << endl;
			char selectsearch;
			cin >> selectsearch;
			switch (selectsearch)
			{
				m = readfromFile(per);
			case'1':find1(per, m - 1);
				system("pause");
				break;
			case'2':find2(per, m - 1);
				system("pause");
				break;
			case'3':find3(per, m - 1);
				system("pause");
				break;
			case'4':show1(per, m - 1);
				system("pause");
				break;
			case'5':show2(per, m - 1);
				system("pause");
				break;
			case'6':show3(per, m - 1);
				system("pause");
				break;
			case'0':goto TOP;
			default:cout << "��������밴���������ѡ��";
				system("pause");
				goto TWO;
			}
			break;
		case '3':m = readfromFile(per);
		THREE:cout << "(1)�༭ĳ���˵���Ϣ" << endl;
			cout << "(2) ɾ��ĳ���˵���Ϣ" << endl;
			cout << "(0)���ز˵�";
			char selectsearch3;
			cin >> selectsearch3;
			switch (selectsearch3)
			{
			case'1':change(per, m - 1);
				writetoFile(per, m - 1);
				system("pause");
				break;
			case'2':k = del(per, m - 1);
				writetoFile(per, m - 2);
				system("pause");
				break;
			case'0':goto TOP;
			default:cout << "��������밴���������ѡ��";
				system("pause");
				goto THREE;
			}
			break;
		case'0':goto bottom;
		default:
			cout << "�����������������,�밴��������ز˵�";
			system("pause");
			break;
		}
	}
bottom:cout << "           ������������ﻶӭʹ�ñ������������������  " << endl;
	return 0;
}
