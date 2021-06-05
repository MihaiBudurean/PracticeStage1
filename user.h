#pragma once
#include<cliext/list>

ref class User
{
	System::String^ _username;
public:
	User();
	User(const User%);
	User(System::String^);
	~User();
	System::String^ username();
};
