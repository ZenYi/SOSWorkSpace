#include "AdminServer.h"

class UserInfo
{
	int age;//范围在0~200，可用int
	char * UserCount;
	char * password;
	Privilege m_privilege;//用户权限
public:
	UserInfo(){};
	~UserInfo();
	UserInfo(int m_age, char * m_userCount, char * m_password, int privilege) :age(m_age), UserCount(m_userCount), password(m_password)
	{
		if (privilege == 1)
		{
			m_privilege = Privilege::normal;
		}
		else if (privilege == 2)
		{
			m_privilege = Privilege::root;
		}
		else
		{
			m_privilege = Privilege::visitor;
		}
	};
	
	bool SetAge(int m_age);
	bool SetUserCount(const char * m_usercount);
	bool SetPassword(const char * m_password);
};


class UserList
{
	struct Node
	{
		UserInfo * m_userlist;
		Node * nextNode;
	};

	Node * head;
	
	

public:

};