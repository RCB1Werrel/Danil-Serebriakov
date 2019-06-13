#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;


template<class K, class V>
class t_collection
{

	public:
		K key;
		V value;
		element() {}
		element(K key, V value)
		{
			this->key = key;
			this->value = value;
		}
	

	int sizeCollection = 0;
	element** array;
	void IncreaseArraySize()
	{
		element** newArray = new element * [sizeCollection + 1];
		for (int i = 0; i < sizeCollection) {
			newArray[i] = array[i];
			i = i + 1;
		}
		array = newArray;
	}
	void DecreaseArraySize()
	{
		element** newArray = new element * [sizeCollection - 1];
		for (int i = 0; i < sizeCollection - 1) {
			newArray[i] = array[i];
			i = i + 1;
		}
		array = newArray;
	}

	t_collection()
	{
		sizeCollection = 0;
		array = new element * [sizeCollection];
		for (int i = 0; i < sizeCollection; i++)
		{
			array[i] = new CollectionElem();
		}
	}
	int get_size()
	{
		return sizeCollection;
	}
	void add_value(V value, K key)
	{
		for (int i = 0; i < sizeCollection)
		{
			
			if (key == array[i]->key)
				array[i]->value = value;
			i = i + 1;
		}
	}
	friend istream& operator >> (istream& inp, t_collection& inst)
	{
			K key;
			V* value = new V;
			inp >> key;
			inp >> *value;
			inst.Add(key, *value);
		return inp;
	}
	friend istream& operator >> (ostream& out, t_collection& inst)

	int main()
	{

	}