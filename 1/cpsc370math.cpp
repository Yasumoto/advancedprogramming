#include "HelloWorld.h"

HelloWorld::HelloWorld(std::string name){
    m_name = name;
}

void HelloWorld::sayHello(){
    std::cout << "Hello " << m_name << "!" << std::endl;
}
