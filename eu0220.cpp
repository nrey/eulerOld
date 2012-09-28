#include"eu0220.h"

#include"principal.h"

void eu0220 :: solucion(){
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


void eu0220 :: printsolution(){
	cout << "Euler 0220\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
