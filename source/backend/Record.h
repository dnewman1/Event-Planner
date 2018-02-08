#ifndef RECORD_H
#define RECORD_H

#include "User.h"
#include <string>
#include <list>

class Record{
	public:
		Record();
		Record(std::string t);
		~Record();
		void add_user(User uid);
		void remove_user(User uid);
		std::list<User> getUserList();

	private:
		std::string time;
		std::list<User> userList;
};

#endif
