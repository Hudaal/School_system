#include <iostream>
#include <string>
#include "Student.h"
#include "Admin.h"
#include "School.h"
#include "Post.h"
using namespace std;

void addstudentfun(Admin A);
void addteacherfun(Admin A);
void mainfun(int res,string name);

int main(){
	School S("Al Kamal", "AlAzhariah");
	cout << "\n\n\n                       -----------------------------------\n" ;
	cout << "                       | E d u c @ t i o n   $ y s t e m | \n";
	cout << "                       -----------------------------------\n\n\n";
	cout << " @@@@@@@@@  @@          @@     @@   @@@         @@@        @@@ 	      @@         \n";
	cout << " @@         @@          @@    @@    @@ @@     @@ @@       @@ @@	      @@         \n";
	cout << " @@         @@          @@  @@      @@  @@   @@  @@      @@   @@      @@         \n";
	cout << " @@         @@          @ @@        @@   @@ @@   @@     @@     @@     @@         \n";
	cout << " @@@@@@     @@          @@@@@	    @@     @     @@   @@@@@@@@@@@     @@         \n";
	cout << " @@         @@          @@   @@     @@           @@   @@         @@   @@         \n";
	cout << " @@         @@          @@    @@    @@           @@  @@           @@  @@        \n";
	cout << " @@@@@@@@@  @@@@@@@@@@  @@     @@   @@           @@ @@             @@ @@@@@@@@@@\n";
	cout << " \n  ========================== * Primary School * ==============================\n\n\n";


	cout << " ad8888888888ba\n";
	cout << "dP'         `'8b,\n";
	cout << "8  ,aaa,       ''Y888a     ,aaaa,     ,aaa,  ,aa,\n";
	cout << "8  8' `8           '8baaaad''''baaaad''''baad''8b\n";
	cout << "8  8   8              ''''      ''''      ''    8b\n";
	cout << "8  8, ,8         ,aaaaaaaaaaaaaaaaaaaaaaaaddddd88P\n";
	cout << "8  `''''       ,d8''\n";
	cout << "Yb,         ,ad8'  \n";
	cout << " 'Y8888888888P'\n\n\n";

	string name, password;
	cout << "                      User Name ---->>";
	cin >> name;
	cout << "                      Password  ---->>";
	cin >> password;
	Person p;
	int res;
	int time = 3;
	res = p.login(name, password);
	while (res != 1 && res != 2 && res != 3 && time != 0){
		time--;
		cout << "False login ... Reenter your username and password" << endl;
		cout << "                      User Name ---->>";
		cin >> name;
		cout << "                      Password  ---->>";
		cin >> password;

		res = p.login(name, password);
	}
	if (time == 0){
		cout << "You have entered the wrong information 4 times\nlogin in another time\n";
	}

	mainfun(res,name);

		system("pause");
	return 0;

}