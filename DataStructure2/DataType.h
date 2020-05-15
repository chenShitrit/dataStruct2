#pragma once
class DataType
{
public:
	DataType();
	~DataType();
	int getId();

private:
	int m_id;
	char* m_firstName;
	char* m_lastName;
};

