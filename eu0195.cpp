#include"eu0195.h"

#include"principal.h"

void eu0195 :: solucion(){
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


void eu0195 :: printsolution(){
	cout << "Euler 0195\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
