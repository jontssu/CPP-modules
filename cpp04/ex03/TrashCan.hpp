#ifndef TRASHCAN_HPP
# define TRASHCAN_HPP

#include "AMateria.hpp"

class TrashCan {
	private:
		AMateria* _materia;
		TrashCan* _next;

		TrashCan(TrashCan const &ref);
		TrashCan& operator=(TrashCan const &ref);
	public:
		void push(AMateria* ref);

		TrashCan();
		TrashCan(AMateria* ref);
		~TrashCan();
};

#endif