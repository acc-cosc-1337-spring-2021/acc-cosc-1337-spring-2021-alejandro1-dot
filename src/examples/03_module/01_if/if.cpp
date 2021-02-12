//write include statement for if header



//write code for the is_even function that returns true if num is even, false otherwise


//write code for function named overtime that accepts a double hours and returns true if 
//hours over 40, false otherwise



bool is_in_range_1_to_10(int num)
{
    return num >= 1 && num <= 10;
}

bool is_not_in_range_1_to_10(int num) //and
{
    return (!(num >= 1 && num <= 10));
}

// TEsting Numbers less than 1 and greater than 10

bool is_not_in_range_1_to_10_OR(int num);
{
    return num < 1 || num > 10;
}

bool is_char_a_consonant(char c)
{
    return (!(c = 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'));
}
