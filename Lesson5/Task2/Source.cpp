#include <iostream>
#include <string>

using namespace std;

static string reverse_words(string word_string);

int main()
{
	//string sentence = "blah blah blah";
	string sentence = "Do or do not, there is no try";

	cout << "Please enter a short sentence:\n";

	//getline(cin, sentence);
	cout << sentence + '\n';

	string reversed_words = reverse_words(sentence);

	cout << reversed_words;

	string expected = "try no is there ,not do or Do";

	if (reversed_words == expected)
	{
		cout << "Equal! :(";
	}
	else
	{
		cout << "Not equal! :(";
	}

	return 0;
}

string reverse_words(string word_string)
{
	string result;

	int length = word_string.length();

	int left = 0;
	int right = 0;

	while (right <= length)
	{
		char current = word_string[right];

		if ((current == ' ') || (right == length))
		{
			string word = word_string.substr(left, right - left);

			result = word + result;

			if (current == ' ')
			{
				result = ' ' + result;
			}

			left = right + 1;
		}

		right++;
	}

	return result;
}

//string reverse_words(string word_string)
//{
//	string result;
//
//	int length = word_string.length();
//
//	int left = 0;
//	int right = 0;
//
//	while (right <= length)
//	{
//		char current = word_string[right];
//
//		if ((current == ' ') || (right == length))
//		{
//			string reversed_word;
//			string word = word_string.substr(left, right - left);
//
//			int word_length = word.length();
//
//			for (int i = word_length - 1; i >= 0; i--)
//			{
//				reversed_word += word[i];
//			}
//
//			result += reversed_word;
//
//			if (current == ' ')
//			{
//				result += ' ';
//			}
//
//			left = right + 1;
//		}
//
//		right++;
//	}
//
//	return result;
//}