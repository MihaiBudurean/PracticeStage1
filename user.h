#pragma once
#include<cliext/list>

ref class User
{
	System::String^ username;
	System::String^ password;
	cliext::list<int> tasks;
public:
	User();
	User(const User%);
	User(System::String^, System::String^);
	~User();
};