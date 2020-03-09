void VERIFSUM2(mpz_t A, mpz_t B, int i, gmp_ui *div1, gmp_ui *sum1) {
	while(mpz_divisible_ui_p(A, div1[i])) i += 2;
	mpz_mul_ui(B, B, (mpz_divisible_ui_p(A, div1[--i])? sum1[i] : sum1[--i]));	
}


void VERIFSUM4(int h, mpz_t A, mpz_t B, int i, mpz_t *div, mpz_t *sum, gmp_ui *div1, gmp_ui *sum1) {//h 2, i mem.
	if(mpz_divisible_p(A, div[1])) {
		for(; mpz_divisible_p(A, div[h]); h += 2);		
		mpz_mul(B, (mpz_divisible_p(A, div[--h])? sum[h] : sum[--h]), B);
		return;
	}

	for(; !mpz_divisible_ui_p(A, div1[i]); i -= 2);
	mpz_mul_ui(B, B, mpz_divisible_ui_p(A, div1[++i])? sum1[i] : sum1[--i]);
}


void VERIFSUM5(mpz_t A, mpz_t B, int i, gmp_ui *div1, gmp_ui *sum1) {//i = mem2.
	while(!mpz_divisible_ui_p(A, div1[i])) i -= 2;
	mpz_mul_ui(B, B, (mpz_divisible_ui_p(A, div1[++i])? sum1[i] : sum1[--i]));
}



void SUMA1(mpz_t p, mpz_t B, gmp_ui *b, gmp_ui *b1, int D, int H, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui e) {//d e H.
mpz_set_ui(B, e);

while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		VERIFSUM2(p, B, 2, div1[d], sum1[d]);
		}
	}

if(!(mpz_cmp(B, p) ^ 1)) {
	return;
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
		if(!(mpz_cmp(B, p) ^ 1)) {
			return;
			}
		}
	}
}


void SUMA2(mpz_t p, mpz_t B, gmp_ui *b, gmp_ui *b1, int D, int H, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t sumdoi) {
mpz_set(B, sumdoi);

if( !(++d ^ 89) || !(d ^ 107) ) {		
	mpz_mul_2exp(B, B, d);
	}
	
d = H;
while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		VERIFSUM2(p, B, 2, div1[d], sum1[d]);
		}
	}

if(!(mpz_cmp(B, p) ^ 1)) {
	return;
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
	if(!(mpz_cmp(B, p) ^ 1)) {
		return;
			}
		}
	}
}


void SUMA3(mpz_t p, mpz_t B, gmp_ui *b, gmp_ui *b1, int D, int H, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t sumdoi) {
mpz_set(B, sumdoi);

if( !(++d ^ 89) || !(d ^ 107) || !(d ^ 127) ) {
	mpz_mul_2exp(B, B, d);
	}

d = H;
while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		VERIFSUM2(p, B, 2, div1[d], sum1[d]);
		}
	}

if(!(mpz_cmp(B, p) ^ 1)) {
	return;
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
	if(!(mpz_cmp(B, p) ^ 1)) {
		return;
			}
		}
	}
}


void SUMA4(mpz_t p, mpz_t B, gmp_ui *b, gmp_ui *b1, int D, int H, int S, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, mpz_t sumdoi) {//160-210.
mpz_set(B, sumdoi);

if( !(++d ^ 89) || !(d ^ 107) || !(d ^ 127) ) {	
	mpz_mul_2exp(B, B, d);
	}

d = H;
while(1) {
       if(!S--)
           break;
       if(mpz_divisible_ui_p(p, b[--d])) {
		VERIFSUM5(p, B, mem[d], div1[d], sum1[d]);
		}
       }
       
while(1){
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		VERIFSUM2(p, B, 2, div1[d], sum1[d]);
		}
	}

if(!(mpz_cmp(B, p) ^ 1)) {
	return;
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
	if(!(mpz_cmp(B, p) ^ 1)) {
		return;
			}
		}
	}
}


void SUMA5(mpz_t p, mpz_t B, mpz_t *C, mpz_t *C1, gmp_ui *b, gmp_ui *b1, int D, int E, int H, int S, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, mpz_t sumdoi, int i) {//210-220.
mpz_set(B, sumdoi);

if( !(++d ^ 89) || !(d ^ 107) || !(d ^ 127) ) {	
	mpz_mul_2exp(B, B, i = d);
	}

d = H;
while(1) {
       if(!S--)
           break;
       if(mpz_divisible_ui_p(p, b[--d])) {
		VERIFSUM5(p, B, mem[d], div1[d], sum1[d]);
		}
       }
       
while(1){
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		VERIFSUM2(p, B, 2, div1[d], sum1[d]);
		}
	}

if(!(mpz_cmp(B, p) ^ 1)) {
	return;
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);	
	if(!(mpz_cmp(B, p) ^ 1)) {
		return;
			}
		}
	}

while(1) {
	if(!E--)
		break;
	if(i && !(mpz_scan1(C1[E], 0) ^ i)) continue;
	if(mpz_divisible_p(p, C[E])) {
		mpz_mul(B, C1[E], B);
		if(!(mpz_cmp(B, p) ^ 1)) {
			return;
			}
		}
	}
}


void SUMA6(mpz_t p, mpz_t B, mpz_t *C, mpz_t *C1, gmp_ui *b, gmp_ui *b1, int D, int E, int H, int K, int S, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, mpz_t sumdoi, int i) {
mpz_set(B, sumdoi);

if( !(++d ^ 89) || !(d ^ 107) || !(d ^ 127) ) {	
	mpz_mul_2exp(B, B, i = d);
	}

d = H;
while(1) {
	if(!K--)
		break;
	if(mpz_divisible_ui_p(p, b[--d])) {
		VERIFSUM4(2, p, B, mem[d], div[K], sum[K], div1[d], sum1[d]);
		}
	}
while(1) {
       if(!S--)
           break;
       if(mpz_divisible_ui_p(p, b[--d])) {
		VERIFSUM5(p, B, mem[d], div1[d], sum1[d]);
		}
       }
while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		VERIFSUM2(p, B, 2, div1[d], sum1[d]);
		}
	}
	
if(!(mpz_cmp(B, p) ^ 1)) {
	return;
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
		if(!(mpz_cmp(B, p) ^ 1)) {
			return;
			}
		}
	}

while(1) {
	if(!E--)
		break;
	if(i && !(mpz_scan1(C1[E], 0) ^ i)) continue;
	if(mpz_divisible_p(p, C[E])) {
		mpz_mul(B, C1[E], B);		
		if(!(mpz_cmp(B, p) ^ 1)) {
			return;
			}
		}
	}
}


void SUMADIV(mpz_t p, mpz_t B, mpz_t *C, mpz_t *C1, gmp_ui *b, gmp_ui *b1, int D, int E, int H, int K, int S, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, mpz_t sumdoi) {//d e H.
mpz_set(B, sumdoi);

while(1) {
	if(!K--)
		break;
	if(mpz_divisible_ui_p(p, b[--d])) {
		VERIFSUM4(2, p, B, mem[d], div[K], sum[K], div1[d], sum1[d]);
		}
	}
while(1) {
       if(!S--)
           break;
       if(mpz_divisible_ui_p(p, b[--d])) {
		VERIFSUM5(p, B, mem[d], div1[d], sum1[d]);
		}
       }
while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		VERIFSUM2(p, B, 2, div1[d], sum1[d]);
		}
	}
	
if(!(mpz_cmp(B, p) ^ 1)) {
	return;
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);	
		if(!(mpz_cmp(B, p) ^ 1)) {
			return;
			}
		}
	}

while(1) {
	if(!E--)
		break;
	if(mpz_divisible_p(p, C[E])) {
		mpz_mul(B, C1[E], B);	
		if(!(mpz_cmp(B, p) ^ 1)) {
			return;
			}
		}
	}
}


void SUMA7(mpz_t p, mpz_t B, gmp_ui *b, gmp_ui *b1, int D, int H, int K, int S, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, mpz_t sumdoi) {
mpz_set(B, sumdoi);

if( !(++d ^ 89) || !(d ^ 107) || !(d ^ 127) ) {
	mpz_mul_2exp(B, B, d);
	if(mpz_divisible_p(B, p)) {
		return;
		}
	}

d = H;
while(1) {
	if(!K--)
		break;
	if(mpz_divisible_ui_p(p, b[--d])) {
		VERIFSUM4(2, p, B, mem[d], div[K], sum[K], div1[d], sum1[d]);
		}
	}

while(1) {
       if(!S--)
           break;
       if(mpz_divisible_ui_p(p, b[--d])) {
		VERIFSUM5(p, B, mem[d], div1[d], sum1[d]);
		}
       }
	
while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		VERIFSUM2(p, B, 2, div1[d], sum1[d]);
		}
	}
	
if(!(mpz_cmp(B, p) ^ 1)) {
	return;
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
		if(!(mpz_cmp(B, p) ^ 1)) {
			return;
			}
		}
	}
}


void VSUMA1(mpz_t p, mpz_t B, gmp_ui *b, gmp_ui *b1, int D, int H, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *f2, gmp_ui e) {
mpz_set_ui(B, e);

while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		VERIFSUM2(p, B, 2, div1[f2[d]], sum1[f2[d]]);
		}
	}

if(!(mpz_cmp(B, p) ^ 1)) {
	return;
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
		if(!(mpz_cmp(B, p) ^ 1)) {
			return;
			}
		}
	}
}


void VSUMA2(mpz_t p, mpz_t B, gmp_ui *b, gmp_ui *b1, int D, int H, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *f2, mpz_t sumdoi) {
mpz_set(B, sumdoi);

if( !(++d ^ 89) || !(d ^ 107)) {	
	mpz_mul_2exp(B, B, d);
	}

d = H;
while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		VERIFSUM2(p, B, 2, div1[f2[d]], sum1[f2[d]]);
		}
	}

if(!(mpz_cmp(B, p) ^ 1)) {
	return;
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
	if(!(mpz_cmp(B, p) ^ 1)) {
		return;
			}
		}
	}
}


void VSUMA3(mpz_t p, mpz_t B, gmp_ui *b, gmp_ui *b1, int D, int H, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *f2, mpz_t sumdoi) {
mpz_set(B, sumdoi);

if( !(++d ^ 89) || !(d ^ 107) || !(d ^ 127) ) {	
	mpz_mul_2exp(B, B, d);
	}

d = H;
while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		VERIFSUM2(p, B, 2, div1[f2[d]], sum1[f2[d]]);
		}
	}

if(!(mpz_cmp(B, p) ^ 1)) {
	return;
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
	if(!(mpz_cmp(B, p) ^ 1)) {
		return;
			}
		}
	}
}


void VSUMA4(mpz_t p, mpz_t B, gmp_ui *b, gmp_ui *b1, int D, int H, int S, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int *f2, mpz_t sumdoi, int i) {//160-210.
mpz_set(B, sumdoi);

if( !(++d ^ 89) || !(d ^ 107) || !(d ^ 127) ) {	
	mpz_mul_2exp(B, B, d);
	}

d = H;
while(1) {
       if(!S--)
           break;
       if(mpz_divisible_ui_p(p, b[--d])) {
		i = f2[d];
		VERIFSUM5(p, B, mem[i], div1[i], sum1[i]);
		}
       }
       
while(1){
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		i = f2[d];
		VERIFSUM2(p, B, 2, div1[i], sum1[i]);
		}
	}

if(!(mpz_cmp(B, p) ^ 1)) {
	return;
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
	if(!(mpz_cmp(B, p) ^ 1)) {
		return;
			}
		}
	}
}


void VSUMA5(mpz_t p, mpz_t B, mpz_t *C, mpz_t *C1, gmp_ui *b, gmp_ui *b1, int D, int E, int H, int d, int S, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, int *f2, mpz_t sumdoi, int i, int j) {
mpz_set(B, sumdoi);

if( (++d == 89) || (d == 107) || (d == 127) ) {
	mpz_mul_2exp(B, B, i = d);
	}
d = H;
while(1) {
	if(!S--)
		break;
	if(mpz_divisible_ui_p(p, b[--d])) {
		j = f2[d];
		VERIFSUM5(p, B, mem[j], div1[j], sum1[j]);
		}
	}

while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		j = f2[d];
		VERIFSUM2(p, B, 2, div1[j], sum1[j]);
		}
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
		if(mpz_cmp(B, p) == 1) {
			return;
			}
		}
	}
	
