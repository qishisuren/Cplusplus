#include"head.h"
//主函数 首页
int main()
{
	int  k, m;
	PER per[num];//声明PER类数组个数
	char select1;
	cout << endl;
	while (1) {
	TOP:system("cls");
		cout << "※※※※※※※※※※※※※※※※※※※※※※※※※※※※※※※※※※※※" << endl
			<< "※                           15级计科1班薛皓                          ※" << endl
			<< "※                                                                    ※" << endl
			<< "※                            简 易 通 迅 录                          ※" << endl
			<< "※                                                                    ※" << endl
			<< "※                           1. 添加联系人.                           ※" << endl
			<< "※                                                                    ※" << endl
			<< "※                           2. 查询（显示）联系人.                   ※" << endl
			<< "※                                                                    ※" << endl
			<< "※                           3. 编辑(删除）联系人.                    ※" << endl
			<< "※                                                                    ※" << endl
			<< "※                           0. 退出                                  ※" << endl
			<< "※※※※※※※※※※※※※※※※※※※※※※※※※※※※※※※※※※※※" << endl << endl
			<< "\t\t\t选择 :";
		cin >> select1;
		switch (select1)
		{
		case '1':cout << "输入添加的资料" << endl;
			add(per, 1);
			cout << "       任意键以返回菜单   ";
			addtoFile(per, 1);
			system("pause");
			break;
		case '2':TWO:m = readfromFile(per);
			readfromFile(per);
			cout << "(1) 根据姓名查找联系人" << endl;
			cout << "(2) 根据手机号码查找联系人" << endl;
			cout << "(3) 根据姓氏模糊查询(姓名第一个字）" << endl;
			cout << "(4) 显示同一组别的联系人" << endl;
			cout << "(5) 显示同一性别的联系人" << endl;
			cout << "(6) 显示所有联系人" << endl;
			cout << "(0) 返回菜单" << endl;
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
			default:cout << "输入错误请按任意键重新选择：";
				system("pause");
				goto TWO;
			}
			break;
		case '3':m = readfromFile(per);
		THREE:cout << "(1)编辑某个人的信息" << endl;
			cout << "(2) 删除某个人的信息" << endl;
			cout << "(0)返回菜单";
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
			default:cout << "输入错误，请按任意键重新选择";
				system("pause");
				goto THREE;
			}
			break;
		case'0':goto bottom;
		default:
			cout << "输入错误请重新输入,请按任意键返回菜单";
			system("pause");
			break;
		}
	}
bottom:cout << "           ★★★★★★★★★★★★欢迎使用本软件！★★★★★★★★★★★  " << endl;
	return 0;
}
