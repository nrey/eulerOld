#include"eu0077.h"

#include"principal.h"

void eu0077 :: solucion(){
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


void eu0077 :: printsolution(){
	cout << "Euler 0077\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
