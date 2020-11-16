#include <iostream>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

class Word
{
	friend class WordList;
private:
	char* word;
	char* meaning;
public:
	Word(const char* w, const char* m)
	{
		word = new char[strlen(w) + 1];
		strcpy(word, w);
		meaning = new char[strlen(m) + 1];
		strcpy(meaning, m);
	}
	// 스펠링 확인
	void Check(const char* k, const char* e)
	{
		for (int i = 0; i < strlen(word); i++)
			{
			if (word[i] != e[i])
			{
				cout << i+1 << "번째 스펠링이 틀렸습니다. 다시 시도하세요." << endl;
				break;
			}
			else
				continue;
			}
		cout << "스펠링이 맞았습니다." << endl;
	}
	void ShowWord()
	{
		cout << word << ", " << meaning << endl;
	}
};

class WordList
{
private:
	Word* wordList[10];
	int n;
public:
	WordList() : n(0)
	{}
	// 리스트에 단어 추가
	void AddWord(Word* new_word)
	{
		wordList[n++] = new_word;
	}
	// 리스트에 있는 단어인지 찾기
	void FindWord(const char* k, const char* e)
	{
		for (int i = 0; i < 10; i++)
		{
			if (!strcmp(k, wordList[i]->meaning))
			{
				wordList[i]->Check(k, e);
				return;
			}
		}
		cout << "리스트에 없는 단어입니다." << endl;
	}
};

int main(void)
{
	WordList list;

	list.AddWord(new Word("apple", "사과"));
	list.AddWord(new Word("sky", "하늘"));
	list.AddWord(new Word("pencil", "연필"));
	list.AddWord(new Word("book", "책"));
	list.AddWord(new Word("scissor", "가위"));
	list.AddWord(new Word("music", "음악"));
	list.AddWord(new Word("animal", "동물"));
	list.AddWord(new Word("overwatch", "오버워치"));
	list.AddWord(new Word("money", "돈"));
	list.AddWord(new Word("school", "학교"));

	int exit;

	do{
		cout << "스펠링을 확인하고 싶은 단어의 한국어 뜻과 스펠링을 입력하세요." << endl;

		char kor[10];
		char eng[20];
		cin >> kor >> eng;
		
		list.FindWord(kor, eng);
		
		cout << "프로그램을 종료하고 싶으면 0, 계속하려면 1을 입력하세요." << endl;
		cin >> exit;

	} while (exit);

	return 0;
}