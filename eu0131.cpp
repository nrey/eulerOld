#include"eu0131.h"

#include"principal.h"

void eu0131 :: solucion(){
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


void eu0131 :: printsolution(){
	cout << "Euler 0131\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
