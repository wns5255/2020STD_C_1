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
	// ���縵 Ȯ��
	void Check(const char* k, const char* e)
	{
		for (int i = 0; i < strlen(word); i++)
			{
			if (word[i] != e[i])
			{
				cout << i+1 << "��° ���縵�� Ʋ�Ƚ��ϴ�. �ٽ� �õ��ϼ���." << endl;
				break;
			}
			else
				continue;
			}
		cout << "���縵�� �¾ҽ��ϴ�." << endl;
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
	// ����Ʈ�� �ܾ� �߰�
	void AddWord(Word* new_word)
	{
		wordList[n++] = new_word;
	}
	// ����Ʈ�� �ִ� �ܾ����� ã��
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
		cout << "����Ʈ�� ���� �ܾ��Դϴ�." << endl;
	}
};

int main(void)
{
	WordList list;

	list.AddWord(new Word("apple", "���"));
	list.AddWord(new Word("sky", "�ϴ�"));
	list.AddWord(new Word("pencil", "����"));
	list.AddWord(new Word("book", "å"));
	list.AddWord(new Word("scissor", "����"));
	list.AddWord(new Word("music", "����"));
	list.AddWord(new Word("animal", "����"));
	list.AddWord(new Word("overwatch", "������ġ"));
	list.AddWord(new Word("money", "��"));
	list.AddWord(new Word("school", "�б�"));

	int exit;

	do{
		cout << "���縵�� Ȯ���ϰ� ���� �ܾ��� �ѱ��� ��� ���縵�� �Է��ϼ���." << endl;

		char kor[10];
		char eng[20];
		cin >> kor >> eng;
		
		list.FindWord(kor, eng);
		
		cout << "���α׷��� �����ϰ� ������ 0, ����Ϸ��� 1�� �Է��ϼ���." << endl;
		cin >> exit;

	} while (exit);

	return 0;
}