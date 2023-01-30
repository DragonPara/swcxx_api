#include "swcxx.h"
#define N
extern "C" void test_slave(int *a)
{
	crts_rply_t rply;
	int x[2];
	x[0] = _PEN;
	x[1] = _PEN + 64;
	CRTS_dma_iput_stride(a + _PEN, x, sizeof(int) * 2,
						 sizeof(int), 63 * sizeof(int), &rply);
	CRTS_dma_wait_value(&rply, 1);
}