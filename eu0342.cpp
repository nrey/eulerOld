#include"eu0342.h"

#include"principal.h"

void eu0342 :: solucion(){
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


void eu0342 :: printsolution(){
	cout << "Euler 0342\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
