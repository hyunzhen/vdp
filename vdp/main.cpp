#include<iostream> //c++ �Է¿� �ʿ�
#include<process.h> // system("cls") ��ɿ� �ʿ�
#include<list> //����Ʈ ��뿡 �ʿ�
#include <fstream> //���� ����¿� �ʿ�
#include <algorithm> //���Ŀ� �ʿ�
using namespace std;

// ��� ������ �뿩�� ���� �߰� ��ġ��
// �ݳ� �����
// ����ó��
// �����ڸ��

struct User { // ����� ����ü 
	string uname;
	string unumber;
	string ucan;
	string uday;
	string urday;
	bool operator <(User& user) {
		if (uname == user.uname) // uname�� ������ unumber�� �������� ����
		{
			return unumber < user.unumber; 
		}
		return uname < user.uname;
	}
};


struct Video { // ���� ����ü
	string vname;
	string vnumber; 
	string vuser;
	bool operator <(Video& video) {
		if (vname == video.vname) // vname�� ������ vnumber�� �������� ����
		{
			return vnumber < video.vnumber;
		}
		return vname < video.vname;
	}
};





void search(list<User> & user_list, list<Video> & video_list) //1.�˻�  
{
	string uname;
	string unumber;
	string ucan;
	string uday;
	string urday;
	string vname;
	string vnumber;


	system("cls"); 
	cout << "--------------------" << endl;
	cout << "���� �뿩 ���α׷� " << endl;
	cout << "--------------------" << endl << endl;
	cout << "1. ����� �˻�" << endl << "2. ���� �˻�" << endl;
	cout << "-------------------" << endl << endl << endl;
	cout << "������ �˻��Ͻðڽ��ϱ�? ";

	int a = 0; //���� ����
	cin >> a; //Ű����κ��� ���ڸ� �Է¹޾� d�� ����

	if (!cin)
	{
		system("cls");
		cout << "�߸��� �Է��Դϴ�." << endl;
		cin.clear();
		cin.ignore(10, '\n');
	}

	if (a == 1) {
		system("cls");
		cout << "--------------------" << endl;
		cout << "���� �뿩 ���α׷� " << endl;
		cout << "--------------------" << endl << endl;
		cout << "1. �̸����� �˻�" << endl << "2. ����ó�� �˻�" << endl;
		cout << "-------------------" << endl << endl << endl;
		cout << "��� �˻��Ͻðڽ��ϱ�? ";

		int b = 0; //���� ����
		cin >> b; //Ű����κ��� ���ڸ� �Է¹޾� d�� ����

		if (!cin)
		{
			system("cls");
			cout << "�߸��� �Է��Դϴ�." << endl;
			cin.clear();
			cin.ignore(10, '\n');
		}

		if (b == 1) {
			system("cls");
			cout << "--------------------" << endl;
			cout << "���� �뿩 ���α׷� " << endl;
			cout << "--------------------" << endl << endl;
			cout << "�̸����� ����� �˻�" << endl;
			cout << "-------------------" << endl << endl << endl; 
			cout << "�˻��� �̸��� �Է����ּ���." << endl;

			cin >> uname;
			bool sc = false;

			list<User>::iterator it; // = int i

			system("cls");
			cout << "��  ��  ��    ����ó    ��  ��ü  ��    ����    ��    �ݳ�" << endl;
			for (it = user_list.begin(); it != user_list.end(); it++) {
				if ((*it).uname == uname) {
					cout << (*it).uname << "     " << (*it).unumber << "     " << (*it).ucan << "     " << (*it).uday << "     " << (*it).urday << "\n";
					sc = true;
				}
			}

			if (sc == true) {
				return;
			}

			cout << "�˻� ����� �����ϴ�." << "\n";
			return;
		}


		if (b == 2) {
			system("cls");
			cout << "--------------------" << endl;
			cout << "���� �뿩 ���α׷� " << endl;
			cout << "--------------------" << endl << endl;
			cout << "�̸����� ����� �˻�" << endl;
			cout << "-------------------" << endl << endl << endl;
			cout << "�˻��� ����ó�� �Է����ּ���." << endl;

			cin >> unumber;
			bool sc = false;

			list<User>::iterator it;

			system("cls");
			cout << "��  ��  ��    ����ó    ��  ��ü  ��    ����    ��    �ݳ�" << endl;
			for (it = user_list.begin(); it != user_list.end(); it++) {
				if ((*it).unumber == unumber) {
					cout << (*it).uname << "     " << (*it).unumber << "     " << (*it).ucan << "     " << (*it).uday << "     " << (*it).urday << "\n";
					sc = true;
				}
			}

			if (sc == true) {
				return;
			}

			cout << "�˻� ����� �����ϴ�." << "\n";
			return;
		}
	}


	if (a == 2) {
		system("cls");
		cout << "--------------------" << endl;
		cout << "���� �뿩 ���α׷� " << endl;
		cout << "--------------------" << endl << endl;
		cout << "1. �̸����� �˻�" << endl << "2. ������ȣ�� �˻�" << endl;
		cout << "-------------------" << endl << endl << endl;
		cout << "��� �˻��Ͻðڽ��ϱ�? ";

		int b = 0;
		cin >> b;

		if (!cin)
		{
			system("cls");
			cout << "�߸��� �Է��Դϴ�." << endl;
			cin.clear();
			cin.ignore(10, '\n');
		}

		if (b == 1) {
			system("cls");
			cout << "--------------------" << endl;
			cout << "���� �뿩 ���α׷� " << endl;
			cout << "--------------------" << endl << endl;
			cout << "�̸����� ���� �˻�" << endl;
			cout << "-------------------" << endl << endl << endl;
			cout << "�˻��� �̸��� �Է����ּ���." << endl;

			cin >> vname;
			bool sc = false;

			list<Video>::iterator it; // = int i

			system("cls");
			cout << "��  ��  ��    ������ȣ     ��    ������" << endl;
			for (it = video_list.begin(); it != video_list.end(); it++) {
				if ((*it).vname == vname) {
					cout << (*it).vname << "     " << (*it).vnumber << "     " << (*it).vuser << "\n";
					sc = true;
				}
			}

			if (sc == true) {
				return;
			}

			cout << "�˻� ����� �����ϴ�." << "\n";
			return;
		}


		if (b == 2) {
			system("cls");
			cout << "--------------------" << endl;
			cout << "���� �뿩 ���α׷� " << endl;
			cout << "--------------------" << endl << endl;
			cout << "������ȣ�� ���� �˻�" << endl;
			cout << "-------------------" << endl << endl << endl;
			cout << "�˻��� ������ȣ�� �Է����ּ���." << endl;

			cin >> vnumber;
			bool sc = false;

			list<Video>::iterator it;

			system("cls");
			cout << "��  ��  ��    ����ó    ��  ��ü  ��    ����    ��    �ݳ�" << endl;
			for (it = video_list.begin(); it != video_list.end(); it++) {
				if ((*it).vnumber == vnumber) {
					cout << (*it).vname << "     " << (*it).vnumber << "     " << (*it).vuser << "\n";
					sc = true;
				}
			}

			if (sc == true) {
				return;
			}

			cout << "�˻� ����� �����ϴ�." << "\n";
			return;
		}

	}
	return;

};


