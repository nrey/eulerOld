#include"eu0182.h"

#include"principal.h"

void eu0182 :: solucion(){
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


void eu0182 :: printsolution(){
	cout << "Euler 0182\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
