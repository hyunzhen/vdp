#include<iostream> //c++ 입력에 필요
#include<process.h> // system("cls") 명령에 필요
#include<list> //리스트 사용에 필요
#include <fstream> //파일 입출력에 필요
#include <algorithm> //정렬에 필요
using namespace std;


struct User { // 사용자 구조체 테스트1111
	string uname;
	string unumber;
	string ucan;
	string uday;
	string urday;
	bool operator <(User& user) {
		if (uname == user.uname) // uname이 같으면 unumber을 기준으로 정렬
		{
			return unumber < user.unumber; 
		}
		return uname < user.uname;
	}
};


struct Video { // 비디오 구조체
	string vname;
	string vnumber; 
	bool operator <(Video& video) {
		if (vname == video.vname) // vname이 같으면 vnumber을 기준으로 정렬
		{
			return vnumber < video.vnumber;
		}
		return vname < video.vname;
	}
};





void search(list<User> & user_list, list<Video> & video_list) //1.검색  
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
	cout << "비디오 대여 프로그램 " << endl;
	cout << "--------------------" << endl << endl;
	cout << "1. 사용자 검색" << endl << "2. 비디오 검색" << endl;
	cout << "-------------------" << endl << endl << endl;
	cout << "무엇을 검색하시겠습니까? ";

	int a = 0; //변수 선언
	cin >> a; //키보드로부터 문자를 입력받아 d에 저장

	if (!cin)
	{
		system("cls");
		cout << "잘못된 입력입니다." << endl;
		cin.clear();
		cin.ignore(10, '\n');
	}

	if (a == 1) {
		system("cls");
		cout << "--------------------" << endl;
		cout << "비디오 대여 프로그램 " << endl;
		cout << "--------------------" << endl << endl;
		cout << "1. 이름으로 검색" << endl << "2. 연락처로 검색" << endl;
		cout << "-------------------" << endl << endl << endl;
		cout << "어떻게 검색하시겠습니까? ";

		int b = 0; //변수 선언
		cin >> b; //키보드로부터 문자를 입력받아 d에 저장

		if (!cin)
		{
			system("cls");
			cout << "잘못된 입력입니다." << endl;
			cin.clear();
			cin.ignore(10, '\n');
		}

		if (b == 1) {
			system("cls");
			cout << "--------------------" << endl;
			cout << "비디오 대여 프로그램 " << endl;
			cout << "--------------------" << endl << endl;
			cout << "이름으로 사용자 검색" << endl;
			cout << "-------------------" << endl << endl << endl; 
			cout << "검색할 이름을 입력해주세요." << endl;

			cin >> uname;
			bool sc = false;

			list<User>::iterator it; // = int i

			system("cls");
			cout << "이  름  ｜    연락처    ｜  연체  ｜    대출    ｜    반납" << endl;
			for (it = user_list.begin(); it != user_list.end(); it++) {
				if ((*it).uname == uname) {
					cout << (*it).uname << "     " << (*it).unumber << "     " << (*it).ucan << "     " << (*it).uday << "     " << (*it).urday << "\n";
					sc = true;
				}
			}

			if (sc == true) {
				return;
			}

			cout << "검색 결과가 없습니다." << "\n";
			return;
		}


		if (b == 2) {
		}
	}


	if (a == 2) {
	}
	return;

};


void rental(list<User>& user_list, list<Video>& video_list) //2.대여
{
	return ;
}


void re(list<User>& user_list, list<Video>& video_list) //3.반납
{
	return ;
}