void rental(list<User>& user_list, list<Video>& video_list) //2.�뿩
{
	string uname;
	string unumber;
	string ucan;
	string uday;
	string urday;
	string vname;
	string vnumber;

	system("cls");
	cout << "--------------------" << endl;
	cout << "���� �뿩 ���α׷� " << endl;
	cout << "--------------------" << endl << endl;
	cout << "���� �뿩" << endl;
	cout << "-------------------" << endl << endl << endl;
	cout << "������� ����ó�� �Է����ּ���. ";

	cin >> unumber;

	if (!cin)
	{
		system("cls");
		cout << "�߸��� �Է��Դϴ�." << endl;
		cin.clear();
		cin.ignore(10, '\n');
	}

	list<User>::iterator it;
	for (it = user_list.begin(); it != user_list.end(); it++) {
		if ((*it).unumber == unumber) {
			system("cls");
			cout << "--------------------" << endl;
			cout << "���� �뿩 ���α׷� " << endl;
			cout << "--------------------" << endl << endl;
			cout << "���� �뿩" << endl;
			cout << "-------------------" << endl << endl << endl;
			cout << "������ ������ȣ�� �Է����ּ���." << endl;

			cin >> vnumber;

			list<Video>::iterator it2;
			for (it2 = video_list.begin(); it2 != video_list.end(); it2++) {
				if ((*it2).vnumber == vnumber) {
					system("cls");
					cout << "--------------------" << endl;
					cout << "���� �뿩 ���α׷� " << endl;
					cout << "--------------------" << endl << endl;
					cout << "���� �뿩" << endl;
					cout << "-------------------" << endl << endl << endl;
					(*it2).vuser = unumber;
					cout << (*it).uname << " ����� ���� " << (*it2).vname << " �뿩�� �Ϸ�Ǿ����ϴ�." << endl;
					return ;
				}
			}
		}
	}
	cout << "�߸��� �Է°��Դϴ�. �ٽ� �õ����ּ���.\n";
	return ;
}