while(1) {
	if(!E--)
		break;
	if(i && !(i ^ mpz_scan1(C1[E], 0)))
		continue;
	if(mpz_divisible_p(p, C[E])) {
		mpz_mul(B, B, C1[E]);
		if(mpz_cmp(B, p) == 1) {
			return;
			}
		}
	}
}


void VSUMA6(mpz_t p, mpz_t B, mpz_t *C, mpz_t *C1, gmp_ui *b, gmp_ui *b1, int D, int E, int H, int K, int S, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, int *f2, mpz_t sumdoi, int i, int j) {
mpz_set(B, sumdoi);

if( !(++d ^ 89) || !(d ^ 107) || !(d ^ 127) ) {	
	mpz_mul_2exp(B, B, j = d);
	}

d = H;
while(1) {
	if(!K--)
		break;
	if(mpz_divisible_ui_p(p, b[--d])) {
		i = f2[d];
		VERIFSUM4(2, p, B, mem[i], div[i], sum[i], div1[i], sum1[i]);
		}
	}
while(1) {
       if(!S--)
           break;
       if(mpz_divisible_ui_p(p, b[--d])) {
       	i = f2[d];
		VERIFSUM5(p, B, mem[i], div1[i], sum1[i]);
		}
       }
while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		i = f2[d];
		VERIFSUM2(p, B, 2, div1[i], sum1[i]);
		}
	}
	
if(!(mpz_cmp(B, p) ^ 1)) {
	return;
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
		if(!(mpz_cmp(B, p) ^ 1)) {
			return;
			}
		}
	}

while(1) {
	if(!E--)
		break;
	if(j && !(mpz_scan1(C1[E], 0) ^ j)) continue;
	if(mpz_divisible_p(p, C[E])) {
		mpz_mul(B, C1[E], B);
		if(!(mpz_cmp(B, p) ^ 1)) {
			return;
			}
		}
	}
}


//Alt UNIFACTUS.
void SUMADIV2(mpz_t p, mpz_t B, mpz_t *C, mpz_t *C1, gmp_ui *b, gmp_ui *b1, int D, int E, int H, int K, int S, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, int *f2, mpz_t sumdoi, int i) {
mpz_set(B, sumdoi);

d = H;
while(1) {
	if(!K--)
		break;
	if(mpz_divisible_ui_p(p, b[--d])) {
		i = f2[d];
		VERIFSUM4(2, p, B, mem[i], div[i], sum[i], div1[i], sum1[i]);
		}
	}
while(1) {
	if(!S--)
		break;
	if(mpz_divisible_ui_p(p, b[--d])) {
		i = f2[d];
		VERIFSUM5(p, B, mem[i], div1[i], sum1[i]);
		}
	}
while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		VERIFSUM2(p, B, 2, div1[f2[d]], sum1[f2[d]]);
		}
	}

if(mpz_cmp(B, p) == 1) {
	return;
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
		if(mpz_cmp(B, p) == 1) {
			return;
			}
		}
	}

while(1) {
	if(!E--)
		break;
	if(mpz_divisible_p(p, C[E])) {
		mpz_mul(B, B, C1[E]);
		if(mpz_cmp(B, p) == 1) {
			return;
			}
		}
	}
}


void VSUMA7(mpz_t p, mpz_t B, gmp_ui *b, gmp_ui *b1, int D, int H, int K, int S, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, int *f2, mpz_t sumdoi, int i) {
mpz_set(B, sumdoi);

if( !(++d ^ 89) || !(d ^ 107) || !(d ^ 127) ) {
	mpz_mul_2exp(B, B, d);
	if(mpz_divisible_p(B, p)) {
		return;
		}
	}

d = H;
while(1) {
	if(!K--)
		break;
	if(mpz_divisible_ui_p(p, b[--d])) {
		i = f2[d];
		VERIFSUM4(2, p, B, mem[i], div[i], sum[i], div1[i], sum1[i]);
		}
	}

while(1) {
       if(!S--)
           break;
       if(mpz_divisible_ui_p(p, b[--d])) {
       	i = f2[d];
		VERIFSUM5(p, B, mem[i], div1[i], sum1[i]);
		}
       }
	
while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		i = f2[d];
		VERIFSUM2(p, B, 2, div1[i], sum1[i]);
		}
	}
	
if(!(mpz_cmp(B, p) ^ 1)) {
	return;
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
		if(!(mpz_cmp(B, p) ^ 1)) {
			return;
			}
		}
	}
}


void VSUM1(mpz_t p, mpz_t B, gmp_ui *b, gmp_ui *b1, int D, int H, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *f2, gmp_ui e) {
mpz_set_ui(B, 1);
d = H;

while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		VERIFSUM2(p, B, 2, div1[f2[d]], sum1[f2[d]]);
		}
	}

if(!(mpz_cmp(B, p) ^ 1)) {
	mpz_mul_ui(B, B, e);
	return;
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
		if(!(mpz_cmp(B, p) ^ 1)) {
			mpz_mul_ui(B, B, e);
			return;
			}
		}
	}
}


void VSUM2(mpz_t p, mpz_t B, gmp_ui *b, gmp_ui *b1, int D, int H, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *f2, mpz_t sumdoi) {
mpz_set_ui(B, 1);

if( (++d == 89) || (d == 107)) {
	mpz_mul_2exp(B, B, d);
	}

d = H;
while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		VERIFSUM2(p, B, 2, div1[f2[d]], sum1[f2[d]]);
		}
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
		if(mpz_cmp(B, p) == 1) {
			mpz_mul(B, sumdoi, B);
			return;
			}
		}
	}
}


void VSUM3(mpz_t p, mpz_t B, gmp_ui *b, gmp_ui *b1, int D, int H, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *f2, mpz_t sumdoi) {
mpz_set_ui(B, 1);

if( (++d == 89) || (d == 107) || (d == 127) ) {
	mpz_mul_2exp(B, B, d);
	}

d = H;
while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		VERIFSUM2(p, B, 2, div1[f2[d]], sum1[f2[d]]);
		}
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
		if(mpz_cmp(B, p) == 1) {
			mpz_mul(B, sumdoi, B);
			return;
			}
		}
	}
}


void VSUM4(mpz_t p, mpz_t B, gmp_ui *b, gmp_ui *b1, int D, int H, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t sumdoi, int *f2, int i) {
mpz_set_ui(B, 1);

if( !(++d ^ 89) || !(d ^ 107) || !(d ^ 127) ) {
	mpz_divexact(p, p, sumdoi);
	i = d;
	}

d = H;
while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		VERIFSUM2(p, B, 2, div1[f2[d]], sum1[f2[d]]);
		}
	}
	
if(mpz_cmp(B, p) == 1) {
	mpz_mul(B, sumdoi, B);
	if(i) mpz_mul_2exp(B, B, i);
	return;
	}
	
while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
		if(mpz_cmp(B, p) == 1) {
			mpz_mul(B, sumdoi, B);
			if(i) mpz_mul_2exp(B, B, i);
			return;
			}
		}
	}
}


void LOTVEC(mpz_t a,  gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, gmp_ui *y, gmp_ui *y1, mpz_t *z, mpz_t *z1, int D, int E, int d1, int S, int &Y, int &i, int &d2, int &s, int *f2) {//i = d1.
while(1) {
	if(!(i-- ^ S))
		break;
	if(mpz_divisible_ui_p(a, b[i])) {
		y[Y] = b[i];
		f2[Y++] = i;
		}
	}

while(1) {	
	if(mpz_divisible_ui_p(a, b[i])) {
		s++;
		y[Y] = b[i];
		f2[Y++] = i;
		}
	if(!i--)
		break;
	}
	
d2 = Y;
while(1) {
	if( !(D-- ^ d1) )
		break;
		
	if(mpz_divisible_ui_p(a, b[D])) {
			y[Y] = b[D];
			y1[Y++] = b1[D];
			}
	}
	
i = 0;
while(1) {
	if(!E--)
		break;
	if(mpz_divisible_p(a, C[E])) {
		mpz_set(z[i], C[E]);
		mpz_set(z1[i++], C1[E]);
		}
	}
}


void LOTVEC0(mpz_t a, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, int D, int d1, int S, int &Y, int &d2, int &s, int i, int *f2) {//i = d1.
while(1) {
	if(!(i-- ^ S))
		break;
	if(mpz_divisible_ui_p(a, b[i])) {
		y[Y] = b[i];
		f2[Y++] = i;
		}
	}

while(1) {	
	if(mpz_divisible_ui_p(a, b[i])) {
		s++;
		y[Y] = b[i];
		f2[Y++] = i;
		}
	if(!i--)
		break;
	}
	
d2 = Y;
while(1) {
	if( !(D-- ^ d1) )
		break;
		
	if(mpz_divisible_ui_p(a, b[D])) {
			y[Y] = b[D];
			y1[Y++] = b1[D];
			}
	}
}


void LOTVEC1(mpz_t a, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, int D, int d1, int &Y, int &d2, int i, int *f2) {// i = d1.
while(1) {
	if(!i--)
		break;
	if(mpz_divisible_ui_p(a, b[i])) {
			y[Y] = b[i];
			f2[Y++] = i;
			}
	}
	
d2 = Y;
while(1) {
	if( !(D-- ^ d1) )
		break;	
	if(mpz_divisible_ui_p(a, b[D])) {
			y[Y] = b[D];
			y1[Y++] = b1[D];
			}
	}
}

//d3 = K, d2 = H, Y = D, i = E.
//D E H K S = Y i d2 d3 S1 = Y s i n S1. i e d1.
void LOTVECM(mpz_t a, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, gmp_ui *y, gmp_ui *y1, mpz_t *z, mpz_t *z1, int D, int E, int d1, int f1, int S, int &Y, int &i, int &d2, int &d3, int &S1, int *f2) {//d1 e H mare; f1 K.
while(1) {
	if(!(i-- ^ S))
		break;
	if(mpz_divisible_ui_p(a, b[i])) {
		y[Y] = b[i];		
		f2[Y++] = i;
		}
	}

while(1) {	
	if(mpz_divisible_ui_p(a, b[i])) {
		S1++;
		y[Y] = b[i];		
		f2[Y++] = i;//i sau i-f1.
		}
	if(!(i-- ^ f1))
		break;
	}
	
while(1) {
	if(!f1--)
		break;
	if(mpz_divisible_ui_p(a, b[f1])) {
		d3++;
		y[Y] = b[f1];
		f2[Y++] = f1;
		}
	}
	
d2 = Y;//H
while(1) {
	if( !(D-- ^ d1) )
		break;
	if(mpz_divisible_ui_p(a, b[D])) {
		y[Y] = b[D];
		y1[Y++] = b1[D];
		}
	}

i = 0;
while(1) {
	if(!E--)
		break;
	if(mpz_divisible_p(a, C[E])) {
		mpz_set(z[i], C[E]);
		mpz_set(z1[i++], C1[E]);
		}
	}
}


void LOTVECM0(mpz_t a, gmp_ui *b, gmp_ui *b1, gmp_ui *y, gmp_ui *y1, int D, int d1, int f1, int S, int &Y, int &d2, int &d3, int &S1, int i, int *f2) {//H penultimul.
while(1) {
	if(!(i-- ^ S))
		break;
	if(mpz_divisible_ui_p(a, b[i])) {
		y[Y] = b[i];		
		f2[Y++] = i;
		}
	}

while(1) {	
	if(mpz_divisible_ui_p(a, b[i])) {
		S1++;
		y[Y] = b[i];		
		f2[Y++] = i;//i sau i-f1.
		}
	if(!(i-- ^ f1))
		break;
	}
	
while(1) {
	if(!f1--)
		break;
	if(mpz_divisible_ui_p(a, b[f1])) {
		d3++;
		y[Y] = b[f1];
		f2[Y++] = f1;
		}
	}
	
d2 = Y;//H
while(1) {
	if( !(D-- ^ d1) )
		break;
	if(mpz_divisible_ui_p(a, b[D])) {
		y[Y] = b[D];
		y1[Y++] = b1[D];
		}
	}
}


