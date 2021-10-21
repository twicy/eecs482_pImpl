#include <iostream>
#include "HelloWorld.h"
#include "HelloWorldImpl.h"

void HelloWorld::HelloWorldImpl::hello() {
       // increment the count of how many times hello() has been called on this instance
       // print hello world and the current count]
       counter++;
       std::cout << "hello world " << counter << std::endl;
}
