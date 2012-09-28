#include"eu0066.h"

#include"principal.h"

void eu0066 :: solucion(){
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


void eu0066 :: printsolution(){
	cout << "Euler 0066\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
