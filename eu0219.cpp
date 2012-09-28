#include"eu0219.h"

#include"principal.h"

void eu0219 :: solucion(){
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


void eu0219 :: printsolution(){
	cout << "Euler 0219\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
