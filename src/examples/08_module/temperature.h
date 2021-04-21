//temperature.h

void write_to_file();

void read_from_file();


#ifndef TERMPERATURE_H
#define TERMPERATURE_H

class Tempertature
{
    public:
        Tempertature(int h, double r) : hour(h), reading(r){}
        int get_hours()const(return hour;)
        double get_reading()const(return reading)
        
    private:
    int hours;
    double reading;

}

#endif