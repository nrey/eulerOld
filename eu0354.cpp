#include"eu0354.h"

#include"principal.h"

void eu0354 :: solucion(){
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


void eu0354 :: printsolution(){
	cout << "Euler 0354\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
