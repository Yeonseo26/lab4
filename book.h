#pragma once
#include <iostream>
#include <cstdlib>

namespace KwonYeonseo2649004
{
    class book
    {
        int id; // id: 1~1000
        int price; // price: 0~50000

        void testID()
        {
            if(id < 1 || id > 1000)
            {
                std::cout << "Invalid book id\n";
                std::exit(1);
            }
        }

        void testPrice()
        {
            if(price < 0 || price > 50000)
            {
                std::cout << "Invalid book price\n";
                std::exit(1);
            }
        }

    public:
        void input()
        {
            std::cout << "Enter book id: ";
            std::cin >> id;
            testID();
            std::cout << "Enter book price: ";
            std::cin >> price;
            testPrice();
        }

        void setID(int value)
        {
            id = value;
            testID();
        }

        void setPrice(int value)
        {
            price = value;
            testPrice();
        }

        void print()
        {
            std::cout << id << " , " << price << " won\n";
        }

        int getID()
        {
            return id;
        }

        int getPrice()
        {
            return price;
        }
    };
}