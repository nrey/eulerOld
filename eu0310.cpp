#include"eu0310.h"

#include"principal.h"

void eu0310 :: solucion(){
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


void eu0310 :: printsolution(){
	cout << "Euler 0310\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