void SUMINT(mpz_t p, mpz_t NUM, mpz_t SUM, gmp_ui coef, gmp_ui j, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *div1, gmp_ui *sum1, char *Q, FILE *F2) {//SUMINT, SUMINTJOS, SUMMPZE, SUMMPZJOSE.
	mpz_set(SUM, d);
	while(mpz_divisible_ui_p(p, div1[j])) j += 2;
	mpz_divexact_ui(SUM, SUM, (mpz_divisible_ui_p(p, div1[--j])? sum1[j] : sum1[--j]));
	mpz_mul_ui(SUM, SUM, sum1[++j]);
	mpz_mul_ui(doi, NUM, coef);
	if(VALID4(doi, d1, SUM) == 1) 
		SCRIE(doi, Q, F2);
}


void SUMINT1(mpz_t p, mpz_t NUM, mpz_t SUM, gmp_ui coef, gmp_ui j, gmp_ui j1, mpz_t d, mpz_t d1, mpz_t doi, char *Q, FILE *F2) {//j = sum2, j1 = coef+1.
	mpz_set(SUM, d);
	mpz_divexact_ui(SUM, SUM, j);
	mpz_mul_ui(SUM, SUM, j1);
	mpz_mul_ui(doi, NUM, coef);
	if(VALID4(doi, d1, SUM) == 1)
		SCRIE(doi, Q, F2);
}


void SUMINTJOS(mpz_t p, mpz_t NUM, mpz_t SUM, gmp_ui coef, gmp_ui j, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *div1, gmp_ui *sum1, char *Q, FILE *F2) {
	mpz_set(SUM, d);
	while(mpz_divisible_ui_p(p, div1[j])) j += 2;
	mpz_divexact_ui(SUM, SUM, (mpz_divisible_ui_p(p, div1[--j])? sum1[j] : sum1[--j]));
	mpz_mul_ui(SUM, SUM, sum1[--j]);
	mpz_divexact_ui(doi, NUM, coef);
	if(VALID4(doi, d1, SUM) == 1)
		SCRIE(doi, Q, F2);
}


void SUMMPZE(mpz_t p, mpz_t NUM, mpz_t SUM, gmp_ui coef, gmp_ui j, mpz_t d, mpz_t d1, mpz_t doi, gmp_ui *div1, gmp_ui *sum1, char *Q, FILE *F2) {//j = mem.	
	if(mpz_divisible_ui_p(p, div1[j])) {
		return;
	}
	
	mpz_set(SUM, d);
	mpz_mul_ui(doi, NUM, coef);
	for(--j; !mpz_divisible_ui_p(p, div1[j]); j -= 2);
	mpz_divexact_ui(SUM, SUM, mpz_divisible_ui_p(p, div1[++j])? sum1[j] : sum1[--j]);
	mpz_mul_ui(SUM, SUM, sum1[++j]);	
	if(VALID4(doi, d1, SUM) == 1)
		SCRIE(doi, Q, F2);
}


void SUMMPZJOSE(mpz_t p, mpz_t NUM, mpz_t SUM, gmp_ui coef, gmp_ui j, mpz_t d, mpz_t d1, mpz_t doi, mpz_t div, gmp_ui *div1, gmp_ui *sum1, char *Q, FILE *F2) {//j = mem. div[1].
	if(mpz_divisible_p(p, div)) {
		return;
	}
	
	mpz_set(SUM, d);
	mpz_divexact_ui(doi, NUM, coef);
	for(; !mpz_divisible_ui_p(p, div1[j]); j -= 2);
	mpz_divexact_ui(SUM, SUM, (mpz_divisible_ui_p(p, div1[++j])? sum1[j] : sum1[--j]));
	mpz_mul_ui(SUM, SUM, sum1[--j]);	
	if(VALID4(doi, d1, SUM) == 1)
		SCRIE(doi, Q, F2);
}


//gmp_ui i2;
//2087, primul număr prim care lipsește.
void MODPINTSUS(mpz_t unu, mpz_t p, gmp_ui coef, mpz_t doi, gmp_ui j, gmp_ui k, gmp_ui k1, gmp_ui *div, gmp_ui *sum, char *Q, FILE *F2) {//Doar MODPINTSUS, MODPINTJOS, MODPMPZSUSE, MODPMPZJOSE.
	while(mpz_divisible_ui_p(p, div[j])) j += 2;
	j = !mpz_divisible_ui_p(p, div[--j])? sum[j] : sum[++j];
	//i2 = CMMDCA(j-1, k, (j-1)%k) * CMMDCA(k1, j, k1%j);
	//if(i2 > 10000000000U) printf("%llu VOIDAT\n", i2);
	//j--;if(!((i2 = j*k1) % j) && (i2 < CMMDCA(j, k, j%k) * CMMDCA(k1, j+1, k1%(j+1)) * PRAG)) {
	if(CMMDC2(j-1, j-1, k, (j-1)%k) * CMMDC2(k1, k1, j, k1%j) < PRAG) {
		mpz_mul_ui(doi, unu, coef);
		#pragma omp critical
		SCRIE(doi, Q, F2);
	}
}


void MODPINTJOS(mpz_t unu, mpz_t p, gmp_ui coef, mpz_t doi, gmp_ui j, gmp_ui k, gmp_ui k1, gmp_ui *div, gmp_ui *sum, char *Q, FILE *F2) {//k = numărătorul, k1 numitorul abundențial. j = 3.
	while(mpz_divisible_ui_p(p, div[j])) j += 2;
	j = (mpz_divisible_ui_p(p, div[--j])? sum[j] : sum[--j]);
	//i2 = CMMDCA(j, k, j%k) * CMMDCA(k1, j-1, k1%(j-1));
	//if(i2 > 10000000000U) printf("%llu VOIDAX\n", i2);
	//if(!((i2 = j*k) % j) && (i2 < CMMDCA(j, k, j%k) * CMMDCA(k1, j-1, k1%(j-1)) * PRAG)) {
	if(CMMDC2(j, j, k, j%k) * CMMDC2(k1, k1, j-1, k1%(j-1)) < PRAG) {
		mpz_divexact_ui(doi, unu, coef);
		#pragma omp critical
		SCRIE(doi, Q, F2);
	}
}

//if(VERTOITO/k1 > j1) && ((j1-1) * k1 < CMMDCA(j1-1, k, (j1-1)%k) * CMMDCA(k1, j1, k1%j1) * PRAG)) {
//i = mem.
void MODPMPZSUSE(mpz_t unu, mpz_t p, gmp_ui coef, mpz_t j, gmp_ui i, gmp_ui j1, gmp_ui k, gmp_ui k1, gmp_ui *div1, gmp_ui *sum1, char *Q, FILE *F2) {
	if(mpz_divisible_ui_p(p, div1[i])) {//i=1.
		return;/*
		for(i++; mpz_divisible_p(p, div[i]); i += 2);
		mpz_set(j, (!mpz_divisible_p(p, div[--i])? sum[i] : sum[++i]));
		mpz_sub_ui(e, j, 1);
		//gmp_ui i = mpz_gcd_ui(NULL, e, k) * mpz_gcd_ui(NULL, j, k1);
		//if(i > 60000000000U) printf("%llu %llu %llu %llu JANOS VOIDAT\n", PRAG, i, k, k1);
		//return;
		mpz_mul_ui(f, e, k1);
		if(mpz_cmp_ui(f, PRAG * mpz_gcd_ui(NULL, e, k) * mpz_gcd_ui(NULL, j, k1)) < 0) {printf("POLDMOLDPOLD\n");
			mpz_mul_ui(e, unu, coef);
			#pragma omp critical
			SCRIE(e, Q, F2);
		}
		return;*/
	}
	
	for(i--; !mpz_divisible_ui_p(p, div1[i]); i -= 2);
	j1 = mpz_divisible_ui_p(p, div1[++i])? sum1[i] : sum1[--i];
	//j1--;if(!((i=j1*k1) % j1) && (i < CMMDCA(j1, k, j1%k) * CMMDCA(k1, j1+1, k1%(j1+1)) * PRAG)) {
	if(CMMDC2(j1-1, j1-1, k, (j1-1)%k) * CMMDC2(k1, k1, j1, k1%j1) < PRAG) {//printf("POLDMOLD\n");// --j1 * k1 / cmmdc(--j1,k)*cmmdc(k1,j1) < prag sau --j1*k1 < prag * cele 2 cmmdc-uri.
		mpz_mul_ui(j, unu, coef);
		#pragma omp critical
		SCRIE(j, Q, F2);
	}
}
//j*k1, j*t, (k1-t)*j = l * 2^64, sau mai sus (k1-t)*(j-1) = l*2^64, putere de 2.
//Acel k1-t nu poate fi prea mare, maxim pe la milion, sub PRAG, pentru minim 2^64 j-1 ar fi minim pe la 2^43-44.
//De verificat sumele (j), plus j-1, pentru necoinciderea cu puterile de 2 mari.

void MODPMPZJOSE(mpz_t unu, mpz_t p, gmp_ui coef, mpz_t j, gmp_ui i, gmp_ui j1, gmp_ui k, gmp_ui k1, mpz_t div, gmp_ui *div1, gmp_ui *sum1, char *Q, FILE *F2) {//i = mem.	
	if(mpz_divisible_p(p, div)) {
		return;/*
		while(mpz_divisible_p(p, div[i])) i += 2;
		mpz_set(j, (mpz_divisible_p(p, div[--i])? sum[i] : sum[--i]));
		mpz_sub_ui(e, j, 1);
		gmp_ui i = mpz_gcd_ui(NULL, j, k) * mpz_gcd_ui(NULL, e, k1);
		if(i > 60000000000U) printf("%llu %llu %llu %llu JANOS VOIDAX\n", PRAG, i, k, k1);
		return;
		mpz_mul_ui(f, j, k1);
		if(mpz_cmp_ui(f, mpz_gcd_ui(NULL, j, k) * mpz_gcd_ui(NULL, e, k1) * PRAG) < 0) {//  mpz_gcd_ui(NULL, j, k) * mpz_gcd_ui(NULL, e, k1) * PRAG
			mpz_divexact_ui(e, unu, coef);
			#pragma omp critical
			SCRIE(e, Q, F2);
		}
		return;*/
	}
	//j1=36, k1=34, buf=128, j1*k1 % buf = 72, e 128*9 + 2*36, avem 2 rest cu 32 luat din k1, 2 putere de 2 la j1=36, plus 9 treceri peste buffer.
	//j1=48, k1=10, buf=128, j1*k1%buf=96, 3 treceri peste 128, din k1 2 rest cu 8 luat, 4 putere de 2 la j1.
	//j1=32, k1=18, buf=128, j1*k1%buf=64, 4 treceri peste 128, din k1 2 rest cu 16 luat, 5 puterea de 2 din j1, 2 la 9 e 512.	
	for(; !mpz_divisible_ui_p(p, div1[i]); i -= 2);
	j1 = mpz_divisible_ui_p(p, div1[++i])? sum1[i] : sum1[--i];
	//if(!((i = (j1*k1) % j1) && (i < CMMDCA(j1, k, j1%k) * CMMDCA(k1, j1-1, k1%(j1-1)) * PRAG)) {
	if(CMMDC2(j1, j1, k, j1%k) * CMMDC2(k1, k1, j1-1, k1%(j1-1)) < PRAG) {
		mpz_divexact_ui(j, unu, coef);
		#pragma omp critical
		SCRIE(j, Q, F2);
	}
}


void MODPINTSUS2(mpz_t unu, gmp_ui coef, mpz_t doi, gmp_ui j, gmp_ui k, gmp_ui k1, char *Q, FILE *F2) {//j=sum2.
	//while(mpz_divisible_ui_p(p, div[j])) j += 2;
	//j = !mpz_divisible_ui_p(p, div[--j])? sum[j] : sum[++j];
	// j=40, j=156; divizibil cu 3, cu 5; 9 cu 25 cele curente. 225 * 3 * 5.
	// k e numărătorul, k1 numitorul. 403 cu 225.
	//CMMDC2 e primul parametru pe CMMDC de mijlocii. 39 / CMMDC(39, 403) şi 225 / CMMDC(225, 40) sau 3 cu 45, 135, viitorul numitor, care dă categoric sub PRAG.
	//Sau 155/CMMDC(155,403) * 225/CMMDC(225,156) = 5*75, 375.
	
	//225: 403/225. 675: 248/135. 1125: 676/375. 3375: 416/225.
	//Cum determinăm şi numărătorul următor?
	//Avem 403, 225, 40, 27, 135, 248. 13*31, 8*31, 5*8, 5*45.
	//De la 225 la 135 ajungem, dar de la 403 la 248?
	//403, 225, 40, 39. 403/225 * 40/39.
	//k, k1, j, j-1.
	//CMMDC între 403 şi 39, care dă 13, apoi şi între 225 şi 40, 40/(225,40) * 403/(39,403) = 8*31.	
	//CMMDC2(j, j, k1, j%k1) * CMMDC2(k, k, j-1, k%(j-1)) pentru numărătorul următor.
	//CMMDC2(j-1, j-1, k, (j-1)%k) * CMMDC2(k1, k1, j, k1%j) pentru numitorul următor.
	
	//23569920: k e 4, k1 e 1.
	// j e 1093.
	//CMMDC2(1092, 1092, 4, 1092%4) * CMMDC2(1, 1, 1093, 1%1093) = 273.
	//CMMDC2(363, 363, 4, 363%4) * CMMDC2(1, 1, 364, 1%364) = 1.
	//1093-13
	//364-4
	
	if(CMMDC2(j-1, j-1, k, (j-1)%k) * CMMDC2(k1, k1, j, k1%j) < PRAG) {
		mpz_mul_ui(doi, unu, coef);
		#pragma omp critical
		SCRIE(doi, Q, F2);
	}
}


