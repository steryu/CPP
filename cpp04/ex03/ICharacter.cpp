#include "ICharacter.hpp"

ICharacter::ICharacter(){
	std::cout << " Default ICharacter constructor called" << std::endl;
}

ICharacter::~ICharacter(){
	std::cout << "ICharacter destroyed" << std::endl;
}

ICharacter::ICharacter(const ICharacter &other){
	*this = other;
	std::cout << "ICharacter copied" << std::endl;
}

// ICharacter& ICharacter::operator=(const ICharacter &other){
// 	return(*this);
// 	std::cout << "ICharacter copied using an assignment" << std::endl;
// }

