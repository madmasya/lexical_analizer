#pragma once
#include <iostream>
#include <string>
#include <set>
#include <vector>

#include "Token.h"
using namespace std;
class Parser {
public:
	void Parser_prog(string, set<string>, set<string>);	//��� ������
	void Write();	//����� �������
	vector<Token> token;	//������ �������
	bool Is_digit(string);
	bool Is_digit(char);
	vector<Token> tab_id;
	vector<Token> tab_co;
	void Set_id(Token);
	void Set_co(Token);
	void Push_back(string, string, int, int);
	void Find_Error(Token);
};