void MODPMPZSUSE2(mpz_t unu, gmp_ui coef, mpz_t doi, mpz_t j, gmp_ui k, gmp_ui k1, char *Q, FILE *F2) {//j=sum2.	
	if(mpz_cmp_ui(j, VERTOITO/k1) > 0) return;	
	gmp_ui i = mpz_get_ui(j) - 1;
	if((k1 * i) < PRAG * CMMDCA(i, k, i%k) * CMMDCA(i+1, k1, (i+1)%k1)) {	
		mpz_mul_ui(doi, unu, coef);
		#pragma omp critical
		SCRIE(doi, Q, F2);
	}
}


//Pentru numerele de la 420 la 1910 cifre.
void SUMIMENS(mpz_t A, mpz_t B, mpz_t *C, mpz_t *C1, gmp_ui *b, gmp_ui *b1, int D, int E, int H, int K, int S, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, mpz_t p, mpz_t sumdoi) {
mpz_set_ui(B, 1);
mpz_tdiv_q_2exp(p, A, d);
d = H;

while(1) {
	if(!K--)
		break;
	if(mpz_divisible_ui_p(p, b[--d])) {
		VERIFSUM4(2, p, B, mem[d], div[K], sum[K], div1[d], sum1[d]);
		}
	}
while(1) {
       if(!S--)
           break;
       if(mpz_divisible_ui_p(p, b[--d])) {
		VERIFSUM5(p, B, mem[d], div1[d], sum1[d]);
		}
       }
while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		VERIFSUM2(p, B, 2, div1[d], sum1[d]);
		}
	}

if(!(mpz_cmp(B, p) ^ 1)) {
	mpz_mul(B, sumdoi, B);
	return;
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
		if(!(mpz_cmp(B, p) ^ 1)) {
			mpz_mul(B, sumdoi, B);
			return;
			}
		}
	}

while(1) {
	if(!E--)
		break;
	if(mpz_divisible_p(p, C[E])) {
		mpz_mul(B, C1[E], B);
		if(!(mpz_cmp(B, p) ^ 1)) {
			mpz_mul(B, sumdoi, B);
			return;
			}
		}
	}
}


void SUMDIVV(mpz_t p, mpz_t B, mpz_t *C, mpz_t *C1, gmp_ui *b, gmp_ui *b1, int D, int E, int H, int K, int S, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, mpz_t sumdoi) {
mpz_set_ui(B, 1);
d = H;

while(1) {
	if(!K--)
		break;
	if(mpz_divisible_ui_p(p, b[--d])) {
		VERIFSUM4(2, p, B, mem[d], div[K], sum[K], div1[d], sum1[d]);
		}
	}
while(1) {
       if(!S--)
           break;
       if(mpz_divisible_ui_p(p, b[--d])) {
		VERIFSUM5(p, B, mem[d], div1[d], sum1[d]);
		}
       }
while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		VERIFSUM2(p, B, 2, div1[d], sum1[d]);
		}
	}

if(!(mpz_cmp(B, p) ^ 1)) {
	mpz_mul(B, sumdoi, B);
	return;
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
		if(!(mpz_cmp(B, p) ^ 1)) {
			mpz_mul(B, sumdoi, B);
			return;
			}
		}
	}

while(1) {
	if(!E--)
		break;
	if(mpz_divisible_p(p, C[E])) {
		mpz_mul(B, C1[E], B);
		if(!(mpz_cmp(B, p) ^ 1)) {
			mpz_mul(B, sumdoi, B);
			return;
			}
		}
	}
}


void SUMDIVV1(mpz_t p, mpz_t B, mpz_t *C, mpz_t *C1, gmp_ui *b, gmp_ui *b1, int D, int E, int H, int K, int S, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, mpz_t sumdoi, int i) {
mpz_set_ui(B, 1);

if( !(++d ^ 89) || !(d ^ 107) || !(d ^ 127) ) {
	mpz_divexact(p, p, sumdoi);
	i = d;
	}

d = H;
while(1) {
	if(!K--)
		break;
	if(mpz_divisible_ui_p(p, b[--d])) {
		VERIFSUM4(2, p, B, mem[d], div[K], sum[K], div1[d], sum1[d]);
		}
	}
while(1) {
       if(!S--)
           break;
       if(mpz_divisible_ui_p(p, b[--d])) {
		VERIFSUM5(p, B, mem[d], div1[d], sum1[d]);
		}
       }
while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		VERIFSUM2(p, B, 2, div1[d], sum1[d]);
		}
	}
	
if(!(mpz_cmp(B, p) ^ 1)) {
	mpz_mul(B, sumdoi, B);
	if(i) mpz_mul_2exp(B, B, i);
	return;
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
		if(!(mpz_cmp(B, p) ^ 1)) {
			mpz_mul(B, sumdoi, B);
			if(i) mpz_mul_2exp(B, B, i);
			return;
			}
		}
	}

while(1) {
	if(!E--)
		break;
	if(i && !(mpz_scan1(C1[E], 0) ^ i)) continue;
	if(mpz_divisible_p(p, C[E])) {
		mpz_mul(B, C1[E], B);
		if(!(mpz_cmp(B, p) ^ 1)) {
			mpz_mul(B, sumdoi, B);
			if(i) mpz_mul_2exp(B, B, i);
			return;
			}
		}
	}
}


void VSUM6(mpz_t p, mpz_t B, mpz_t *C, mpz_t *C1, gmp_ui *b, gmp_ui *b1, int D, int E, int H, int K, int S, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, int *f2, mpz_t sumdoi, int i, int j) {
mpz_set_ui(B, 1);

if( !(++d ^ 89) || !(d ^ 107) || !(d ^ 127) ) {
	mpz_divexact(p, p, sumdoi);	
	j = d;
	}

d = H;
while(1) {
	if(!K--)
		break;
	if(mpz_divisible_ui_p(p, b[--d])) {
		i = f2[d];
		VERIFSUM4(2, p, B, mem[i], div[i], sum[i], div1[i], sum1[i]);
		}
	}
while(1) {
       if(!S--)
           break;
       if(mpz_divisible_ui_p(p, b[--d])) {
       	i = f2[d];
		VERIFSUM5(p, B, mem[i], div1[i], sum1[i]);
		}
       }
while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		i = f2[d];
		VERIFSUM2(p, B, 2, div1[i], sum1[i]);
		}
	}
	
if(!(mpz_cmp(B, p) ^ 1)) {
	mpz_mul(B, sumdoi, B);
	if(j) mpz_mul_2exp(B, B, j);
	return;
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
		if(!(mpz_cmp(B, p) ^ 1)) {
			mpz_mul(B, sumdoi, B);
			if(j) mpz_mul_2exp(B, B, j);
			return;
			}
		}
	}

while(1) {
	if(!E--)
		break;
	if(j && !(mpz_scan1(C1[E], 0) ^ j)) continue;
	if(mpz_divisible_p(p, C[E])) {
		mpz_mul(B, C1[E], B);
		if(!(mpz_cmp(B, p) ^ 1)) {
			mpz_mul(B, sumdoi, B);
			if(j) mpz_mul_2exp(B, B, j);
			return;
			}
		}
	}
}




void NUM2SUMPURG(mpz_t p, mpz_t B, gmp_ui *b, gmp_ui *b1, int D, int H, int K, int S, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, mpz_t sumdoi) {//SUMA2?
mpz_set(B, sumdoi);

if( !(++d ^ 89) || !(d ^ 107)) {	
	mpz_mul_2exp(B, B, d);
	if(mpz_divisible_p(B, p)) {
		return;
		}
	}

d = H;
while(1) {
	if(!K--)
		break;
	if(mpz_divisible_ui_p(p, b[--d])) {
		VERIFSUM4(2, p, B, mem[d], div[K], sum[K], div1[d], sum1[d]);
		}
	}
while(1) {
       if(!S--)
           break;
       if(mpz_divisible_ui_p(p, b[--d])) {
		VERIFSUM5(p, B, mem[d], div1[d], sum1[d]);
		}
       }
while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		VERIFSUM2(p, B, 2, div1[d], sum1[d]);
		}
	}
	
if(!(mpz_cmp(B, p) ^ 1)) {
	return;
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
		if(!(mpz_cmp(B, p) ^ 1)) {
			return;
			}
		}
	}
}


//Sub 161:
void SUM2(mpz_t p, mpz_t B, gmp_ui *b, gmp_ui *b1, int D, int H, int K, int S, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, mpz_t sumdoi, int i) {//VS PURG1.
mpz_set_ui(B, 1);

if( !(++d ^ 89) || !(d ^ 107)) {	
	mpz_divexact(p, p, sumdoi);

	if(!mpz_cmp_ui(p, 1)) {
		mpz_mul(B, sumdoi, B);
		mpz_mul_2exp(B, B, d);
		return;
		}
		
	i = d;
	}

d = H;
while(1) {
	if(!K--)
		break;
	if(mpz_divisible_ui_p(p, b[--d])) {
		VERIFSUM4(2, p, B, mem[d], div[K], sum[K], div1[d], sum1[d]);
		}
	}
while(1) {
       if(!S--)
           break;
       if(mpz_divisible_ui_p(p, b[--d])) {
		VERIFSUM5(p, B, mem[d], div1[d], sum1[d]);
		}
       }
while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		VERIFSUM2(p, B, 2, div1[d], sum1[d]);
		}
	}
	
if(!(mpz_cmp(B, p) ^ 1)) {
	mpz_mul(B, sumdoi, B);	
	if(i) mpz_mul_2exp(B, B, i);
	return;
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
		if(!(mpz_cmp(B, p) ^ 1)) {
			mpz_mul(B, sumdoi, B);
			if(i) mpz_mul_2exp(B, B, i);
			return;
			}
		}
	}
}


void VSUM6(mpz_t p, mpz_t B, gmp_ui *b, gmp_ui *b1, int D, int H, int K, int S, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, int *f2, mpz_t sumdoi, int i, int j) {//VSUMA6?
mpz_set_ui(B, 1);

if( !(++d ^ 89) || !(d ^ 107) || !(d ^ 127) ) {
	mpz_divexact(p, p, sumdoi);
	
	if(!mpz_cmp_ui(sumdoi, 1)) {
		mpz_mul(B, sumdoi, B);
		mpz_mul_2exp(B, B, d);
		return;
		}

	j = d;
	}

d = H;
while(1) {
	if(!K--)
		break;
	if(mpz_divisible_ui_p(p, b[--d])) {
		i = f2[d];
		VERIFSUM4(2, p, B, mem[i], div[i], sum[i], div1[i], sum1[i]);
		}
	}

while(1) {
       if(!S--)
           break;
       if(mpz_divisible_ui_p(p, b[--d])) {
       	i = f2[d];
		VERIFSUM5(p, B, mem[i], div1[i], sum1[i]);
		}
       }
	
while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		i = f2[d];
		VERIFSUM2(p, B, 2, div1[i], sum1[i]);
		}
	}
	
if(!(mpz_cmp(B, p) ^ 1)) {
	mpz_mul(B, sumdoi, B);
	if(j) mpz_mul_2exp(B, B, j);
	return;
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
		if(!(mpz_cmp(B, p) ^ 1)) {
			mpz_mul(B, sumdoi, B);
			if(j) mpz_mul_2exp(B, B, j);
			return;
			}
		}
	}
}


