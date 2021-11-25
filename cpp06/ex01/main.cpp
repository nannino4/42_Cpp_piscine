#include <string>
#include <iostream>

struct Data
{
	std::string	important_string;
	int			important_number;
};

uintptr_t	serialize(Data *data_ptr)
{
	return (reinterpret_cast<uintptr_t>(data_ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main(void)
{
	Data		*data_ptr = new (Data);
	uintptr_t	raw = 0;

	data_ptr->important_string = "Ciao, sono importante";
	data_ptr->important_number = 3;

	std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	std::cout << std::endl;
	std::cout << "INITIAL VALUES:" << std::endl;
	std::cout << "............................................." << std::endl;
	std::cout << "data_ptr: " << data_ptr << std::endl;
	std::cout << "raw: " << raw << std::endl;
	std::cout << "............................................." << std::endl;
	std::cout << "data_ptr->important_string: " << data_ptr->important_string << std::endl;
	std::cout << "data_ptr->important_number: " << data_ptr->important_number << std::endl;
	std::cout << std::endl;
	std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;

	raw = serialize(data_ptr);
	data_ptr = deserialize(raw);

	std::cout << std::endl;
	std::cout << "VALUES AFTER SERIALIZATION AND DESERIALIZATION:" << std::endl;
	std::cout << "............................................." << std::endl;
	std::cout << "data_ptr: " << data_ptr << std::endl;
	std::cout << "raw: " << raw << std::endl;
	std::cout << "............................................." << std::endl;
	std::cout << "data_ptr->important_string: " << data_ptr->important_string << std::endl;
	std::cout << "data_ptr->important_number: " << data_ptr->important_number << std::endl;
	std::cout << std::endl;
	std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;

	delete (data_ptr);
}
