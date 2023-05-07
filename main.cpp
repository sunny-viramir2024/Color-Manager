//---------------------------------------------------------------------------

#include <vcl.h>

#pragma hdrstop

#include "main.h"
#include "ABOUT.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
#include "algs.h"
#include "brettel.h"
TForm1 *Form1;
TBitmap* im1=new TBitmap();
AnsiString filen;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
BNorm->Font->Style=TFontStyles()<< fsBold;
if (ParamCount>(void*)0)
{
if (ParamStr(1).Length()>1)
{
if (FileExists(ParamStr(1).c_str()))
{
filen=ParamStr(1);
TJPEGImage *jpg = new TJPEGImage();
jpg->LoadFromFile(filen);
Graphics::TBitmap *bmp1;
bmp1 = new Graphics::TBitmap();
bmp1->Assign(jpg);
im1=bmp1;
Image1->Picture->Bitmap=im1;
}
else
{
ShowMessage("Файл " + ParamStr(1) + " не существует!");
}
}}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::NormExecute(TObject *Sender)
{
BNorm->Font->Style=TFontStyles()<< fsBold;
BProtan->Font->Style=TFontStyles()>> fsBold;
BDeuteran->Font->Style=TFontStyles()>> fsBold;
BMonoChr->Font->Style=TFontStyles()>> fsBold;
BTritan->Font->Style=TFontStyles()>> fsBold;
BNegative->Font->Style=TFontStyles()>> fsBold;
MNorm->Checked=True;
Image1->Picture->Bitmap=im1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ProtanExecute(TObject *Sender)
{
BNorm->Font->Style=TFontStyles()>> fsBold;
BProtan->Font->Style=TFontStyles()<< fsBold;
BDeuteran->Font->Style=TFontStyles()>> fsBold;
BTritan->Font->Style=TFontStyles()>> fsBold;
BMonoChr->Font->Style=TFontStyles()>> fsBold;
BNegative->Font->Style=TFontStyles()>> fsBold;
MProtan->Checked=True;
TBitmap* bmp=new TBitmap();
bmp->Assign(im1);
Form1->Image1->Picture->Bitmap->Assign(bmp);
if (rad->ItemIndex==0)
{
Form1->Image1->Picture->Bitmap->Assign(Filter(bmp,linear.pr));
}
 else if (rad->ItemIndex==1)
 {
 Form1->Image1->Picture->Bitmap->Assign(Filter(bmp,vienot.pr));
 }
 else if (rad->ItemIndex==2)
 {
 Form1->Image1->Picture->Bitmap->Assign(Filter(bmp,machado.pr));
 }
 else if (rad->ItemIndex==3)
 {
 Form1->Image1->Picture->Bitmap->Assign(Brettel(bmp,1));
 }
 else if (rad->ItemIndex==4)
 {
 Form1->Image1->Picture->Bitmap->Assign(Filter(bmp,coblisv1.pr));
 }
 else if (rad->ItemIndex==5)
 {
 Form1->Image1->Picture->Bitmap->Assign(UniImage(bmp,1,false));
 }
else if (rad->ItemIndex==6)
{
Form1->Image1->Picture->Bitmap->Assign(UniImage(bmp,1,true));
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DeuteranExecute(TObject *Sender)
{
BNorm->Font->Style=TFontStyles()>> fsBold;
BProtan->Font->Style=TFontStyles()>> fsBold;
BDeuteran->Font->Style=TFontStyles()<< fsBold;
BMonoChr->Font->Style=TFontStyles()>> fsBold;
BTritan->Font->Style=TFontStyles()>> fsBold;
BNegative->Font->Style=TFontStyles()>> fsBold;
MDeuteran->Checked=True;
TBitmap* bmp=new TBitmap();
bmp->Assign(im1);
Form1->Image1->Picture->Bitmap->Assign(bmp);
if (rad->ItemIndex==0)
{
Form1->Image1->Picture->Bitmap->Assign(Filter(bmp,linear.dt));
}
else if (rad->ItemIndex==1)
{
Form1->Image1->Picture->Bitmap->Assign(Filter(bmp,vienot.dt));
}
else if (rad->ItemIndex==2)
{
Form1->Image1->Picture->Bitmap->Assign(Filter(bmp,machado.dt));
}
else if (rad->ItemIndex==3)
{
Form1->Image1->Picture->Bitmap->Assign(Brettel(bmp,2));
}
else if (rad->ItemIndex==4)
{
Form1->Image1->Picture->Bitmap->Assign(Filter(bmp,coblisv1.dt));
}
else if (rad->ItemIndex==5)
{
Form1->Image1->Picture->Bitmap->Assign(UniImage(bmp,2,false));
}
else if (rad->ItemIndex==6)
{
Form1->Image1->Picture->Bitmap->Assign(UniImage(bmp,2,true));
}
}

//---------------------------------------------------------------------------

void __fastcall TForm1::TritanExecute(TObject *Sender)
{
BNorm->Font->Style=TFontStyles()>> fsBold;
BProtan->Font->Style=TFontStyles()>> fsBold;
BDeuteran->Font->Style=TFontStyles()>> fsBold;
BTritan->Font->Style=TFontStyles()<< fsBold;
BMonoChr->Font->Style=TFontStyles()>> fsBold;
BNegative->Font->Style=TFontStyles()>> fsBold;
MTritan->Checked=True;
TBitmap* bmp=new TBitmap();
bmp->Assign(im1);
Form1->Image1->Picture->Bitmap->Assign(bmp);
if (rad->ItemIndex==0)
{
Form1->Image1->Picture->Bitmap->Assign(Filter(bmp,linear.tn));
}
else if (rad->ItemIndex==1)
 {
 Form1->Image1->Picture->Bitmap->Assign(Filter(bmp,vienot.tn));
 }
 else if (rad->ItemIndex==2)
 {
 Form1->Image1->Picture->Bitmap->Assign(Filter(bmp,machado.tn));
 }
 else if (rad->ItemIndex==3)
 {
 Form1->Image1->Picture->Bitmap->Assign(Brettel(bmp,3));
 }
 else if (rad->ItemIndex==4)
 {
 Form1->Image1->Picture->Bitmap->Assign(Filter(bmp,coblisv1.tn));
 }
 else if (rad->ItemIndex==5)
 {
 Form1->Image1->Picture->Bitmap->Assign(UniImage(bmp,3,false));
 }
 else if (rad->ItemIndex==6)
 {
 Form1->Image1->Picture->Bitmap->Assign(UniImage(bmp,3,true));
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::MonoChrExecute(TObject *Sender)
{
BNorm->Font->Style=TFontStyles()>> fsBold;
BProtan->Font->Style=TFontStyles()>> fsBold;
BDeuteran->Font->Style=TFontStyles()>> fsBold;
BTritan->Font->Style=TFontStyles()>> fsBold;
BMonoChr->Font->Style=TFontStyles()<< fsBold;
BNegative->Font->Style=TFontStyles()>> fsBold;
MMonoChr->Checked=True;
TBitmap* bmp=new TBitmap();
bmp->Assign(im1);
Form1->Image1->Picture->Bitmap->Assign(bmp);
Form1->Image1->Picture->Bitmap->Assign(Filter(bmp,mono));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::OpenExecute(TObject *Sender)
{
if (op1->Execute())
{
filen=op1->FileName;
TJPEGImage *jpg = new TJPEGImage();
jpg->LoadFromFile(filen);
im1->Assign(jpg);
Image1->Picture->Bitmap=im1;
BNorm->Font->Style=TFontStyles()<< fsBold;
MNorm->Checked=True;
BProtan->Font->Style=TFontStyles()>> fsBold;
BDeuteran->Font->Style=TFontStyles()>> fsBold;
BTritan->Font->Style=TFontStyles()>>fsBold;
BMonoChr->Font->Style=TFontStyles()>> fsBold;
BNegative->Font->Style=TFontStyles()>> fsBold;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SaveExecute(TObject *Sender)
{
if (sv1->Execute())
{
TJPEGImage *jpg = new TJPEGImage();
jpg->Assign(Image1->Picture->Bitmap);
jpg->SaveToFile(sv1->FileName);
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ExitExecute(TObject *Sender)
{
Form1->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::MAboutClick(TObject *Sender)
{
AboutBox->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::radClick(TObject *Sender)
{
if (MProtan->Checked==True)  lst->Actions[1]->Execute();
else if (MDeuteran->Checked==True)  lst->Actions[2]->Execute();
else if (MTritan->Checked==True)  lst->Actions[3]->Execute();
else if (MMonoChr->Checked==True)  lst->Actions[4]->Execute();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::NegativExecute(TObject *Sender)
{
BNorm->Font->Style=TFontStyles()>> fsBold;
BProtan->Font->Style=TFontStyles()>> fsBold;
BDeuteran->Font->Style=TFontStyles()>> fsBold;
BTritan->Font->Style=TFontStyles()>> fsBold;
BMonoChr->Font->Style=TFontStyles()>> fsBold;
BNegative->Font->Style=TFontStyles()<< fsBold;
MNegativ->Checked=True;
TBitmap* bmp=new TBitmap();
bmp->Assign(im1);
Form1->Image1->Picture->Bitmap->Assign(Negative(bmp));
}
//---------------------------------------------------------------------------




