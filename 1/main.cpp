#include "HelloWorld.h"

int main(int argc, char** argv){
    int status = 0;
    if(argc < 2){
        std::cout << "You need to provide a name!\n";
        status = -1;
    } else{
        std::string name(argv[1]);
        HelloWorld hw(name);
        hw.sayHello();
    }
    return status;
}
