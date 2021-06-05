#include "user.h"

User::User() : _username{ nullptr } {}

User::User(const User% u) : _username{ u._username } {}

User::User(System::String^ userName) : _username{ userName } {}

User::~User()
{
	if (_username)
		delete _username;
}

System::String^ User::username()
{ 
	return _username; 
}
