#include"eu0118.h"

#include"principal.h"

void eu0118 :: solucion(){
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


void eu0118 :: printsolution(){
	cout << "Euler 0118\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