void SUM7(mpz_t p, mpz_t B, gmp_ui *b, gmp_ui *b1, int D, int H, int K, int S, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, mpz_t sumdoi, int i) {
mpz_set_ui(B, 1);

if( !(++d ^ 89) || !(d ^ 107) || !(d ^ 127) ) {
	if(!mpz_cmp(p, sumdoi)) {
		mpz_mul_2exp(B, sumdoi, d);
		return;
		}
		
	mpz_divexact(p, p, sumdoi);
	i = d;
	}

d = H;
while(1) {
	if(!K--)
		break;
	if(mpz_divisible_ui_p(p, b[--d])) {
		VERIFSUM4(2, p, B, mem[d], div[K], sum[K], div1[d], sum1[d]);
		}
	}

while(1) {
       if(!S--)
           break;
       if(mpz_divisible_ui_p(p, b[--d])) {
		VERIFSUM5(p, B, mem[d], div1[d], sum1[d]);
		}
       }
	
while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		VERIFSUM2(p, B, 2, div1[d], sum1[d]);
		}
	}
	
if(!(mpz_cmp(B, p) ^ 1)) {
	mpz_mul(B, sumdoi, B);	
	mpz_mul_2exp(B, B, i);
	return;
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
		if(!(mpz_cmp(B, p) ^ 1)) {
			mpz_mul(B, sumdoi, B);
			mpz_mul_2exp(B, B, i);
			return;
			}
		}
	}
}


void NUMSUMPURG1(mpz_t p, mpz_t B, gmp_ui *b, gmp_ui *b1, int D, int H, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t sumdoi, int i) {
mpz_set_ui(B, 1);

if( !(++d ^ 89) || !(d ^ 107) ) {	
	mpz_divexact(p, p, sumdoi);		
	i = d;
	}
	
d = H;	
while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		VERIFSUM2(p, B, 2, div1[d], sum1[d]);
		}
	}

if(!(mpz_cmp(B, p) ^ 1)) {
	mpz_mul(B, sumdoi, B);
	if(i) mpz_mul_2exp(B, B, i);
	return;
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
	if(!(mpz_cmp(B, p) ^ 1)) {
		mpz_mul(B, sumdoi, B);
		if(i) mpz_mul_2exp(B, B, i);
		return;
			}
		}
	}
}


void NUMSUMV1(mpz_t p, mpz_t B, gmp_ui *b, gmp_ui *b1, int D, int H, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t sumdoi, int i) {
mpz_set_ui(B, 1);

if( !(++d ^ 89) || !(d ^ 107) || !(d ^ 127) ) {
	mpz_divexact(p, p, sumdoi);
	i = d;
	}

d = H;
while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		VERIFSUM2(p, B, 2, div1[d], sum1[d]);
		}
	}

if(!(mpz_cmp(B, p) ^ 1)) {
	mpz_mul(B, sumdoi, B);
	if(i) mpz_mul_2exp(B, B, i);
	return;
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
	if(!(mpz_cmp(B, p) ^ 1)) {
		mpz_mul(B, sumdoi, B);
		if(i) mpz_mul_2exp(B, B, i);
		return;
			}
		}
	}
}



void NUMSUMV2(mpz_t p, mpz_t B, mpz_t *C, mpz_t *C1, gmp_ui *b, gmp_ui *b1, int D, int E, int H, int S, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, mpz_t sumdoi, int i) {//210-220.
mpz_set_ui(B, 1);

if( !(++d ^ 89) || !(d ^ 107) || !(d ^ 127) ) {
	mpz_divexact(p, p, sumdoi);
	i = d;
	}

d = H;
while(1) {
       if(!S--)
           break;
       if(mpz_divisible_ui_p(p, b[--d])) {
		VERIFSUM5(p, B, mem[d], div1[d], sum1[d]);
		}
       }
       
while(1){
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		VERIFSUM2(p, B, 2, div1[d], sum1[d]);
		}
	}

if(!(mpz_cmp(B, p) ^ 1)) {
	mpz_mul(B, sumdoi, B);
	if(i) mpz_mul_2exp(B, B, i);
	return;
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
	if(!(mpz_cmp(B, p) ^ 1)) {
		mpz_mul(B, sumdoi, B);
		if(i) mpz_mul_2exp(B, B, i);
		return;
			}
		}
	}

while(1) {
	if(!E--)
		break;
	if(i && !(mpz_scan1(C1[E], 0) ^ i)) continue;
	if(mpz_divisible_p(p, C[E])) {
		mpz_mul(B, C1[E], B);
		if(!(mpz_cmp(B, p) ^ 1)) {
			mpz_mul(B, sumdoi, B);
			if(i) mpz_mul_2exp(B, B, i);
			return;
			}
		}
	}
}


void NUMSUMV3(mpz_t p, mpz_t B, gmp_ui *b, gmp_ui *b1, int D, int H, int S, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], int *mem, mpz_t sumdoi, int i) {//160-210.
mpz_set_ui(B, 1);

if( !(++d ^ 89) || !(d ^ 107) || !(d ^ 127) ) {
	mpz_divexact(p, p, sumdoi);
	i = d;
	}

d = H;
while(1) {
       if(!S--)
           break;
       if(mpz_divisible_ui_p(p, b[--d])) {
		VERIFSUM5(p, B, mem[d], div1[d], sum1[d]);
		}
       }
       
while(1){
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		VERIFSUM2(p, B, 2, div1[d], sum1[d]);
		}
	}

if(!(mpz_cmp(B, p) ^ 1)) {
	mpz_mul(B, sumdoi, B);
	if(i) mpz_mul_2exp(B, B, i);
	return;
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
	if(!(mpz_cmp(B, p) ^ 1)) {
		mpz_mul(B, sumdoi, B);
		if(i) mpz_mul_2exp(B, B, i);
		return;
			}
		}
	}
}


void SMV(mpz_t p, mpz_t B, gmp_ui *b, gmp_ui *b1, int D, int H, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui e) {
mpz_set_ui(B, 1);
d = H;

while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		VERIFSUM2(p, B, 2, div1[d], sum1[d]);
		}
	}

if(!(mpz_cmp(B, p) ^ 1)) {
	mpz_mul_ui(B, B, e);
	return;
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
		if(!(mpz_cmp(B, p) ^ 1)) {
			mpz_mul_ui(B, B, e);
			return;
			}
		}
	}

mpz_mul_ui(B, B, e);
}


void SUM(mpz_t A, mpz_t B, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, int D, int E, int d1, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t p, mpz_t sumdoi) {
mpz_set_ui(B, 1);
mpz_tdiv_q_2exp(p, A, d);
d = d1;

while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {		
		VERIFSUM2(p, B, 2, div1[d], sum1[d]);
		}
	}

while(1) {
	if(!(D-- ^ d1))
		break;		
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
		if(mpz_cmp(B, p) == 1) {
			mpz_mul(B, sumdoi, B);
			return;
			}
		}
	}

if(mpz_cmp(B, p) == 1) {
	mpz_mul(B, sumdoi, B);
	return;
	}	
	
while(1) {
	if(!E--)
		break;
	if(mpz_divisible_p(p, C[E])) {
		mpz_mul(B, B, C1[E]);
			if(mpz_cmp(B, p) == 1) {
				mpz_mul(B, sumdoi, B);
				return;
			}
		}
	}		
}


void SUM1(mpz_t A, mpz_t B, gmp_ui *b, gmp_ui *b1, mpz_t *C, mpz_t *C1, int D, int E, int d1, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t p, mpz_t sumdoi, int *f2) {
mpz_set(B, sumdoi);
mpz_tdiv_q_2exp(p, A, mpz_scan1(A, 0));
d = d1;

while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		VERIFSUM2(p, B, 2, div1[f2[d]], sum1[f2[d]]);
		}
	}
while(1) {
	if(!(D-- ^ d1))
		break;
		
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
		}
	}

while(1) {
	if(!E--)
		break;
	mpz_mul(B, B, C1[E]);
	}
}


void SUMADIV22(mpz_t p, mpz_t B, mpz_t *C, mpz_t *C1, gmp_ui *b, gmp_ui *b1, int D, int E, int H, int K, int S, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int *mem, int *f2, mpz_t sumdoi, int i) {
mpz_set_ui(B, 1);

d = H;
while(1) {
	if(!K--)
		break;
	if(mpz_divisible_ui_p(p, b[--d])) {
		i = f2[d];
		VERIFSUM4(2, p, B, mem[i], div[i], sum[i], div1[i], sum1[i]);
		}
	}
while(1) {
	if(!S--)
		break;
	if(mpz_divisible_ui_p(p, b[--d])) {
		i = f2[d];
		VERIFSUM5(p, B, mem[i], div1[i], sum1[i]);
		}
	}
while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		VERIFSUM2(p, B, 2, div1[f2[d]], sum1[f2[d]]);
		}
	}

if(mpz_cmp(B, p) == 1) {
	mpz_mul(B, sumdoi, B);
	return;
	}

while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
		if(mpz_cmp(B, p) == 1) {
			mpz_mul(B, sumdoi, B);
			return;
			}
		}
	}

while(1) {
	if(!E--)
		break;
	if(mpz_divisible_p(p, C[E])) {
		mpz_mul(B, B, C1[E]);
		if(mpz_cmp(B, p) == 1) {
			mpz_mul(B, sumdoi, B);
			return;
			}
		}
	}
}


void SUMADIVV3(mpz_t p, mpz_t B, mpz_t *C, mpz_t *C1, gmp_ui *b, gmp_ui *b1, int D, int E, int H, int K, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], mpz_t sumdoi, int *mem, int *f2, int i) {
mpz_set_ui(B, 1);
d = H;

while(1) {
	if(!K--)
		break;
	if(mpz_divisible_ui_p(p, b[--d])) {
		i = f2[d];
		VERIFSUM4(2, p, B, mem[i], div[i], sum[i], div1[i], sum1[i]);
		}
	}

while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		VERIFSUM2(p, B, 2, div1[f2[d]], sum1[f2[d]]);
		}
	}
if(mpz_cmp(B, p) == 1) {
	mpz_mul(B, sumdoi, B);
	return;
}
while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
		if(mpz_cmp(B, p) == 1) {
			mpz_mul(B, sumdoi, B);
			return;
			}
		}
	}

while(1) {
	if(!E--)
		break;
	mpz_mul(B, B, C1[E]);	
	}

mpz_mul(B, sumdoi, B);
}


void SUMADIVPURG4(mpz_t p, mpz_t B, mpz_t *C, mpz_t *C1, gmp_ui *b, gmp_ui *b1, int D, int E, int H, int K, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], mpz_t sumdoi, int *mem, int *f2, int i, int i1) {//Necesită PURGANTE2.
mpz_set_ui(B, 1);

if( !(++d ^ 89) || !(d ^ 107) ) {
	mpz_divexact(p, p, sumdoi);
	i1 = d;	
	}

d = H;
while(1) {
	if(!K--)
		break;
	if(mpz_divisible_ui_p(p, b[--d])) {
		i = f2[d];
		VERIFSUM4(2, p, B, mem[i], div[i], sum[i], div1[i], sum1[i]);
		}
	}

while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		VERIFSUM2(p, B, 2, div1[f2[d]], sum1[f2[d]]);
		}
	}
	
if(mpz_cmp(B, p) == 1) {
	mpz_mul(B, sumdoi, B);
	if(i1) mpz_mul_2exp(B, B, i1);
	return;
	}
	
while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
		if(mpz_cmp(B, p) == 1) {
			mpz_mul(B, sumdoi, B);
			if(i1) mpz_mul_2exp(B, B, i1);
			return;
			}
		}
	}

while(1) {
	if(!E--)
		break;
	if(mpz_divisible_p(p, C[E])) {
		mpz_mul(B, B, C1[E]);
		if(mpz_cmp(B, p) == 1) {
			mpz_mul(B, sumdoi, B);
			if(i1) mpz_mul_2exp(B, B, i1);
			return;
			}
		}
	}
}


void SUMADIVV4(mpz_t p, mpz_t B, mpz_t *C, mpz_t *C1, gmp_ui *b, gmp_ui *b1, int D, int E, int H, int K, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], mpz_t sumdoi, int *mem, int *f2, int i, int i1) {//Necesită PURGANTE.
mpz_set_ui(B, 1);

if( !(++d ^ 89) || !(d ^ 107) || !(d ^ 127) ) {
	mpz_divexact(p, p, sumdoi);
	i1 = d;	
	}

d = H;
while(1) {
	if(!K--)
		break;
	if(mpz_divisible_ui_p(p, b[--d])) {
		i = f2[d];
		VERIFSUM4(2, p, B, mem[i], div[i], sum[i], div1[i], sum1[i]);
		}
	}

while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		VERIFSUM2(p, B, 2, div1[f2[d]], sum1[f2[d]]);
		}
	}
	
