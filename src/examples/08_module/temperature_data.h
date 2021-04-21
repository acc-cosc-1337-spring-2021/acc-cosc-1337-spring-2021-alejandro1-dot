//temperature_data.h
#ifndef TEMERATURE_DATA_H
#define TEMERATURE_DATA_H
#include "temperature.h"
#include<fstream>
#include<string>

#include<vector>

class TemperatureData
{
    public:
    void save_temps(std::vector<Temperature>& temps)

    private:
    const std::string file_name{"temperature.dat"}
}