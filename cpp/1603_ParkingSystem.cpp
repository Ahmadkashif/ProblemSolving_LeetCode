#include <iostream>

using namespace std;

// class ParkingSystem
// {
// private:
//     int bigCapacity, mediumCapacity, smallCapacity;

// public:
//     ParkingSystem()
//     {
//         this->bigCapacity = 0;
//         this->mediumCapacity = 0;
//         this->smallCapacity = 0;
//     }

//     ParkingSystem(int big, int medium, int small)
//     {
//         this->bigCapacity = big;
//         this->mediumCapacity = medium;
//         this->smallCapacity = small;
//     }

//     bool addCar(int carType)
//     {
//         switch (carType)
//         {
//         case 1:
//             this->bigCapacity--;
//             return this->bigCapacity >= 0;
            
//         case 2:
//             this->mediumCapacity--;
//             return this->mediumCapacity >= 0;
            
//         case 3:
//             this->smallCapacity--;
//             return this->smallCapacity >= 0;
            
//         default:
//             return false;
//         }
//     }
// };

class ParkingSystem
{
private:
    int capacity;

public:
    ParkingSystem()
    {
        this->capacity = new int[](3);
    }

    ParkingSystem(int big, int medium, int small)
    {
        this->capacity[big] = big;
        this->capacity[medium] = medium;
        this->capacity[small] = small;
    }

    bool addCar(int carType)
    {
        this->capacity[carType]--;
        return this->capacity[carType] >= 0;
    }
};