if(mpz_cmp(B, p) == 1) {
	mpz_mul(B, sumdoi, B);
	if(i1) mpz_mul_2exp(B, B, i1);
	return;
	}
	
while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
		if(mpz_cmp(B, p) == 1) {
			mpz_mul(B, sumdoi, B);
			if(i1) mpz_mul_2exp(B, B, i1);
			return;
			}
		}
	}

while(1) {
	if(!E--)
		break;
	if(mpz_divisible_p(p, C[E])) {
		mpz_mul(B, B, C1[E]);
		if(mpz_cmp(B, p) == 1) {
			mpz_mul(B, sumdoi, B);
			if(i1) mpz_mul_2exp(B, B, i1);
			return;
			}
		}
	}
}


void SUMADIVPURG5(mpz_t p, mpz_t B, mpz_t *C, mpz_t *C1, gmp_ui *b, gmp_ui *b1, int D, int E, int H, int K, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], mpz_t sumdoi, int *mem, int *f2, int i, int i1) {
mpz_set_ui(B, 1);

if( !(++d ^ 89) || !(d ^ 107) ) {
	mpz_divexact(p, p, sumdoi);
	i1 = d;
	}
	
d = H;

while(1) {
	if(!K--)
		break;
	if(mpz_divisible_ui_p(p, b[--d])) {
		i = f2[d];
		VERIFSUM4(2, p, B, mem[i], div[i], sum[i], div1[i], sum1[i]);
		}
	}

while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		VERIFSUM2(p, B, 2, div1[f2[d]], sum1[f2[d]]);
		}
	}
	
if(mpz_cmp(B, p) == 1) {
	mpz_mul(B, sumdoi, B);
	if(i1) mpz_mul_2exp(B, B, i1);
	return;
	}
	
while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
		if(mpz_cmp(B, p) == 1) {
			mpz_mul(B, sumdoi, B);
			if(i1) mpz_mul_2exp(B, B, i1);
			return;
			}
		}
	}

while(1) {
	if(!E--)
		break;
	mpz_mul(B, B, C1[E]);	
	}
	
mpz_mul(B, sumdoi, B);
if(i1) mpz_mul_2exp(B, B, i1);
}


void SUMADIVV5(mpz_t p, mpz_t B, mpz_t *C, mpz_t *C1, gmp_ui *b, gmp_ui *b1, int D, int E, int H, int K, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], mpz_t sumdoi, int *mem, int *f2, int i, int i1) {
mpz_set_ui(B, 1);

if( !(++d ^ 89) || !(d ^ 107) || !(d ^ 127) ) {
	mpz_divexact(p, p, sumdoi);
	i1 = d;
	}
	
d = H;

while(1) {
	if(!K--)
		break;
	if(mpz_divisible_ui_p(p, b[--d])) {
		i = f2[d];
		VERIFSUM4(2, p, B, mem[i], div[i], sum[i], div1[i], sum1[i]);
		}
	}

while(1) {
	if(!d--)
		break;
	if(mpz_divisible_ui_p(p, b[d])) {
		VERIFSUM2(p, B, 2, div1[f2[d]], sum1[f2[d]]);
		}
	}
	
if(mpz_cmp(B, p) == 1) {
	mpz_mul(B, sumdoi, B);
	if(i1) mpz_mul_2exp(B, B, i1);
	return;
	}
	
while(1) {
	if(!(D-- ^ H))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(B, B, b1[D]);
		if(mpz_cmp(B, p) == 1) {
			mpz_mul(B, sumdoi, B);
			if(i1) mpz_mul_2exp(B, B, i1);
			return;
			}
		}
	}

while(1) {
	if(!E--)
		break;
	mpz_mul(B, B, C1[E]);	
	}
	
mpz_mul(B, sumdoi, B);
if(i1) mpz_mul_2exp(B, B, i1);
}


void SMOD(mpz_t p, mpz_t doi, gmp_ui *b, gmp_ui *b1, gmp_ui e, int D, int d1, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui &j1, gmp_ui &j2, gmp_ui &k, gmp_ui &nm, gmp_ui &nr) {//52.
d = d1;
mpz_set_ui(doi, 1);

while(1) {
	if(!d--)
		break;	
	if(mpz_divisible_ui_p(p, b[d])) {
		for(e = 2; mpz_divisible_ui_p(p, div1[d][e]); e += 2);		
		e = sum1[d][e];
		mpz_mul_ui(doi, doi, k = mpz_divisible_ui_p(p, div1[d][--e])? div1[d][e] : div1[d][--e]);
		j1 = CMMDCA(nm, e, nm%e);
		j2 = CMMDCA(nr, k, nr%k);
		nm = (nm / j1) * (k / j2);
		nr = (nr / j2) * (e / j1);
		}
	}

if(!mpz_cmp(doi, p))
	return;

while(1) {
	if(!(D-- ^ d1))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(doi, doi, b[D]);
		j1 = CMMDCA(nm, e = b1[D], nm % b1[D]);
		j2 = CMMDCA(nr, b[D], nr % b[D]);
		nm = (nm / j1) * (b[D] / j2);
		nr = (nr / j2) * (e / j1);		
		if(!mpz_cmp(doi, p))
			return;
		}
	}
}


void NUMSUMMODPURG1(mpz_t p, mpz_t doi, mpz_t trei, mpz_t d2, gmp_ui *b, gmp_ui *b1, gmp_ui &e, int D, int d1, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui &j1, gmp_ui &j2, gmp_ui &k, mpz_t nm, mpz_t nr, mpz_t q, mpz_t qq) {//70.

mpz_set_ui(doi, 1);
if( !(++d ^ 89) || !(d ^ 107) ) {
	mpz_set_ui(nm, 1);
	mpz_set_ui(nr, 2);	
	mpz_divexact(p, p, q);
	goto n1;
	}

mpz_set(nm, qq);
mpz_set(nr, q);
n1:
d = d1;

while(1) {
	if(!d--)
		break;	
	if(mpz_divisible_ui_p(p, b[d]))	{
		for(e = 2; mpz_divisible_ui_p(p, div1[d][e]); e += 2);
		mpz_mul_ui(doi, doi, k = mpz_divisible_ui_p(p, div1[d][--e])? div1[d][e] : div1[d][--e]);
		mpz_gcd_ui(d2, nm, e = sum1[d][e]);
		mpz_gcd_ui(trei, nr, k);
		mpz_divexact_ui(nm, nm, j1 = mpz_get_ui(d2));
		mpz_divexact_ui(nr, nr, j2 = mpz_get_ui(trei));
		mpz_mul_ui(nm, nm, k / j2);
		mpz_mul_ui(nr, nr, e / j1);
		}
	}	
if(!mpz_cmp(doi, p))
	return;
while(1) {
	if(!(D-- ^ d1))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(doi, doi, b[D]);
		mpz_gcd_ui(d2, nm, b1[D]);
		mpz_gcd_ui(trei, nr, b[D]);
		mpz_divexact_ui(nm, nm, j1 = mpz_get_ui(d2));
		mpz_divexact_ui(nr, nr, j2 = mpz_get_ui(trei));
		mpz_mul_ui(nm, nm, b[D] / j2);
		mpz_mul_ui(nr, nr, b1[D] / j1);
		if(!mpz_cmp(doi, p))
			return;
		}
	}
}


void NUMSUMMOD1(mpz_t p, mpz_t doi, mpz_t trei, mpz_t d2, gmp_ui *b, gmp_ui *b1, gmp_ui &e, int D, int d1, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui &j1, gmp_ui &j2, gmp_ui &k, mpz_t nm, mpz_t nr, mpz_t q, mpz_t qq) {//160.

//mpz_tdiv_q_2exp(p, A, d);//89
mpz_set_ui(doi, 1);
/*
mpz_set_ui(nm, 0);
mpz_setbit(nm, d++);//2 la 88
mpz_set_ui(nr, 0);
mpz_setbit(nr, d);
mpz_sub_ui(nr, nr, 1);//2 la 89 - 1
*/
if( !(++d ^ 89) || !(d ^ 107) || !(d ^ 127) ) {
	mpz_set_ui(nm, 1);
	mpz_set_ui(nr, 2);	
	mpz_divexact(p, p, q);
	goto n1;/*
	mpz_set_ui(doi, 1);
	mpz_set_ui(d2, 0);
	mpz_setbit(d2, d);//2 la 89
	mpz_gcd(B, nm, d2);//2 la 88
	mpz_sub_ui(trei, d2, 1);//2 la 89 - 1
	mpz_mul(doi, doi, trei);//La fel
	mpz_gcd(unu, nr, trei);//Sunt egale
	mpz_divexact(nm, nm, B);//1
	mpz_divexact(nr, nr, unu);//1
	mpz_divexact(unu, trei, unu);//1
	mpz_mul(nm, nm, unu);//1
	mpz_divexact(B, d2, B);//2
	mpz_mul(nr, nr, B);//2
	//mpz_set(d1, doi);
	//mpz_mul_2exp(doi, d);
	//mpz_sub(doi, doi, d1);
	//mpz_mul_2exp(nr, d);
	//mpz_divexact(d1, doi, d1);
	//mpz_mul(nm, nm, d1);*/
	}

mpz_set(nm, qq);
mpz_set(nr, q);
n1:
d = d1;

while(1) {
	if(!d--)
		break;	
	if(mpz_divisible_ui_p(p, b[d]))	{
		for(e = 2; mpz_divisible_ui_p(p, div1[d][e]); e += 2);
		mpz_mul_ui(doi, doi, k = mpz_divisible_ui_p(p, div1[d][--e])? div1[d][e] : div1[d][--e]);
		mpz_gcd_ui(d2, nm, e = sum1[d][e]);
		mpz_gcd_ui(trei, nr, k);
		mpz_divexact_ui(nm, nm, j1 = mpz_get_ui(d2));
		mpz_divexact_ui(nr, nr, j2 = mpz_get_ui(trei));
		mpz_mul_ui(nm, nm, k / j2);
		mpz_mul_ui(nr, nr, e / j1);
		}
	}	
if(!mpz_cmp(doi, p))
	return;
while(1) {
	if(!(D-- ^ d1))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(doi, doi, b[D]);
		mpz_gcd_ui(d2, nm, b1[D]);
		mpz_gcd_ui(trei, nr, b[D]);
		mpz_divexact_ui(nm, nm, j1 = mpz_get_ui(d2));
		mpz_divexact_ui(nr, nr, j2 = mpz_get_ui(trei));
		mpz_mul_ui(nm, nm, b[D] / j2);
		mpz_mul_ui(nr, nr, b1[D] / j1);
		if(!mpz_cmp(doi, p))
			return;
		}
	}
}


