#include"eu0359.h"

#include"principal.h"

void eu0359 :: solucion(){
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


void eu0359 :: printsolution(){
	cout << "Euler 0359\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