void show(list<User>& user_list, list<Video>& video_list) //4.출력 
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
	cout << "비디오 대여 프로그램 " << endl;
	cout << "--------------------" << endl << endl;
	cout << "1. 사용자 목록" << endl << "2. 비디오 목록" << endl << "3. 취소" << endl;
	cout << "-------------------" << endl << endl << endl;
	cout << "무엇을 출력하시겠습니까? ";

	int a = 0; //변수 선언
	cin >> a; //키보드로부터 문자를 입력받아 d에 저장

	if (!cin)
	{
		system("cls");
		cout << "잘못된 입력입니다." << endl;
		cin.clear();
		cin.ignore(10, '\n');
	}

	if (a == 1) {
		system("cls");
		cout << "--------------------" << endl;
		cout << "비디오 대여 프로그램 " << endl;
		cout << "--------------------" << endl << endl;
		cout << "1. 전체 사용자 목록" << endl << "2. 대출가능 사용자 목록" << endl << "3. 연체 사용자 목록" << endl;
		cout << "-------------------" << endl << endl << endl;
		cout << "무엇을 출력하시겠습니까? ";

		int b = 0;
		cin >> b;
		bool sc = false;
		list<User>::iterator it; // = int i


		if (!cin)
		{
			system("cls");
			cout << "잘못된 입력입니다." << endl;
			cin.clear();
			cin.ignore(10, '\n');
		}

		if (b == 1) {
			system("cls");
			cout << "--------------------" << endl;
			cout << "비디오 대여 프로그램 " << endl;
			cout << "--------------------" << endl << endl;
			cout << "이  름  ｜    연락처    ｜  연체  ｜    대출    ｜    반납" << endl;


			for (it = user_list.begin(); it != user_list.end(); it++) { // for(시작할위치; 끝난직후위치(조건); it ++)	
				cout << (*it).uname << "     " << (*it).unumber << "     " << (*it).ucan << "     " << (*it).uday << "     " << (*it).urday << "\n";  //  (*it).uname = it->uname // .이 포인터보다 연산 우선순위가 높아서
			}
			return;
		}

		if (b == 2) {
			system("cls");
			cout << "--------------------" << endl;
			cout << "비디오 대여 프로그램 " << endl;
			cout << "--------------------" << endl << endl;
			cout << "이  름  ｜    연락처    ｜  연체  ｜    대출    ｜    반납" << endl;


			for (it = user_list.begin(); it != user_list.end(); it++) { // for(시작할위치; 끝난직후위치(조건); it ++)	
				if ((*it).ucan == "O") {
					cout << (*it).uname << "     " << (*it).unumber << "     " << (*it).ucan << "     " << (*it).uday << "     " << (*it).urday << "\n";  
					sc = true;
				}
			}

			if (sc == true) { 
				return; 
			}
			cout << "검색 결과가 없습니다.\n";
			return;
		}

		if (b == 3) {
			system("cls");
			cout << "--------------------" << endl;
			cout << "비디오 대여 프로그램 " << endl;
			cout << "--------------------" << endl << endl;
			cout << "이  름  ｜    연락처    ｜  연체  ｜    대출    ｜    반납" << endl;

			for (it = user_list.begin(); it != user_list.end(); it++) {	
				if ((*it).ucan == "X") {
					cout << (*it).uname << "     " << (*it).unumber << "     " << (*it).ucan << "     " << (*it).uday << "     " << (*it).urday << "\n";
				}
			}
			return;
		}
	}

	if (a == 2) {
		system("cls");
		cout << "2를 눌렀다." << endl;
	}

	if (a == 3) {
		system("cls");
		cout << "취소되었습니다.\n";
		return;
	}
}


