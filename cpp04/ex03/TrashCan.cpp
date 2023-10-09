#include "TrashCan.hpp"

void TrashCan::push(AMateria* ref) {
	if (!_materia) {
		_materia = ref;
		return;
	}
	TrashCan* tmp;
	tmp = this;
	while (tmp->_next != NULL)
		tmp = _next;
	tmp->_next = new TrashCan(ref);
}

TrashCan::TrashCan() {
	_materia = NULL;
	_next = NULL;
}

TrashCan::TrashCan(AMateria* ref) {
	_materia = ref;
	_next = NULL;
}

TrashCan::~TrashCan() {
	if (_materia != NULL)
		delete _materia;
	if (_next != NULL)
		delete _next;
}