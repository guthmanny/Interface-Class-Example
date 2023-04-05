circle: circle_impl.o circle_manager.o main.o 
	clang++ -std=c++11 circle_impl.o circle_manager.o main.o -o circle
circle_manager.o: circle_manager.cpp
	clang++ -std=c++11 -c circle_manager.cpp
circle_impl.o: circle_impl.cpp
	clang++ -std=c++11 -c circle_impl.cpp
main.o: main.cpp
	clang++ -std=c++11 -c main.cpp
	
