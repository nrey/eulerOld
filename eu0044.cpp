#include"eu0044.h"

#include"principal.h"

void eu0044 :: solucion(){
	// ---------------------------------------------------- //
	tstart = (double)clock()/CLOCKS_PER_SEC;
	// ---------------------------------------------------- //
	
	output = 0;
	tem_1d_1 = new unsigned long long[10000000];
	temp_3 = 999999;
	double nic;
	double nic2;
	
	// ---------------------------------------------------- //
	
	for( unsigned long long i=0; i<6000000; i++ ){
		tem_1d_1[i] = (i+1)*(3*(i+1)-1)/2;
// 		cout<<endl<<"PENT: "<<tem_1d_1[i]<<"	";
		temp_sig_1 = i-1;
		for( long long j=i-1; j>=0; j-- ){
			temp_2 = tem_1d_1[i]-tem_1d_1[j]; // 

			temp_10 = (sqrt(24*(tem_1d_1[i]+tem_1d_1[j])+1)+1)/6;
			nic = (sqrt(24*(tem_1d_1[i]+tem_1d_1[j])+1)+1)/6;
			temp_11 = (sqrt(24*(tem_1d_1[i]-tem_1d_1[j])+1)+1)/6;
			nic2 = (sqrt(24*(tem_1d_1[i]-tem_1d_1[j])+1)+1)/6;
			if( temp_10 != nic || temp_11 != nic2 ){
				continue;
			}
			output = tem_1d_1[i]-tem_1d_1[j];
			i = 6000000; // No es la forma mas santa, pero estoy cansado para hacer una mas elegante :)
			break;
		}
	}
	
	// ---------------------------------------------------- //
	tstop = (double)clock()/CLOCKS_PER_SEC;
	ttime= tstop-tstart;
	// ---------------------------------------------------- //
}


void eu0044 :: printsolution(){
	cout << "Euler 0044\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
