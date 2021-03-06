#pragma once
#include "City.hpp"
#include <map>

typedef enum Color
{
    Blue,
    Yellow,
    Black,
    Red

} Color;

const std::map<City, Color> _city_color{
    {Algiers, Black},
    {Atlanta, Blue},
    {Baghdad, Black},
    {Bangkok, Red},
    {Beijing, Red},
    {Bogota, Yellow},
    {BuenosAires, Yellow},
    {Cairo, Black},
    {Chennai, Black},
    {Chicago, Blue},
    {Delhi, Black},
    {Essen, Blue},
    {HoChiMinhCity, Red},
    {HongKong, Red},
    {Istanbul, Black},
    {Jakarta, Red},
    {Johannesburg, Yellow},
    {Karachi, Black},
    {Khartoum, Yellow},
    {Kinshasa, Yellow},
    {Kolkata, Black},
    {Lagos, Yellow},
    {Lima, Yellow},
    {London, Blue},
    {LosAngeles, Yellow},
    {Madrid, Blue},
    {Manila, Red},
    {MexicoCity, Yellow},
    {Miami, Yellow},
    {Milan, Blue},
    {Montreal, Blue},
    {Moscow, Black},
    {Mumbai, Black},
    {NewYork, Blue},
    {Osaka, Red},
    {Paris, Blue},
    {Riyadh, Black},
    {SanFrancisco, Blue},
    {Santiago, Yellow},
    {SaoPaulo, Yellow},
    {Seoul, Red},
    {Shanghai, Red},
    {StPetersburg, Blue},
    {Sydney, Red},
    {Taipei, Red},
    {Tehran, Black},
    {Tokyo, Red},
    {Washington, Blue}};

inline std::string color_to_string(Color c)
{

    switch (c)
    {
    case Blue:
        return "Blue";
        break;
    case Yellow:
        return "Yellow";
        break;
    case Black:
        return "Black";
        break;
    case Red:
        return "Red";
        break;
    }
}