void NUMSUMMOD(mpz_t p, mpz_t B, mpz_t doi, mpz_t trei, mpz_t d2, gmp_ui *b, gmp_ui *b1, gmp_ui &e, int D, int d1, int S, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui &j1, gmp_ui &j2, gmp_ui &k, mpz_t nm, mpz_t nr, mpz_t q, mpz_t qq, int *mem) {//210 fără K.
mpz_set_ui(doi, 1);

if( !(++d ^ 89) || !(d ^ 107) || !(d ^ 127) ) {
	mpz_set_ui(nm, 1);
	mpz_set_ui(nr, 2);
	mpz_divexact(p, p, q);
	goto n1;
	//mpz_set(doi, q2[--d]);
	//mpz_divexact(p, p, q2[--d]);
	}
	
mpz_set(nm, qq);
mpz_set(nr, q);
n1:
d = d1;

while(1) {
	if(!S--)
		break;	
	if(mpz_divisible_ui_p(p, b[--d])) {
		for(e = mem[d]; !mpz_divisible_ui_p(p, div1[d][e]); e -= 2);
		mpz_mul_ui(doi, doi, k = mpz_divisible_ui_p(p, div1[d][++e])? div1[d][e] : div1[d][--e]);
		mpz_gcd_ui(d2, nm, e = sum1[d][e]);
		mpz_gcd_ui(trei, nr, k);
		mpz_divexact_ui(nm, nm, j1 = mpz_get_ui(d2));
		mpz_divexact_ui(nr, nr, j2 = mpz_get_ui(trei));
		mpz_mul_ui(nm, nm, k / j2);
		mpz_mul_ui(nr, nr, e / j1);
		}
	}

while(1) {
	if(!d--)
		break;	
	if(mpz_divisible_ui_p(p, b[d]))	{
		for(e = 2; mpz_divisible_ui_p(p, div1[d][e]); e += 2);
		mpz_mul_ui(doi, doi, k = mpz_divisible_ui_p(p, div1[d][--e])? div1[d][e] : div1[d][--e]);
		mpz_gcd_ui(d2, nm, e = sum1[d][e]);
		mpz_gcd_ui(trei, nr, k);
		mpz_divexact_ui(nm, nm, j1 = mpz_get_ui(d2));
		mpz_divexact_ui(nr, nr, j2 = mpz_get_ui(trei));
		mpz_mul_ui(nm, nm, k / j2);
		mpz_mul_ui(nr, nr, e / j1);
		}
	}
if(!mpz_cmp(doi, p))
	return;
while(1) {
	if(!(D-- ^ d1))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(doi, doi, b[D]);
		mpz_gcd_ui(d2, nm, b1[D]);
		mpz_gcd_ui(trei, nr, b[D]);
		mpz_divexact_ui(nm, nm, j1 = mpz_get_ui(d2));
		mpz_divexact_ui(nr, nr, j2 = mpz_get_ui(trei));
		mpz_mul_ui(nm, nm, b[D] / j2);
		mpz_mul_ui(nr, nr, b1[D] / j1);
		if(!mpz_cmp(doi, p))
			return;
		}
	}
}


void SUMDIVMOD1(mpz_t p, mpz_t B, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d2, gmp_ui *b, gmp_ui *b1, gmp_ui &e, int D, int d1, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t *C, mpz_t *C1, int E, int S, gmp_ui &j1, gmp_ui &j2, gmp_ui &k, mpz_t nm, mpz_t nr, mpz_t q, mpz_t qq, int *mem, int i) {//220.
mpz_set_ui(doi, 1);

if( !(++d ^ 89) || !(d ^ 107) || !(d ^ 127) ) {
	mpz_set_ui(nm, 1);
	mpz_set_ui(nr, 2);
	mpz_divexact(p, p, q);
	i = d;
	goto n1;
	}

mpz_set(nr, q);
mpz_set(nm, qq);
n1:
d = d1;

while(1) {
	if(!S--)
		break;	
	if(mpz_divisible_ui_p(p, b[--d])) {
		for(e = mem[d]; !mpz_divisible_ui_p(p, div1[d][e]); e -= 2);
		mpz_mul_ui(doi, doi, k = mpz_divisible_ui_p(p, div1[d][++e])? div1[d][e] : div1[d][--e]);
		mpz_gcd_ui(d2, nm, e = sum1[d][e]);
		mpz_gcd_ui(trei, nr, k);
		mpz_divexact_ui(nm, nm, j1 = mpz_get_ui(d2));
		mpz_divexact_ui(nr, nr, j2 = mpz_get_ui(trei));
		mpz_mul_ui(nm, nm, k / j2);
		mpz_mul_ui(nr, nr, e / j1);
		}
	}

while(1) {
	if(!d--)
		break;	
	if(mpz_divisible_ui_p(p, b[d]))	{
		for(e = 2; mpz_divisible_ui_p(p, div1[d][e]); e += 2);
		mpz_mul_ui(doi, doi, k = mpz_divisible_ui_p(p, div1[d][--e])? div1[d][e] : div1[d][--e]);
		mpz_gcd_ui(d2, nm, e = sum1[d][e]);
		mpz_gcd_ui(trei, nr, k);
		mpz_divexact_ui(nm, nm, j1 = mpz_get_ui(d2));
		mpz_divexact_ui(nr, nr, j2 = mpz_get_ui(trei));
		mpz_mul_ui(nm, nm, k / j2);
		mpz_mul_ui(nr, nr, e / j1);
		}
	}
if(!mpz_cmp(doi, p))
	return;
while(1) {
	if(!(D-- ^ d1))
		break;
	if(mpz_divisible_ui_p(p, b[D]))	{
		e = b1[D];
		mpz_mul_ui(doi, doi, b[D]);
		mpz_gcd_ui(d2, nm, e);
		mpz_gcd_ui(trei, nr, b[D]);
		mpz_divexact_ui(nm, nm, j1 = mpz_get_ui(d2));
		mpz_divexact_ui(nr, nr, j2 = mpz_get_ui(trei));
		mpz_mul_ui(nm, nm, b[D] / j2);
		mpz_mul_ui(nr, nr, e / j1);			
		if(!mpz_cmp(doi, p))
			return;
		}
	}

while(1) {
	if(!E--)
		break;
	if(i && !(i ^ mpz_scan1(C1[E], 0))) continue;
	if(mpz_divisible_p(p, C[E])) {
		mpz_mul(doi, doi, C[E]);
		mpz_gcd(d2, nm, C1[E]);
		mpz_gcd(trei, nr, C[E]);
		mpz_divexact(nm, nm, d2);
		mpz_divexact(nr, nr, trei);
		mpz_divexact(unu, C[E], trei);
		mpz_mul(nm, nm, unu);
		mpz_divexact(unu, C1[E], d2);
		mpz_mul(nr, nr, unu);		
		if(!mpz_cmp(doi, p))
			return;
		}
	}
}


void SUMDIVMOD2(mpz_t p, mpz_t B, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d2, gmp_ui *b, gmp_ui *b1, gmp_ui &e, int D, int d1, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], mpz_t *C, mpz_t *C1, int E, int K, int S, gmp_ui &j1, gmp_ui &j2, gmp_ui &k, mpz_t nm, mpz_t nr, mpz_t q, mpz_t qq, int *mem, int i) {//240.
mpz_set_ui(doi, 1);

if( !(++d ^ 89) || !(d ^ 107) || !(d ^ 127) ) {
	mpz_set_ui(nm, 1);
	mpz_set_ui(nr, 2);
	mpz_divexact(p, p, q);
	i = d;
	goto n1;
	}

mpz_set(nr, q);
mpz_set(nm, qq);
n1:
d = d1;
while(1) {
	if(!K--)
		break;
	if(mpz_divisible_ui_p(p, b[--d])) {
		if(mpz_divisible_p(p, div[K][1])) {
			for(; mpz_divisible_p(p, div[K][e]); e += 2);
			mpz_mul(doi, doi, mpz_divisible_p(p, div[K][--e])? div[K][e] : div[K][--e]);
			mpz_gcd(d2, nm, sum[K][e]);
			mpz_gcd(trei, nr, div[K][e]);
			mpz_divexact(nm, nm, d2);
			mpz_divexact(nr, nr, trei);
			mpz_divexact(B, div[K][e], trei);
			mpz_mul(nm, nm, B);
			mpz_divexact(B, sum[K][e], d2);
			mpz_mul(nr, nr, B);
			continue;
		}
		
		for(e = mem[d]; !mpz_divisible_ui_p(p, div1[d][e]); e -= 2);
		mpz_mul_ui(doi, doi, mpz_divisible_ui_p(p, div1[d][++e])? div1[d][e] : div1[d][--e]);
		mpz_gcd_ui(d2, nm, e = sum1[d][e]);
		mpz_gcd_ui(trei, nr, k = div1[d][e]);
		mpz_divexact_ui(nm, nm, j1 = mpz_get_ui(d2));
		mpz_divexact_ui(nr, nr, j2 = mpz_get_ui(trei));
		mpz_mul_ui(nm, nm, k / j2);
		mpz_mul_ui(nr, nr, e / j1);		
	}
}

while(1) {
	if(!S--)
		break;	
	if(mpz_divisible_ui_p(p, b[--d])) {
		for(e = mem[d]; !mpz_divisible_ui_p(p, div1[d][e]); e -= 2);
		mpz_mul_ui(doi, doi, k = mpz_divisible_ui_p(p, div1[d][++e])? div1[d][e] : div1[d][--e]);
		mpz_gcd_ui(d2, nm, e = sum1[d][e]);
		mpz_gcd_ui(trei, nr, k);
		mpz_divexact_ui(nm, nm, j1 = mpz_get_ui(d2));
		mpz_divexact_ui(nr, nr, j2 = mpz_get_ui(trei));
		mpz_mul_ui(nm, nm, k / j2);
		mpz_mul_ui(nr, nr, e / j1);
		}
	}

while(1) {
	if(!d--)
		break;	
	if(mpz_divisible_ui_p(p, b[d]))	{
		for(e = 2; mpz_divisible_ui_p(p, div1[d][e]); e += 2);
		mpz_mul_ui(doi, doi, k = mpz_divisible_ui_p(p, div1[d][--e])? div1[d][e] : div1[d][--e]);
		mpz_gcd_ui(d2, nm, e = sum1[d][e]);
		mpz_gcd_ui(trei, nr, k);
		mpz_divexact_ui(nm, nm, j1 = mpz_get_ui(d2));
		mpz_divexact_ui(nr, nr, j2 = mpz_get_ui(trei));
		mpz_mul_ui(nm, nm, k / j2);
		mpz_mul_ui(nr, nr, e / j1);
		}
	}
if(!mpz_cmp(doi, p))
	return;
while(1) {
	if(!(D-- ^ d1))
		break;
	if(mpz_divisible_ui_p(p, b[D]))	{
		e = b1[D];
		mpz_mul_ui(doi, doi, b[D]);
		mpz_gcd_ui(d2, nm, e);
		mpz_gcd_ui(trei, nr, b[D]);
		mpz_divexact_ui(nm, nm, j1 = mpz_get_ui(d2));
		mpz_divexact_ui(nr, nr, j2 = mpz_get_ui(trei));
		mpz_mul_ui(nm, nm, b[D] / j2);
		mpz_mul_ui(nr, nr, e / j1);			
		if(!mpz_cmp(doi, p))
			return;
		}
	}

while(1) {
	if(!E--)
		break;
	if(i && !(i ^ mpz_scan1(C1[E], 0))) continue;
	if(mpz_divisible_p(p, C[E])) {
		mpz_mul(doi, doi, C[E]);
		mpz_gcd(d2, nm, C1[E]);
		mpz_gcd(trei, nr, C[E]);
		mpz_divexact(nm, nm, d2);
		mpz_divexact(nr, nr, trei);
		mpz_divexact(unu, C[E], trei);
		mpz_mul(nm, nm, unu);
		mpz_divexact(unu, C1[E], d2);
		mpz_mul(nr, nr, unu);		
		if(!mpz_cmp(doi, p))
			return;
		}
	}
}


