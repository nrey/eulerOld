#include"eu0139.h"

#include"principal.h"

void eu0139 :: solucion(){
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


void eu0139 :: printsolution(){
	cout << "Euler 0139\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
