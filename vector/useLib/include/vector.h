#ifndef FUNC
#define FUNC

class vector {
	private:
		int * arr;
		int size;
		int capacity;
	public:
		vector();
		vector(int);
		~vector();
		void push_back(int);
		void push_front(int);
		int get_size() const;
		int get_capacity() const;
		void erase(int);
		void insert(int, int);
		int operator [] (int);
		vector operator = (const vector&);
};

#endif
