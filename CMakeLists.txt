cmake_minimum_required(VERSION 3.22)
project(test2710)
include_directories(
        src/include
        src
        /boost
)
#https://www.boost.org/doc/libs/1_54_0/libs/log/doc/html/log/rationale/namespace_mangling.html
#https://www.boost.org/doc/libs/1_54_0/libs/log/doc/html/log/installation/config.html
add_definitions(-DBOOST_ALL_DYN_LINK)
link_directories(/boost/stage/lib/)
link_directories(/opt/postgredb-16/lib/)

#link_directories(/boost/stage/lib)
# https://github.com/boostorg/log/issues/46
#find_library(loglib libboost_log.a /boost/stage/lib)
#target_link_libraries(Boost::log INTERFACE loglib)
set(CMAKE_CXX_STANDARD 14)

add_executable(test2710 main.cpp src/TestAvva.cpp src/TestAvva.h src/WebServer.cpp src/WebServer.h)
target_link_libraries(test2710 pq boost_program_options   boost_iostreams boost_system boost_thread pthread)
#target_link_libraries(test2710 boost_program_options boost_log boost_log_setup boost_iostreams boost_system boost_thread pthread)