#include"eu0357.h"

#include"principal.h"

void eu0357 :: solucion(){
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


void eu0357 :: printsolution(){
	cout << "Euler 0357\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
