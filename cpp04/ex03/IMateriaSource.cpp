#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource(){
	std::cout << "Default IMateriaSource constructor called" << std::endl;
}

IMateriaSource::~IMateriaSource(){
	std::cout << "IMateriaSource destroyed" << std::endl;
}

IMateriaSource::IMateriaSource(const IMateriaSource &other){
	*this = other;
	std::cout << "IMateriaSource copied" << std::endl;
}

void	IMateriaSource::learnMateria(AMateria* materia){
	AMateria* cpy;
	cpy = materia;
}

// IMateriaSource& IMateriaSource::operator=(const IMateriaSource &other){
// 	return(*this);
// 	std::cout << "IMateriaSource copied using an assignment" << std::endl;
// }
