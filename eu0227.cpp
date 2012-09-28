#include"eu0227.h"

#include"principal.h"

void eu0227 :: solucion(){
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


void eu0227 :: printsolution(){
	cout << "Euler 0227\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
