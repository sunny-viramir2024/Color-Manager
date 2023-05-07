//---------------------------------------------------------------------------

#ifndef brettelH
#define brettelH
#include <Vcl.h>
struct BrettelParams
{
float rgbCvdFromRgb_1[9];
float rgbCvdFromRgb_2[9];
float separationPlaneNormalInRgb[3];
};

static struct BrettelParams brettel_protan_params = {
	{
		0.14980, 1.19548, -0.34528,
		0.10764, 0.84864, 0.04372,
		0.00384, -0.00540, 1.00156,
	},
	{
		0.14570, 1.16172, -0.30742,
		0.10816, 0.85291, 0.03892,
		0.00386, -0.00524, 1.00139,
	},
	{ 0.00048, 0.00393, -0.00441 }
};
static struct BrettelParams brettel_deutan_params = {
	{
		0.36477, 0.86381, -0.22858,
		0.26294, 0.64245, 0.09462,
		-0.02006, 0.02728, 0.99278,
    },
	{
        0.37298, 0.88166, -0.25464,
        0.25954, 0.63506, 0.10540,
        -0.01980, 0.02784, 0.99196,
	},
    { -0.00281, -0.00611, 0.00892 }
};
static struct BrettelParams brettel_tritan_params = {
	{
        1.01277, 0.13548, -0.14826,
		-0.01243, 0.86812, 0.14431,
		0.07589, 0.80500, 0.11911,
	},
	{
		0.93678, 0.18979, -0.12657,
		0.06154, 0.81526, 0.12320,
		-0.37562, 1.12767, 0.24796,
	},
	{ 0.03901, -0.02788, -0.01113 }
};
RGBTRIPLE BrettelPix(int deficiency ,RGBTRIPLE pix);
TBitmap* Brettel(TBitmap* in,int type);
//---------------------------------------------------------------------------
#endif
