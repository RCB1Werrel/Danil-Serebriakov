#include <iostream>
#include <string.h>

using namespace std;


template<class K, class V>
class NoteBook
{
	class List
	{
	public:
		K key;
		V value;
		Lines() {}
		Lines(K key, V value)
		{
			this->key = key;
			this->value = value;
		}
	};
	int listSize = 0;
	Lines** array;
	void IncreaseArraySize()
	{
		Lines** newArray = new Lines * [listSize + 1];
		for (int i = 0; i < listSize; i++)
			newArray[i] = array[i];
		array = newArray;
	};
	int main()
	{

	}