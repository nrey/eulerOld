#include"eu0249.h"

#include"principal.h"

void eu0249 :: solucion(){
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


void eu0249 :: printsolution(){
	cout << "Euler 0249\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
