#include <iostream>;
using namespace std;

class User {
	private:
		string username;
		string password;
		string firstName;
		string lastName;
		string email;
		string adress;
		string session;

	public:
		User();
		User(string user,
				string pwd,
				string fname,
				string lname,
				string email,
				string addr,
				string session);

		string getEmail();
		void setPassword(string password);
		string getPassword();
		string printUserDetails();
		string getHiddenEmail();

};


