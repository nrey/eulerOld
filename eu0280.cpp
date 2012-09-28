#include"eu0280.h"

#include"principal.h"

void eu0280 :: solucion(){
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


void eu0280 :: printsolution(){
	cout << "Euler 0280\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
