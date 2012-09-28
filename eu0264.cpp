#include"eu0264.h"

#include"principal.h"

void eu0264 :: solucion(){
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


void eu0264 :: printsolution(){
	cout << "Euler 0264\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
