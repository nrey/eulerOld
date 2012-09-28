#include"eu0129.h"

#include"principal.h"

void eu0129 :: solucion(){
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


void eu0129 :: printsolution(){
	cout << "Euler 0129\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
