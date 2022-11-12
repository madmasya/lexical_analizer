#include "KeywordReader.h"

std::set<std::string> KeywordReader(const char* keywordsFileName)
{
	std::ifstream keywordsFile; // ���� � ��������� �������
	std::string str; // ������ ��� ���������� �� �����
	std::set<std::string> keywordsSet; // ��� �������� ����

	keywordsFile.open(keywordsFileName);

	while (std::getline(keywordsFile, str))
		keywordsSet.insert(str); // ���������� ����
	keywordsFile.close();

	return keywordsSet;
}