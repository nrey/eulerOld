#include"eu0224.h"

#include"principal.h"

void eu0224 :: solucion(){
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


void eu0224 :: printsolution(){
	cout << "Euler 0224\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
