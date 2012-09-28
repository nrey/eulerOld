#include"eu0340.h"

#include"principal.h"

void eu0340 :: solucion(){
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


void eu0340 :: printsolution(){
	cout << "Euler 0340\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
