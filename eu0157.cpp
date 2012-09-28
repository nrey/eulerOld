#include"eu0157.h"

#include"principal.h"

void eu0157 :: solucion(){
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


void eu0157 :: printsolution(){
	cout << "Euler 0157\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
