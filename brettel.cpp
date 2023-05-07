//---------------------------------------------------------------------------

#pragma hdrstop
 #include <vcl.h>
 #include "algs.h"
#include "brettel.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)

TBitmap* Brettel(TBitmap* in,int type)
{
TBitmap* bmp=new TBitmap();
bmp->Assign(in);
RGBTRIPLE*ptr;
for(int y = 0; y < bmp->Height; y++)
{
ptr = (RGBTRIPLE*)bmp->ScanLine[y];
for (int x = 0; x < bmp->Width; x++)
{
RGBTRIPLE pix;
pix=ptr[x];
ptr[x]=BrettelPix(type,pix);
}
}
return bmp;
}

RGBTRIPLE  BrettelPix(int deficiency ,RGBTRIPLE  pix)
{
RGBTRIPLE res;
const struct BrettelParams* params = NULL;
switch (deficiency)
{
case 1: params = &brettel_protan_params; break;
case 2: params = &brettel_deutan_params; break;
case 3: params = &brettel_tritan_params; break;
}
const float rgb[3] =
{
linearRGB_from_sRGB(pix.rgbtRed),
linearRGB_from_sRGB(pix.rgbtGreen),
linearRGB_from_sRGB(pix.rgbtBlue)
};
const float* n = params->separationPlaneNormalInRgb;
const float dotWithSepPlane = rgb[0]*n[0] + rgb[1]*n[1] + rgb[2]*n[2];
const float* rgbCvdFromRgb = (dotWithSepPlane >= 0 ? params->rgbCvdFromRgb_1 : params->rgbCvdFromRgb_2);
float rgb_cvd[3] =
{
rgbCvdFromRgb[0]*rgb[0] + rgbCvdFromRgb[1]*rgb[1] + rgbCvdFromRgb[2]*rgb[2],
rgbCvdFromRgb[3]*rgb[0] + rgbCvdFromRgb[4]*rgb[1] + rgbCvdFromRgb[5]*rgb[2],
rgbCvdFromRgb[6]*rgb[0] + rgbCvdFromRgb[7]*rgb[1] + rgbCvdFromRgb[8]*rgb[2]
};
res.rgbtRed = Trim(sRGB_from_linearRGB(rgb_cvd[0]));
res.rgbtGreen =Trim(sRGB_from_linearRGB(rgb_cvd[1]));
res.rgbtBlue = Trim(sRGB_from_linearRGB(rgb_cvd[2]));
return res;
}