void user(list<User>& user_list, list<Video>& video_list) //5.사용자관리
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
	cout << "비디오 대여 프로그램 " << endl;
	cout << "--------------------" << endl << endl;
	cout << "1. 사용자 가입" << endl << "2. 사용자 수정" << endl << "3. 사용자 삭제" << endl << "4. 취소" << endl;
	cout << "-------------------" << endl << endl << endl;
	cout << "무엇을 하시겠습니까? ";

	int a = 0;
	cin >> a;

	if (!cin)
	{
		system("cls");
		cout << "잘못된 입력입니다." << endl;
		cin.clear();
		cin.ignore(10, '\n');
	}

	if (a == 1) {
		system("cls");
		cout << "--------------------" << endl;
		cout << "비디오 대여 프로그램 " << endl;
		cout << "--------------------" << endl << endl;
		cout << "사용자 가입" << endl;
		cout << "-------------------" << endl << endl << endl;

		cout << "사용자의 이름을 입력하세요. ";
		cin >> uname;
		cout << "사용자의 연락처를 입력하세요. ";
		cin >> unumber;
		user_list.push_back({ uname, unumber, "O", "기록없음", "기록없음" });
		cout << "입력이 완료되었습니다." << endl;
		return;
	}

	if (a == 2) {		
		system("cls");
		cout << "--------------------" << endl;
		cout << "비디오 대여 프로그램 " << endl;
		cout << "--------------------" << endl << endl;
		cout << "사용자 수정" << endl;
		cout << "-------------------" << endl << endl << endl;
		
		cout << "수정할 사용자의 번호를 입력해주세요." << endl;

		cin >> unumber;

		if (!cin)
		{
			system("cls");
			cout << "잘못된 입력입니다." << endl;
			cin.clear();
			cin.ignore(10, '\n');
		}

		list<User>::iterator it;
		for (it = user_list.begin(); it != user_list.end(); it++) {
			if ((*it).unumber == unumber) {
				system("cls");
				cout << "--------------------" << endl;
				cout << "비디오 대여 프로그램 " << endl;
				cout << "--------------------" << endl << endl;
				cout << "1. 사용자 이름" << endl << "2. 사용자 번호" << endl << "3. 대출가능 여부" << endl;
				cout << "-------------------" << endl << endl << endl;
				cout << "무엇을 수정하시겠습니까?" << endl;
				int b = 0;
				cin >> b;

				if (b == 1) {
					cout << "수정할 이름을 입력해주세요." << endl;
					cin >> uname;
					(*it).uname = uname;
					cout << "수정 완료\n";
					return;
				}

				if (b == 2) {
					cout << "수정할 번호를 입력해주세요." << endl;
					cin >> unumber;
					(*it).unumber = unumber;
					cout << "수정 완료\n";
					return;
				}

				if (b == 3) {
					cout << "대출가능 여부를 입력해주세요. (O/X)" << endl;
					cin >> ucan;
					(*it).ucan = ucan;
					cout << "수정 완료\n";
					return;
				}
			}
		}
		cout << "잘못된 입력값입니다. 다시 시도해주세요.\n";
		return;
	}


	if (a == 3)
	{
		system("cls");
		cout << "--------------------" << endl;
		cout << "비디오 대여 프로그램 " << endl;
		cout << "--------------------" << endl << endl;
		cout << "사용자 삭제" << endl;
		cout << "-------------------" << endl << endl << endl;

		cout << "삭제할 사용자의 연락처를 입력해주세요." << endl;
		cin >> unumber;

		list<User>::iterator it;
		for (it = user_list.begin(); it != user_list.end(); it++) {
			if ((*it).unumber == unumber) {
				system("cls");
				cout << "--------------------" << endl;
				cout << "비디오 대여 프로그램 " << endl;
				cout << "--------------------" << endl << endl;
				cout << "사용자 삭제" << endl;
				cout << "-------------------" << endl << endl << endl;
				cout << "정말 \"" << (*it).uname << "\" 사용자를 삭제하시겠습니까 ? (예:1 / 아니오:2)" << endl;

				int b = 0;

				cin >> b;

				if (b == 1) {
					cout << (*it).uname << " 사용자를 삭제하였습니다." << endl;
					user_list.erase(it);
					return;
				}

				if (b == 2) {
					cout << "사용자 삭제를 취소하였습니다." << endl;
					return;
				}
			}
		}
		cout << "잘못된 입력값입니다. 다시 시도해주세요.\n";
		return;
	}
}

