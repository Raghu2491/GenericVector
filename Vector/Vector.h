#include<iostream>
template <typename T>
class vectorClass
{
private:
	int n; //# elements in vector
	int capacity; //size of lowlevel array
	T* elem;
	
public:
	vectorClass() :capacity(10), n(0)
	{
		elem = new T[capacity];
	}

	/*void pushback(T val);
	void increase_capacity(T sz);
	void print();
	void popback();
	void insert_atposition_value(int pos, T val);

	T& operator[](int pos);
*/
	//const int& operator[](int pos)const;
	void pushback(T val)
	{
		if (n >= capacity)
			increase_capacity(2 * capacity);

		elem[n] = val;
		n++;
	}

	void increase_capacity(T sz)
	{
		if (sz <= capacity)
			return;
		int *p = new T[sz];
		for (int i = 0; i < n; i++)
			p[i] = elem[i];
		capacity = sz;
		delete[] elem;

		elem = p;
	}

	void print()
	{
		for (int i = 0; i < n; i++)
			std::cout << elem[i];
	}

    void popback()
	{
		elem[n - 1] = 0;
		n--;
	}

	void insert_atposition_value(int pos, T val)
	{
		if (pos > capacity)
			std::cout << "Out of Bounds \n";
		pushback(0);

		for (int j = n - 1; j >= pos; --j)
			elem[j] = elem[j - 1];

		elem[pos] = val;

	}

	T & operator[](int pos)
	{
		// TODO: insert return statement here
		return elem[pos];
	}


};
