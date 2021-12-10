#include "dod.h"
#include "var.h"

using namespace nsVar;

void nsDod::dod()
{
	a *= (-1) * ((x * x) / 2 * n + 1);
}