void video(list<User>& user_list, list<Video>& video_list) //6.비디오관리
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
	cout << "비디오 대여 프로그램 " << endl;
	cout << "--------------------" << endl << endl;
	cout << "1. 비디오 입고" << endl << "2. 비디오 수정" << endl << "3. 비디오 폐기" << endl << "4. 취소" << endl;
	cout << "-------------------" << endl << endl << endl;
	cout << "무엇을 하시겠습니까? ";

	int a = 0;
	cin >> a;

	if (!cin)
	{
		system("cls");
		cout << "잘못된 입력입니다." << endl;
		cin.clear();
		cin.ignore(10, '\n');
	}

	if (a == 1) {
		system("cls");
		cout << "--------------------" << endl;
		cout << "비디오 대여 프로그램 " << endl;
		cout << "--------------------" << endl << endl;
		cout << "비디오 입고" << endl;
		cout << "-------------------" << endl << endl << endl;

		cout << "비디오의 이름을 입력하세요. ";
		cin >> vname;
		cout << "비디오의 고유번호를 입력하세요. ";
		cin >> vnumber;
		video_list.push_back({ vname, vnumber });
		cout << "입력이 완료되었습니다." << endl;
		return;
	}

	if (a == 2) {
		system("cls");
		cout << "--------------------" << endl;
		cout << "비디오 대여 프로그램 " << endl;
		cout << "--------------------" << endl << endl;
		cout << "비디오 수정" << endl;
		cout << "-------------------" << endl << endl << endl;

		cout << "수정할 비디오의 번호를 입력해주세요." << endl;

		cin >> vnumber;

		if (!cin)
		{
			system("cls");
			cout << "잘못된 입력입니다." << endl;
			cin.clear();
			cin.ignore(10, '\n');
		}

		list<Video>::iterator it;
		for (it = video_list.begin(); it != video_list.end(); it++) {
			if ((*it).vnumber == vnumber) {
				system("cls");
				cout << "--------------------" << endl;
				cout << "비디오 대여 프로그램 " << endl;
				cout << "--------------------" << endl << endl;
				cout << "1. 비디오 이름" << endl << "2. 비디오 번호" << endl;
				cout << "-------------------" << endl << endl << endl;
				cout << "무엇을 수정하시겠습니까?" << endl;
				int b = 0;
				cin >> b;

				if (b == 1) {
					cout << "수정할 이름을 입력해주세요." << endl;
					cin >> vname;
					(*it).vname = vname;
					cout << "수정 완료\n";
					return;
				}

				if (b == 2) {
					cout << "수정할 번호를 입력해주세요." << endl;
					cin >> vnumber;
					(*it).vnumber = vnumber;
					cout << "수정 완료\n";
					return;
				}
			}
		}
		cout << "잘못된 입력값입니다. 다시 시도해주세요.\n";
		return;
	}


	if (a == 3)
	{
		system("cls");
		cout << "--------------------" << endl;
		cout << "비디오 대여 프로그램 " << endl;
		cout << "--------------------" << endl << endl;
		cout << "비디오 폐기" << endl;
		cout << "-------------------" << endl << endl << endl;

		cout << "삭제할 사용자의 연락처를 입력해주세요." << endl;
		cin >> unumber;

		list<Video>::iterator it;
		for (it = video_list.begin(); it != video_list.end(); it++) {
			if ((*it).vnumber == vnumber) {
				system("cls");
				cout << "--------------------" << endl;
				cout << "비디오 대여 프로그램 " << endl;
				cout << "--------------------" << endl << endl;
				cout << "비디오 폐기" << endl;
				cout << "-------------------" << endl << endl << endl;
				cout << "정말 \"" << (*it).vname << "\" 비디오를 삭제하시겠습니까 ? (예:1 / 아니오:2)" << endl;

				int b = 0;

				cin >> b;

				if (b == 1) {
					cout << (*it).vname << " 사용자를 삭제하였습니다." << endl;
					video_list.erase(it);
					return;
				}

				if (b == 2) {
					cout << "사용자 삭제를 취소하였습니다." << endl;
					return;
				}
			}
		}
		cout << "잘못된 입력값입니다. 다시 시도해주세요.\n";
		return;
	}
}


void usave(list<User>& user_list) // 사용자 저장
{
	ofstream fout;
	fout.open("user.txt");
	list<User>::iterator it = user_list.begin();
	for (it ; it != user_list.end(); it++) {
		fout << (*it).uname << " " << (*it).unumber << " " << (*it).ucan << " " << (*it).uday << " " << (*it).urday << "\n" ;
	}
	fout.close();
}


void vsave(list<Video>&video_list) // 비디오 저장
{
	ofstream fout;
	fout.open("video.txt");
	list<Video>::iterator it = video_list.begin();
	for (it; it != video_list.end(); it++) {
		fout << (*it).vname << " " << (*it).vnumber << "\n";
	}
	fout.close();
}


int main() // 메인
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
			string vname, vnumber;
			fin >> vname >> vnumber;
			video_list.push_back({ vname, vnumber });
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
		cout << "비디오 대여 프로그램 " << endl;
		cout << "--------------------" << endl << endl;
		cout << "1. 검색" << endl << "2. 대여" << endl << "3. 반납" << endl;
		cout << "4. 출력" << endl << "5. 사용자 관리" << endl << "6. 비디오 관리" << endl;
		cout << "7. 프로그램 종료" << endl << endl;
		cout << "-------------------" << endl << endl << endl;
		cout << "진행할 번호를 입력해주세요. ";

		cin >> c;
		if (!cin)
		{
			system("cls");
			cout << "잘못된 입력입니다." << endl;
			cin.clear();
			cin.ignore();
		}
		switch (c)
		{
		case 1: system("cls"); // 검색
			search(user_list, video_list);
			break;
		case 2: system("cls"); // 대여
			rental(user_list, video_list);
			usave(user_list);
			vsave(video_list);
			break;
		case 3: system("cls"); // 반납
			re(user_list, video_list);
			usave(user_list);
			vsave(video_list);
			break;
		case 4: system("cls"); // 출력
			show(user_list, video_list);
			break;
		case 5: system("cls"); // 사용자 관리
			user(user_list, video_list);
			usave(user_list);
			vsave(video_list);
			break;
		case 6: system("cls"); // 비디오 관리
			video(user_list, video_list);
			usave(user_list);
			vsave(video_list);
			break;
		case 7: cout << "비디오 대여 프로그램을 종료합니다." << endl; //7.종료
			exit(0);
			break;
		default: system("cls");
			cout << "다시 입력해주세요." << endl;
			break;
		}
	}
	return 0;
}