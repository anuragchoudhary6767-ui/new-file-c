#include <iostream>
using namespace std;
class car{ 
    public:
    void accelarate (){
    cout<<"car is a accelerate";
    }
    void stop (){
        cout<<"car is stopped";
    }
};
class driver{
    public:
    void control_car (car&car,string s){
    if(s=="accelarate")
    car.accelarate();
    else if (s=="stop")
    car.stop();
    else 
    cout<<"invailide massage";
 }
};
int main()
{
    driver d;
    car c;
    d.control_car(c,"accelerate");
    d.control_car(c,"stop");
}