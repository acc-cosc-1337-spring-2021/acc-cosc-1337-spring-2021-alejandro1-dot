#include "temperature.h"
#include "temperature_data.h"


int main() 
{
	/*
	write_to_file();
	read_from_file();
	*/

	std::vector<Tempertature> out_temps
	{
		Tempertature(1, 98.9), Tempertature(2, 99.5), Tempertature(3, 99.1), 
		Tempertature(4, 99.6), Tempertature(5, 99), Tempertature(6, 99.7)

	};

	TemperatureData data;
	std::cout<<"save vector to file \n";
	data.save_temps(out_temps);

	std::cout<<"read File and recreate the vector";

	std::vector<Tempertature> in_temps = data.get_temps();

	for(auto temp: in_temps)
	{
		std::cout<<temp.get_hours()<<" "<<temp.get_reading()<<"\n";
	}
	return 0;
}