#include <iostream>
#include <vector>
#include <array>
#include <filesystem>
#include <string>
#include <random>

#include "CAT9555.hpp"

#include<unistd.h> //TODO remove (useless library?)

int main() {
	std::string mraa_name = mraa::getVersion();
	std::cout<<mraa_name<<std::endl;
	
	std::string mraa_platform_name = mraa::getPlatformName();
	std::cout<<mraa_platform_name<<std::endl;
	
	mraa::Platform mraa_platform = mraa::getPlatformType();
	std::cout<<mraa_platform<<std::endl;

	std::cout<<"number pins: "<<mraa::getI2cBusCount()<<std::endl;

	for (int i=0;i<10;i++) {
		std::cout<<mraa::getI2cBusId(i)<<std::endl;
	}
	std::cout<<"was mraa initialized? "<<mraa::init()<<std::endl;

  std::cout<<"1"<<std::endl;
  CAT9555 cat000 = CAT9555(0b00100000);
  std::cout<<"2"<<std::endl;
  //CAT9555 cat001 = CAT9555(0b00100001);

  while (true) {
    cat000.update();
    //cat001.update();
    unsigned int microsecond = 500000;
    usleep(microsecond);//sleeps for 3 second
  }
}