void re(list<User>& user_list, list<Video>& video_list) //3.�ݳ�
{
	return ;
}


void show(list<User>& user_list, list<Video>& video_list) //4.��� 
{
	string uname;
	string unumber;
	string ucan;
	string uday;
	string urday;
	string vname;
	string vnumber;

	system("cls");
	cout << "--------------------" << endl;
	cout << "���� �뿩 ���α׷� " << endl;
	cout << "--------------------" << endl << endl;
	cout << "1. ����� ���" << endl << "2. ���� ���" << endl << "3. ���" << endl;
	cout << "-------------------" << endl << endl << endl;
	cout << "������ ����Ͻðڽ��ϱ�? ";

	int a = 0; //���� ����
	cin >> a; //Ű����κ��� ���ڸ� �Է¹޾� d�� ����

	if (!cin)
	{
		system("cls");
		cout << "�߸��� �Է��Դϴ�." << endl;
		cin.clear();
		cin.ignore(10, '\n');
	}

	if (a == 1) {
		system("cls");
		cout << "--------------------" << endl;
		cout << "���� �뿩 ���α׷� " << endl;
		cout << "--------------------" << endl << endl;
		cout << "1. ��ü ����� ���" << endl << "2. ���Ⱑ�� ����� ���" << endl << "3. ��ü ����� ���" << endl;
		cout << "-------------------" << endl << endl << endl;
		cout << "������ ����Ͻðڽ��ϱ�? ";

		int b = 0;
		cin >> b;
		bool sc = false;
		list<User>::iterator it; // = int i


		if (!cin)
		{
			system("cls");
			cout << "�߸��� �Է��Դϴ�." << endl;
			cin.clear();
			cin.ignore(10, '\n');
		}

		if (b == 1) {
			system("cls");
			cout << "--------------------" << endl;
			cout << "���� �뿩 ���α׷� " << endl;
			cout << "--------------------" << endl << endl;
			cout << "��  ��  ��    ����ó    ��  ��ü  ��    ����    ��    �ݳ�" << endl;


			for (it = user_list.begin(); it != user_list.end(); it++) { // for(��������ġ; ����������ġ(����); it ++)	
				cout << (*it).uname << "     " << (*it).unumber << "     " << (*it).ucan << "     " << (*it).uday << "     " << (*it).urday << "\n";  //  (*it).uname = it->uname // .�� �����ͺ��� ���� �켱������ ���Ƽ�
			}
			return;
		}

		if (b == 2) {
			system("cls");
			cout << "--------------------" << endl;
			cout << "���� �뿩 ���α׷� " << endl;
			cout << "--------------------" << endl << endl;
			cout << "��  ��  ��    ����ó    ��  ��ü  ��    ����    ��    �ݳ�" << endl;


			for (it = user_list.begin(); it != user_list.end(); it++) { // for(��������ġ; ����������ġ(����); it ++)	
				if ((*it).ucan == "O") {
					cout << (*it).uname << "     " << (*it).unumber << "     " << (*it).ucan << "     " << (*it).uday << "     " << (*it).urday << "\n";  
					sc = true;
				}
			}

			if (sc == true) { 
				return; 
			}
			cout << "�˻� ����� �����ϴ�.\n";
			return;
		}

		if (b == 3) {
			system("cls");
			cout << "--------------------" << endl;
			cout << "���� �뿩 ���α׷� " << endl;
			cout << "--------------------" << endl << endl;
			cout << "��  ��  ��    ����ó    ��  ��ü  ��    ����    ��    �ݳ�" << endl;

			for (it = user_list.begin(); it != user_list.end(); it++) {	
				if ((*it).ucan == "X") {
					cout << (*it).uname << "     " << (*it).unumber << "     " << (*it).ucan << "     " << (*it).uday << "     " << (*it).urday << "\n";
					sc = true;
				}
			}

			if (sc == true) {
				return;
			}
			cout << "�˻� ����� �����ϴ�.\n";
			return;
		}
	}

	if (a == 2) {
		system("cls");
		cout << "--------------------" << endl;
		cout << "���� �뿩 ���α׷� " << endl;
		cout << "--------------------" << endl << endl;
		cout << "1. ��ü ���� ���" << endl << "2. ���Ⱑ�� ���� ���" << endl << "3. ������ ���� ���" << endl;
		cout << "-------------------" << endl << endl << endl;
		cout << "������ ����Ͻðڽ��ϱ�? ";

		int b = 0;
		cin >> b;
		bool sc = false;
		list<Video>::iterator it; // = int i


		if (!cin)
		{
			system("cls");
			cout << "�߸��� �Է��Դϴ�." << endl;
			cin.clear();
			cin.ignore(10, '\n');
		}

		if (b == 1) {
			system("cls");
			cout << "--------------------" << endl;
			cout << "���� �뿩 ���α׷� " << endl;
			cout << "--------------------" << endl << endl;
			cout << "��  ��  ��    ������ȣ     ��    ������" << endl;

			for (it = video_list.begin(); it != video_list.end(); it++) { 
				cout << (*it).vname << "     " << (*it).vnumber << "     " << (*it).vuser << "\n";
			}
			return;
		}

		if (b == 2) {
			system("cls");
			cout << "--------------------" << endl;
			cout << "���� �뿩 ���α׷� " << endl;
			cout << "--------------------" << endl << endl;
			cout << "��  ��  ��    ������ȣ     ��    ������" << endl;

			for (it = video_list.begin(); it != video_list.end(); it ++ ) {
				if ((*it).vuser == "-") {
					cout << (*it).vname << "     " << (*it).vnumber << "     " << (*it).vuser << "\n";
					sc = true;
				}
			}

			if (sc == true) {
				return;
			}
			cout << "�˻� ����� �����ϴ�.\n";
			return;
		}

		if (b == 3) {
			system("cls");
			cout << "--------------------" << endl;
			cout << "���� �뿩 ���α׷� " << endl;
			cout << "--------------------" << endl << endl;
			cout << "��  ��  ��    ������ȣ     ��    ������" << endl;

			for (it = video_list.begin(); it != video_list.end(); it++) {
				if ((*it).vuser != "-") {
					cout << (*it).vname << "     " << (*it).vnumber << "     " << (*it).vuser << "\n";
					sc = true;
				}
			}

			if (sc == true) {
				return;
			}
			cout << "�˻� ����� �����ϴ�.\n";
			return;
		}
	}

	if (a == 3) {
		system("cls");
		cout << "��ҵǾ����ϴ�.\n";
		return;
	}
}


