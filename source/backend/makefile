Event_Planner: main.o Event.o User.o Record.o Executive.o
	g++ -L "./lib/" -l boost_system -l boost_date_time -l boost_filesystem -g -Wall -std=c++11 main.o Event.o User.o Record.o Executive.o -o Event_Planner
	
main.o: main.cpp
	g++ -I"./include/" -L"./lib/" -g -Wall -std=c++11 -c main.cpp
	
Event.o: Event.cpp
	g++ -I"./include/" -L"./lib/" -g -Wall -std=c++11 -c Event.cpp
	
User.o: User.cpp
	g++ -I"./include/" -L"./lib/" -g -Wall -std=c++11 -c User.cpp
	
Record.o: Record.cpp
	g++ -I"./include/" -L"./lib/" -g -Wall -std=c++11 -c Record.cpp

Executive.o: Executive.cpp
	g++ -I"./include/" -L"./lib/" -g -Wall -std=c++11 -c Executive.cpp

clean:
	rm *.o Event_Planner
