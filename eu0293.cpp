#include"eu0293.h"

#include"principal.h"

void eu0293 :: solucion(){
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


void eu0293 :: printsolution(){
	cout << "Euler 0293\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