void user(list<User>& user_list, list<Video>& video_list) //5.����ڰ���
{
	string uname;
	string unumber;
	string ucan;
	string uday;
	string urday;
	string vname;
	string vnumber;

	system("cls");
	cout << "--------------------" << endl;
	cout << "���� �뿩 ���α׷� " << endl;
	cout << "--------------------" << endl << endl;
	cout << "1. ����� ����" << endl << "2. ����� ����" << endl << "3. ����� ����" << endl << "4. ���" << endl;
	cout << "-------------------" << endl << endl << endl;
	cout << "������ �Ͻðڽ��ϱ�? ";

	int a = 0;
	cin >> a;

	if (!cin)
	{
		system("cls");
		cout << "�߸��� �Է��Դϴ�." << endl;
		cin.clear();
		cin.ignore(10, '\n');
	}

	if (a == 1) {
		system("cls");
		cout << "--------------------" << endl;
		cout << "���� �뿩 ���α׷� " << endl;
		cout << "--------------------" << endl << endl;
		cout << "����� ����" << endl;
		cout << "-------------------" << endl << endl << endl;

		cout << "������� �̸��� �Է��ϼ���. ";
		cin >> uname;
		cout << "������� ����ó�� �Է��ϼ���. ";
		cin >> unumber;
		user_list.push_back({ uname, unumber, "O", "��Ͼ���", "��Ͼ���" });
		cout << "�Է��� �Ϸ�Ǿ����ϴ�." << endl;
		return;
	}

	if (a == 2) {		
		system("cls");
		cout << "--------------------" << endl;
		cout << "���� �뿩 ���α׷� " << endl;
		cout << "--------------------" << endl << endl;
		cout << "����� ����" << endl;
		cout << "-------------------" << endl << endl << endl;
		
		cout << "������ ������� ��ȣ�� �Է����ּ���." << endl;

		cin >> unumber;

		if (!cin)
		{
			system("cls");
			cout << "�߸��� �Է��Դϴ�." << endl;
			cin.clear();
			cin.ignore(10, '\n');
		}

		list<User>::iterator it;
		for (it = user_list.begin(); it != user_list.end(); it++) {
			if ((*it).unumber == unumber) {
				system("cls");
				cout << "--------------------" << endl;
				cout << "���� �뿩 ���α׷� " << endl;
				cout << "--------------------" << endl << endl;
				cout << "1. ����� �̸�" << endl << "2. ����� ��ȣ" << endl << "3. ���Ⱑ�� ����" << endl;
				cout << "-------------------" << endl << endl << endl;
				cout << "������ �����Ͻðڽ��ϱ�?" << endl;
				int b = 0;
				cin >> b;

				if (b == 1) {
					cout << "������ �̸��� �Է����ּ���." << endl;
					cin >> uname;
					(*it).uname = uname;
					cout << "���� �Ϸ�\n";
					return;
				}

				if (b == 2) {
					cout << "������ ��ȣ�� �Է����ּ���." << endl;
					cin >> unumber;
					(*it).unumber = unumber;
					cout << "���� �Ϸ�\n";
					return;
				}

				if (b == 3) {
					cout << "���Ⱑ�� ���θ� �Է����ּ���. (O/X)" << endl;
					cin >> ucan;
					(*it).ucan = ucan;
					cout << "���� �Ϸ�\n";
					return;
				}
			}
		}
		cout << "�߸��� �Է°��Դϴ�. �ٽ� �õ����ּ���.\n";
		return;
	}


	if (a == 3)
	{
		system("cls");
		cout << "--------------------" << endl;
		cout << "���� �뿩 ���α׷� " << endl;
		cout << "--------------------" << endl << endl;
		cout << "����� ����" << endl;
		cout << "-------------------" << endl << endl << endl;

		cout << "������ ������� ����ó�� �Է����ּ���." << endl;
		cin >> unumber;

		list<User>::iterator it;
		for (it = user_list.begin(); it != user_list.end(); it++) {
			if ((*it).unumber == unumber) {
				system("cls");
				cout << "--------------------" << endl;
				cout << "���� �뿩 ���α׷� " << endl;
				cout << "--------------------" << endl << endl;
				cout << "����� ����" << endl;
				cout << "-------------------" << endl << endl << endl;
				cout << "���� \"" << (*it).uname << "\" ����ڸ� �����Ͻðڽ��ϱ� ? (��:1 / �ƴϿ�:2)" << endl;

				int b = 0;

				cin >> b;

				if (b == 1) {
					cout << (*it).uname << " ����ڸ� �����Ͽ����ϴ�." << endl;
					user_list.erase(it);
					return;
				}

				if (b == 2) {
					cout << "����� ������ ����Ͽ����ϴ�." << endl;
					return;
				}
			}
		}
		cout << "�߸��� �Է°��Դϴ�. �ٽ� �õ����ּ���.\n";
		return;
	}
}

