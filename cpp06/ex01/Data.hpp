#ifndef DATA_HPP
# define DATA_HPP

class Data {
	public:
		Data();
		Data(int a, int b);
		Data& operator=(Data const &ref);
		Data(Data const &ref);
		~Data();

	private:
		int	_a;
		int	_b;
};

#endif