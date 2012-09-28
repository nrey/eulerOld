#include"eu0223.h"

#include"principal.h"

void eu0223 :: solucion(){
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


void eu0223 :: printsolution(){
	cout << "Euler 0223\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
