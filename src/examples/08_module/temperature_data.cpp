//temperature_data.cpp
#include "temperature_data.h"


    void save_temps(std::vector<Temperature>& temps)
    {
        std::ofstream out_file;
        out_file.open(file_name);

        for(auto temp: temps)
        {
            out_file<<temp.get_hour();
            out_file<< " ";
            out_file<<temp.get_reading();
            out_file<<"\n";
        }
    }

    std::vector<Temperature> TemperatureData::get_temps()
    {
        std::vector<Tempertature> temps;
        in_file.open(file_name);

        if(in_file.is_open())
        {
            while(in_file>>hour>>reading)
            {
                Tempertature temp(hour. reading);
                temps.push_back(temp);

            }
        }

        infile_close();
        return temps; 
    }