void SUMDIVMODMARE(mpz_t p, mpz_t B, mpz_t unu, mpz_t doi, mpz_t trei, mpz_t d2, gmp_ui *b, gmp_ui *b1, gmp_ui &e, int D, int d1, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], mpz_t *C, mpz_t *C1, int E, int K, int S, gmp_ui &j1, gmp_ui &j2, gmp_ui &k, mpz_t nm, mpz_t nr, mpz_t q, mpz_t qq, int *mem) {//1910.
mpz_set_ui(doi, 1);
mpz_set(nm, qq);
mpz_set(nr, q);
d = d1;

while(1) {
	if(!K--)
		break;
	if(mpz_divisible_ui_p(p, b[--d])) {
		if(mpz_divisible_p(p, div[K][1])) {
			for(; mpz_divisible_p(p, div[K][e]); e += 2);
			mpz_mul(doi, doi, mpz_divisible_p(p, div[K][--e])? div[K][e] : div[K][--e]);
			mpz_gcd(d2, nm, sum[K][e]);
			mpz_gcd(trei, nr, div[K][e]);
			mpz_divexact(nm, nm, d2);
			mpz_divexact(nr, nr, trei);
			mpz_divexact(B, div[K][e], trei);
			mpz_mul(nm, nm, B);		
			mpz_divexact(B, sum[K][e], d2);
			mpz_mul(nr, nr, B);
			continue;
		}	
		for(e = mem[d]; !mpz_divisible_ui_p(p, div1[d][e]); e -= 2);
		mpz_mul_ui(doi, doi, k = mpz_divisible_ui_p(p, div1[d][++e])? div1[d][e] : div1[d][--e]);
		mpz_gcd_ui(d2, nm, e = sum1[d][e]);
		mpz_gcd_ui(trei, nr, k);
		mpz_divexact_ui(nm, nm, j1 = mpz_get_ui(d2));
		mpz_divexact_ui(nr, nr, j2 = mpz_get_ui(trei));
		mpz_mul_ui(nm, nm, k / j2);
		mpz_mul_ui(nr, nr, e / j1);		
	}
}

while(1) {
	if(!S--)
		break;	
	if(mpz_divisible_ui_p(p, b[--d])) {
		for(e = mem[d]; !mpz_divisible_ui_p(p, div1[d][e]); e -= 2);
		mpz_mul_ui(doi, doi, k = mpz_divisible_ui_p(p, div1[d][++e])? div1[d][e] : div1[d][--e]);
		mpz_gcd_ui(d2, nm, e = sum1[d][e]);
		mpz_gcd_ui(trei, nr, k);
		mpz_divexact_ui(nm, nm, j1 = mpz_get_ui(d2));
		mpz_divexact_ui(nr, nr, j2 = mpz_get_ui(trei));
		mpz_mul_ui(nm, nm, k / j2);
		mpz_mul_ui(nr, nr, e / j1);
		}
	}
	
while(1) {
	if(!d--)
		break;	
	if(mpz_divisible_ui_p(p, b[d])) {
		for(e = 2; mpz_divisible_ui_p(p, div1[d][e]); e += 2);
		mpz_mul_ui(doi, doi, k = mpz_divisible_ui_p(p, div1[d][--e])? div1[d][e] : div1[d][--e]);
		mpz_gcd_ui(d2, nm, e = sum1[d][e]);
		mpz_gcd_ui(trei, nr, k);
		mpz_divexact_ui(nm, nm, j1 = mpz_get_ui(d2));
		mpz_divexact_ui(nr, nr, j2 = mpz_get_ui(trei));
		mpz_mul_ui(nm, nm, k / j2);
		mpz_mul_ui(nr, nr, e / j1);
		}
	}
	
if(!mpz_cmp(doi, p))
	return;
while(1) {
	if(!(D-- ^ d1))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(doi, doi, b[D]);
		mpz_gcd_ui(d2, nm, b1[D]);
		mpz_gcd_ui(trei, nr, b[D]);
		mpz_divexact_ui(nm, nm, j1 = mpz_get_ui(d2));
		mpz_divexact_ui(nr, nr, j2 = mpz_get_ui(trei));
		mpz_mul_ui(nm, nm, b[D] / j2);
		mpz_mul_ui(nr, nr, b1[D] / j1);
		if(!mpz_cmp(doi, p))
			return;
		}
	}

while(1) {
	if(!E--)
		break;
	if(mpz_divisible_p(p, C[E])) {
		mpz_mul(doi, doi, C[E]);
		mpz_gcd(d2, nm, C1[E]);
		mpz_gcd(trei, nr, C[E]);
		mpz_divexact(nm, nm, d2);
		mpz_divexact(nr, nr, trei);
		mpz_divexact(unu, C[E], trei);
		mpz_mul(nm, nm, unu);
		mpz_divexact(unu, C1[E], d2);
		mpz_mul(nr, nr, unu);		
		if(!mpz_cmp(doi, p))
			return;
		}
	}
}


void NUMSUMEMOD(mpz_t p, mpz_t B, mpz_t doi, mpz_t trei, mpz_t d2, gmp_ui *b, gmp_ui *b1, gmp_ui &e, int D, int d1, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], mpz_t div[][MAX1], mpz_t sum[][MAX1], int K, int S, gmp_ui &j1, gmp_ui &j2, gmp_ui &k, mpz_t nm, mpz_t nr, mpz_t q, mpz_t qq, int *mem) {//210 cu K.
mpz_set_ui(doi, 1);

if( !(++d ^ 89) || !(d ^ 107) || !(d ^ 127) ) {
	mpz_set_ui(nm, 1);
	mpz_set_ui(nr, 2);
	mpz_divexact(p, p, q);
	goto n1;
	//mpz_set(doi, q2[--d]);
	//mpz_divexact(p, p, q2[--d]);
	}
	
mpz_set(nm, qq);
mpz_set(nr, q);
n1:
d = d1;
while(1) {
	if(!K--)
		break;

	if(mpz_divisible_ui_p(p, b[--d])) {
		if(mpz_divisible_p(p, div[K][1])) {
			for(; mpz_divisible_p(p, div[K][e]); e += 2);
			mpz_mul(doi, doi, mpz_divisible_p(p, div[K][--e])? div[K][e] : div[K][--e]);
			mpz_gcd(d2, nm, sum[K][e]);
			mpz_gcd(trei, nr, div[K][e]);
			mpz_divexact(nm, nm, d2);
			mpz_divexact(nr, nr, trei);
			mpz_divexact(B, div[K][e], trei);
			mpz_mul(nm, nm, B);		
			mpz_divexact(B, sum[K][e], d2);
			mpz_mul(nr, nr, B);
			continue;
		}

		for(e = mem[d]; !mpz_divisible_ui_p(p, div1[d][e]); e -= 2);
		mpz_mul_ui(doi, doi, k = mpz_divisible_ui_p(p, div1[d][++e])? div1[d][e] : div1[d][--e]);
		mpz_gcd_ui(d2, nm, e = sum1[d][e]);
		mpz_gcd_ui(trei, nr, k);
		mpz_divexact_ui(nm, nm, j1 = mpz_get_ui(d2));
		mpz_divexact_ui(nr, nr, j2 = mpz_get_ui(trei));
		mpz_mul_ui(nm, nm, k / j2);
		mpz_mul_ui(nr, nr, e / j1);		
	}
}

while(1) {
	if(!S--)
		break;	
	if(mpz_divisible_ui_p(p, b[--d])) {
		for(e = mem[d]; !mpz_divisible_ui_p(p, div1[d][e]); e -= 2);
		mpz_mul_ui(doi, doi, k = mpz_divisible_ui_p(p, div1[d][++e])? div1[d][e] : div1[d][--e]);
		mpz_gcd_ui(d2, nm, e = sum1[d][e]);
		mpz_gcd_ui(trei, nr, k);
		mpz_divexact_ui(nm, nm, j1 = mpz_get_ui(d2));
		mpz_divexact_ui(nr, nr, j2 = mpz_get_ui(trei));
		mpz_mul_ui(nm, nm, k / j2);
		mpz_mul_ui(nr, nr, e / j1);
		}
	}

while(1) {
	if(!d--)
		break;	
	if(mpz_divisible_ui_p(p, b[d]))	{
		for(e = 2; mpz_divisible_ui_p(p, div1[d][e]); e += 2);
		mpz_mul_ui(doi, doi, k = mpz_divisible_ui_p(p, div1[d][--e])? div1[d][e] : div1[d][--e]);
		mpz_gcd_ui(d2, nm, e = sum1[d][e]);
		mpz_gcd_ui(trei, nr, k);
		mpz_divexact_ui(nm, nm, j1 = mpz_get_ui(d2));
		mpz_divexact_ui(nr, nr, j2 = mpz_get_ui(trei));
		mpz_mul_ui(nm, nm, k / j2);
		mpz_mul_ui(nr, nr, e / j1);
		}
	}
if(!mpz_cmp(doi, p))
	return;
while(1) {
	if(!(D-- ^ d1))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(doi, doi, b[D]);
		mpz_gcd_ui(d2, nm, b1[D]);
		mpz_gcd_ui(trei, nr, b[D]);
		mpz_divexact_ui(nm, nm, j1 = mpz_get_ui(d2));
		mpz_divexact_ui(nr, nr, j2 = mpz_get_ui(trei));
		mpz_mul_ui(nm, nm, b[D] / j2);
		mpz_mul_ui(nr, nr, b1[D] / j1);
		if(!mpz_cmp(doi, p))
			return;
		}
	}
}


void SMOD1(mpz_t p, mpz_t doi, gmp_ui *b, gmp_ui *b1, gmp_ui e, int D, int d1, int d, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui &j1, gmp_ui &j2, gmp_ui &k, int *f2, gmp_ui &nm, gmp_ui &nr) {//52 stil VECUN.
d = d1;
mpz_set_ui(doi, 1);
//nr = 4, nm = 1.

while(1) {
	if(!d--)
		break;	
	if(mpz_divisible_ui_p(p, b[d])) {
		for(e = 2, j1 = f2[d]; mpz_divisible_ui_p(p, div1[j1][e]); e += 2);		
		mpz_mul_ui(doi, doi, k = mpz_divisible_ui_p(p, div1[j1][--e])? div1[j1][e] : div1[j1][--e]);//8191
		e = sum1[j1][e];//8192
		j1 = CMMDCA(nm, e, nm%e);//1
		j2 = CMMDCA(nr, k, nr%k);//1
		nm = (nm / j1) * (k / j2);//nm * 8191 = 8191
		nr = (nr / j2) * (e / j1);//nr * 8192 = 32768
		}
	}

if(!mpz_cmp(doi, p))
	return;

while(1) {
	if(!(D-- ^ d1))
		break;
	if(mpz_divisible_ui_p(p, b[D])) {
		mpz_mul_ui(doi, doi, b[D]);
		j1 = CMMDCA(nm, e = b1[D], nm % b1[D]);
		j2 = CMMDCA(nr, b[D], nr % b[D]);
		nm = (nm / j1) * (b[D] / j2);
		nr = (nr / j2) * (e / j1);
		if(!mpz_cmp(doi, p))
			return;
		}
	}
}

//CMMDC2(mul, mul, imp, mul%imp);

/*
mul = 3*5*17*17, unu nu are 17
imp = 5*17
d1 are un 17
cmmdc(mul, imp) = 5*17
mul/cmmdc e 51, are și el 17.

Dar dacă imp e 11*17? Atunci unu are 11. cmmdc e 17, mul/cmmdc e 3*5*17.

//Dar dacă imp e 5*11? cmmdc e doar 5, mul/cmmdc e 3*17*17.

*/

//AA2 = 1, ultimele 4 sunt 0.
//bexc are factorii H din b sortați crescător, fexc face legătura dintre ei și div1 cu sum1, bexc2 îi are crescători pe cei D-H.
void ADAUGPRIM(mpz_t B, mpz_t doi, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *y, gmp_ui *bex, gmp_ui *bex2, gmp_ui *b1ex2, int *f2, int *fex, gmp_ui A2, int d, int h, int H, int D, gmp_ui AA2, int i, int j, int k, int l) {

while(!(A2 & 1))
	A2 >>= 1;

for(i = h-1, l = d-1; i >= 0; i--) {	
	if(!(A2 % y[i])) {
		j = f2[i];
		for(k = 2; !(A2 % div1[j][k]); k++);	
		AA2 *= div1[j][--k];
		}
	}

for(; l >= h; l--)
if(!(A2 % y[l]))
	AA2 *= y[l];

//if(AA2 ^ A2) {
	A2 /= AA2;

	for(i = 0; (A2 ^ 1) && (i < H); i++) {
		if(!(A2 % bex[i]) && !mpz_divisible_ui_p(doi, bex[i])) {
			k = fex[i];
			for(j = 2; !(A2 % div1[k][j]); j++);
			A2 /= div1[k][--j];
			mpz_mul_ui(B, B, sum1[k][j]);
			}
		}

	for(i = 0; (i < D); i++) {//Non-H.
		if(!(A2 % bex2[i]) && !mpz_divisible_ui_p(doi, bex2[i])) {
			mpz_mul_ui(B, B, b1ex2[i]);
			do {A2 /= bex2[i];} while(!(A2 % bex2[i]));
			if(!(A2 ^ 1)) break;
			}
		}	
//	}
}

/*
void ADAUGPRIM2(mpz_t B, mpz_t doi, gmp_ui div1[][MAX2], gmp_ui sum1[][MAX2], gmp_ui *bex, gmp_ui *bex2, gmp_ui *b1ex2, int *fex, gmp_ui divInt, int D, int H, int i, int j, int k) {
if(!mpz_divisible_ui_p(doi, divInt)) {
	i = CBPOZI(bex, divInt, 0, H);
	if(i ^ -1) {
		k = fex[i];
		for(j = 2; !(divInt % div1[k][j]); j++);
		mpz_mul_ui(B, B, sum1[k][--j]);
		} else {
		i = CBPOZI(bex2, divInt, 0, D-H);
		mpz_mul_ui(B, B, b1ex2[i]);
		}
	}
}*/