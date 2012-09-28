#include"eu0121.h"

#include"principal.h"

void eu0121 :: solucion(){
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


void eu0121 :: printsolution(){
	cout << "Euler 0121\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
