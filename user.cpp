#include "user.h"

User::User() : username{ nullptr }, password{ nullptr } {}

User::User(const User% u) : username{ u.username }, password{ u.password } {}

User::User(System::String^ n, System::String^ p) : username{ n }, password{ p } {}

User::~User()
{
	if (username)
		delete username;
	if (password)
		delete password;
}