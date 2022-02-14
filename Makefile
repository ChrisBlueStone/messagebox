messagebox.exe: main.cpp
	$(CXX) -o messagebox.exe main.cpp -O2 -s -mwindows
