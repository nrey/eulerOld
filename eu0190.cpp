#include"eu0190.h"

#include"principal.h"

void eu0190 :: solucion(){
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


void eu0190 :: printsolution(){
	cout << "Euler 0190\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
