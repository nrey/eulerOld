#include"eu0345.h"

#include"principal.h"

void eu0345 :: solucion(){
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


void eu0345 :: printsolution(){
	cout << "Euler 0345\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
