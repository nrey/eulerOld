#include"eu0057.h"

#include"principal.h"

void eu0057 :: solucion(){
	// ---------------------------------------------------- //
	tstart = (double)clock()/CLOCKS_PER_SEC;
	// ---------------------------------------------------- //
	
	output = 0;
	
	// ---------------------------------------------------- //
	
	infivar_1 = new infinite_precition(9999);
	infivar_2 = new infinite_precition(9999);
	infivar_3 = new infinite_precition(9999);

	infivar_1->setvalue(1); // num
	infivar_2->setvalue(1); // den
	temp_3 = 0;
	for( unsigned long long i=0; i<1000; i++ ){
		infivar_1->copyto(infivar_3);
		infivar_1->mul(infivar_2,2);
		infivar_1->add(infivar_1,infivar_3);
		infivar_2->add(infivar_2,infivar_3);
		
		temp_1 = infivar_1->numdig( );
		temp_2 = infivar_2->numdig( );
		
		if( temp_1 > temp_2 ){
			temp_3++;
		}
	}
	
	output = temp_3;
	
	// ---------------------------------------------------- //
	tstop = (double)clock()/CLOCKS_PER_SEC;
	ttime= tstop-tstart;
	// ---------------------------------------------------- //
}


void eu0057 :: printsolution(){
	cout << "Euler 0057\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