void video(list<User>& user_list, list<Video>& video_list) //6.��������
{
	string uname;
	string unumber;
	string ucan;
	string uday;
	string urday;
	string vname;
	string vnumber;

	system("cls");
	cout << "--------------------" << endl;
	cout << "���� �뿩 ���α׷� " << endl;
	cout << "--------------------" << endl << endl;
	cout << "1. ���� �԰�" << endl << "2. ���� ����" << endl << "3. ���� ���" << endl << "4. ���" << endl;
	cout << "-------------------" << endl << endl << endl;
	cout << "������ �Ͻðڽ��ϱ�? ";

	int a = 0;
	cin >> a;

	if (!cin)
	{
		system("cls");
		cout << "�߸��� �Է��Դϴ�." << endl;
		cin.clear();
		cin.ignore(10, '\n');
	}

	if (a == 1) {
		system("cls");
		cout << "--------------------" << endl;
		cout << "���� �뿩 ���α׷� " << endl;
		cout << "--------------------" << endl << endl;
		cout << "���� �԰�" << endl;
		cout << "-------------------" << endl << endl << endl;

		cout << "������ �̸��� �Է��ϼ���. ";
		cin >> vname;
		cout << "������ ������ȣ�� �Է��ϼ���. ";
		cin >> vnumber;
		video_list.push_back({ vname, vnumber });
		cout << "�Է��� �Ϸ�Ǿ����ϴ�." << endl;
		return;
	}

	if (a == 2) {
		system("cls");
		cout << "--------------------" << endl;
		cout << "���� �뿩 ���α׷� " << endl;
		cout << "--------------------" << endl << endl;
		cout << "���� ����" << endl;
		cout << "-------------------" << endl << endl << endl;

		cout << "������ ������ ��ȣ�� �Է����ּ���." << endl;

		cin >> vnumber;

		if (!cin)
		{
			system("cls");
			cout << "�߸��� �Է��Դϴ�." << endl;
			cin.clear();
			cin.ignore(10, '\n');
		}

		list<Video>::iterator it;
		for (it = video_list.begin(); it != video_list.end(); it++) {
			if ((*it).vnumber == vnumber) {
				system("cls");
				cout << "--------------------" << endl;
				cout << "���� �뿩 ���α׷� " << endl;
				cout << "--------------------" << endl << endl;
				cout << "1. ���� �̸�" << endl << "2. ���� ��ȣ" << endl;
				cout << "-------------------" << endl << endl << endl;
				cout << "������ �����Ͻðڽ��ϱ�?" << endl;
				int b = 0;
				cin >> b;

				if (b == 1) {
					cout << "������ �̸��� �Է����ּ���." << endl;
					cin >> vname;
					(*it).vname = vname;
					cout << "���� �Ϸ�\n";
					return;
				}

				if (b == 2) {
					cout << "������ ��ȣ�� �Է����ּ���." << endl;
					cin >> vnumber;
					(*it).vnumber = vnumber;
					cout << "���� �Ϸ�\n";
					return;
				}
			}
		}
		cout << "�߸��� �Է°��Դϴ�. �ٽ� �õ����ּ���.\n";
		return;
	}


	if (a == 3)
	{
		system("cls");
		cout << "--------------------" << endl;
		cout << "���� �뿩 ���α׷� " << endl;
		cout << "--------------------" << endl << endl;
		cout << "���� ���" << endl;
		cout << "-------------------" << endl << endl << endl;

		cout << "������ ������� ����ó�� �Է����ּ���." << endl;
		cin >> unumber;

		list<Video>::iterator it;
		for (it = video_list.begin(); it != video_list.end(); it++) {
			if ((*it).vnumber == vnumber) {
				system("cls");
				cout << "--------------------" << endl;
				cout << "���� �뿩 ���α׷� " << endl;
				cout << "--------------------" << endl << endl;
				cout << "���� ���" << endl;
				cout << "-------------------" << endl << endl << endl;
				cout << "���� \"" << (*it).vname << "\" ������ �����Ͻðڽ��ϱ� ? (��:1 / �ƴϿ�:2)" << endl;

				int b = 0;

				cin >> b;

				if (b == 1) {
					cout << (*it).vname << " ����ڸ� �����Ͽ����ϴ�." << endl;
					video_list.erase(it);
					return;
				}

				if (b == 2) {
					cout << "����� ������ ����Ͽ����ϴ�." << endl;
					return;
				}
			}
		}
		cout << "�߸��� �Է°��Դϴ�. �ٽ� �õ����ּ���.\n";
		return;
	}
}


