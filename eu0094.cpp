#include"eu0094.h"

#include"principal.h"

void eu0094 :: solucion(){
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


void eu0094 :: printsolution(){
	cout << "Euler 0094\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
