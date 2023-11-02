//
// Created by AvvakumovAS on 27.10.2023.
//


#include "TestAvva.h"
using std::this_thread::sleep_for;
using std::chrono::seconds;
using namespace std;
TestAvva::TestAvva() = default;

int TestAvva::performThreadTest() {
    return 0;
}
int TestAvva::mkeTop() {
    std::cout<<"Table top is being created ...\n";
    sleep_for(seconds(7));
    std::cout<<" Top done!\n";
    return 0;
}
int TestAvva:: makeLegs(){
    std::cout<<"Table legs are being created ...\n";
    sleep_for(seconds(5));
    std::cout<<" Legs done!\n";
    return 0;
}
