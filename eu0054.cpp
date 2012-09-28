#include"eu0054.h"

#include"principal.h"

void eu0054 :: solucion(){
	// ---------------------------------------------------- //
	tstart = (double)clock()/CLOCKS_PER_SEC;
	// ---------------------------------------------------- //
	
	output = 0;
	
	// ---------------------------------------------------- //
	
	
	
	// ---------------------------------------------------- //
	tstop = (double)clock()/CLOCKS_PER_SEC;
	ttime= tstop-tstart;
	// ---------------------------------------------------- //
}


void eu0054 :: printsolution(){
	cout << "Euler 0054\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
