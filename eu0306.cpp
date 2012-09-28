#include"eu0306.h"

#include"principal.h"

void eu0306 :: solucion(){
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


void eu0306 :: printsolution(){
	cout << "Euler 0306\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
