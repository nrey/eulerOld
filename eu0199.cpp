#include"eu0199.h"

#include"principal.h"

void eu0199 :: solucion(){
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


void eu0199 :: printsolution(){
	cout << "Euler 0199\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
