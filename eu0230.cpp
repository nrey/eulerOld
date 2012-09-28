#include"eu0230.h"

#include"principal.h"

void eu0230 :: solucion(){
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


void eu0230 :: printsolution(){
	cout << "Euler 0230\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