void usave(list<User>& user_list) // ����� ����
{
	ofstream fout;
	fout.open("user.txt");
	list<User>::iterator it = user_list.begin();
	for (it ; it != user_list.end(); it++) {
		fout << (*it).uname << " " << (*it).unumber << " " << (*it).ucan << " " << (*it).uday << " " << (*it).urday << "\n" ;
	}
	fout.close();
}


void vsave(list<Video>&video_list) // ���� ����
{
	ofstream fout;
	fout.open("video.txt");
	list<Video>::iterator it = video_list.begin();
	for (it; it != video_list.end(); it++) {
		fout << (*it).vname << " " << (*it).vnumber << " " << (*it).vuser << "\n";
	}
	fout.close();
}


int main() // ����
{
	ifstream fin("user.txt");
	list<User> user_list;

	if (fin.fail() == false) {
		string uname, unumber, ucan, uday, urday;
		while (fin >> uname >> unumber >> ucan >> uday >> urday) {
			user_list.push_back({ uname, unumber, ucan, uday, urday });
		}
		fin.close();
	}

	
	fin.open("video.txt");
	list<Video> video_list;
	if (fin.fail() == false) {
		while (1) {
			string vname, vnumber, vuser;
			fin >> vname >> vnumber >> vuser;
			video_list.push_back({ vname, vnumber, vuser });
			if (fin.eof())
			{
				break;
			}
		}
		fin.close();
	}
	

	bool vdp = true;
	int c = 0;

	while (vdp)
	{
		cout << "--------------------" << endl;
		cout << "���� �뿩 ���α׷� " << endl;
		cout << "--------------------" << endl << endl;
		cout << "1. �˻�" << endl << "2. �뿩" << endl << "3. �ݳ�" << endl;
		cout << "4. ���" << endl << "5. ����� ����" << endl << "6. ���� ����" << endl;
		cout << "7. ���α׷� ����" << endl << endl;
		cout << "-------------------" << endl << endl << endl;
		cout << "������ ��ȣ�� �Է����ּ���. ";

		cin >> c;
		if (!cin)
		{
			system("cls");
			cout << "�߸��� �Է��Դϴ�." << endl;
			cin.clear();
			cin.ignore();
		}
		switch (c)
		{
		case 1: system("cls"); // �˻�
			search(user_list, video_list);
			break;
		case 2: system("cls"); // �뿩
			rental(user_list, video_list);
			usave(user_list);
			vsave(video_list);
			break;
		case 3: system("cls"); // �ݳ�
			re(user_list, video_list);
			usave(user_list);
			vsave(video_list);
			break;
		case 4: system("cls"); // ���
			show(user_list, video_list);
			break;
		case 5: system("cls"); // ����� ����
			user(user_list, video_list);
			usave(user_list);
			vsave(video_list);
			break;
		case 6: system("cls"); // ���� ����
			video(user_list, video_list);
			usave(user_list);
			vsave(video_list);
			break;
		case 7: cout << "���� �뿩 ���α׷��� �����մϴ�." << endl; //7.����
			exit(0);
			break;
		default: system("cls");
			cout << "�ٽ� �Է����ּ���." << endl;
			break;
		}
	}
	return 0;
}