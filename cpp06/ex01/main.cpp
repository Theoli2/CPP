#include "Serializer.hpp"

int main()
{
	Data* data1 = new Data;
	
	data1->setName("T");
	uintptr_t serialized_data1 = Serializer::serialize(data1);
	Data* deserialized_data1 = Serializer::deserialize(serialized_data1);	
	std::cout << "Serialized user\t\t" << serialized_data1 << std::endl;
	std::cout << "Deserialized user\t" << deserialized_data1 << std::endl;
	std::cout << "User 1 address\t\t" << &data1 << std::endl;
	if (data1 == deserialized_data1)
		std::cout << "&data1 == deserialized_data1, worked fine" << std::endl;
	else
		std::cout << "&data1 != deserialized_data1, fail" << std::endl;
	std::cout << "deserialized name: " << deserialized_data1->getName() << std::endl;
	return (0);
}