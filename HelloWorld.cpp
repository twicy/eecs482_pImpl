#include "HelloWorld.h"
#include "HelloWorldImpl.h"

HelloWorld::HelloWorld() {
   pImpl = new HelloWorld::HelloWorldImpl();
   // allocate an instance of HelloWorldImpl and remember its address in pImpl
}

HelloWorld::~HelloWorld() {
   delete pImpl;
   // delete the instance of HelloWorldImpl that you allocated above
}
       
void HelloWorld::speak() {
   // call your impl's hello() function 
   pImpl->hello();
}
