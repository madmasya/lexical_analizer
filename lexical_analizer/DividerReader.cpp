#include "DividerReader.h"

std::set<std::string> DividerReader(const char* dividersFileName)
{
	std::ifstream dividersFile; // ���� � �������������
	std::string str; // ������ ��� ���������� �� �����
	std::set<std::string> dividersSet; // ��� ������������ 
 	
	dividersFile.open(dividersFileName);
	
	while (std::getline(dividersFile, str))
		dividersSet.insert(str); // ���������� ����
	dividersFile.close();

	return dividersSet;
}