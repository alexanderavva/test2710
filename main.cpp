#define BOOST_LOG_DYN_LINK 1 #defined before log headers
#include <iostream>
#include <boost/program_options.hpp>
#include <thread>
#include <chrono>
#include "src/TestAvva.h"
#include "src/WebServer.h"
//#include <boost/log/trivial.hpp>
//#include <boost/log/core/record.hpp>
//#include <boost/log/detail/config.hpp>

namespace po = boost::program_options;
using std::this_thread::sleep_for;
using std::chrono::seconds;
using namespace std;
using namespace alwebsrv;

int main() {

//    BOOST_LOG_TRIVIAL(trace) << "A trace severity message";
//    BOOST_LOG_TRIVIAL(debug) << "A debug severity message";
//    BOOST_LOG_TRIVIAL(info) << "An informational severity message";
//    BOOST_LOG_TRIVIAL(warning) << "A warning severity message";
//    BOOST_LOG_TRIVIAL(error) << "An error severity message";
//    BOOST_LOG_TRIVIAL(fatal) << "A fatal severity message";
    unsigned int n = std::thread::hardware_concurrency();
    std::cout << n << " concurrent threads are supported.\n";
    int temp=1;

    TestAvva m_s;
  // int a= m_s.mkeTop()  ;
     std::thread carpenter1(&TestAvva::mkeTop,&m_s);
    std::thread carpenter2(&TestAvva::makeLegs ,&m_s);
    //std::thread carpenter2(MakeLegs);
    // Declare the supported options.
    po::options_description desc("Allowed options");
    desc.add_options()
            ("help", "produce help message")
            ("compression", po::value<int>(), "set compression level")
            ;
    WebServer webServer;
    std::cout << "webServer.startSrv!\n\r" << std::endl;
   int retStart= webServer.startSrv(8888);
    std::cout << "webServer.End startSrv !\n\r" << std::endl;
if (carpenter1.joinable()) carpenter1.join();
    if (carpenter2.joinable()) carpenter1.join();
temp++;
    std::cout << "Hello, World Фммф555!\n\r" << std::endl;
    return 0;
}
