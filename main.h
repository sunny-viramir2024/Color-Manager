//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ExtDlgs.hpp>
#include <System.Actions.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TOpenPictureDialog *op1;
	TSavePictureDialog *sv1;
	TActionList *lst;
	TAction *Norm;
	TAction *Protan;
	TAction *Deuteran;
	TAction *Tritan;
	TAction *MonoChr;
	TAction *Open;
	TAction *Save;
	TMainMenu *MainMenu1;
	TMenuItem *MFile;
	TMenuItem *MMode;
	TMenuItem *MProtan;
	TMenuItem *MDeuteran;
	TMenuItem *MTritan;
	TMenuItem *MMonoChr;
	TMenuItem *MSave;
	TAction *Exit;
	TMenuItem *MOpen;
	TMenuItem *MExit;
	TMenuItem *MNorm;
	TMenuItem *MHelp;
	TMenuItem *MAbout;
	TPanel *Panel1;
	TButton *BNorm;
	TButton *BProtan;
	TButton *BDeuteran;
	TButton *BTritan;
	TButton *BMonoChr;
	TButton *BOpen;
	TButton *BSave;
	TRadioGroup *rad;
	TButton *BNegative;
	TAction *Negativ;
	TMenuItem *MNegativ;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall NormExecute(TObject *Sender);
	void __fastcall ProtanExecute(TObject *Sender);
	void __fastcall DeuteranExecute(TObject *Sender);
	void __fastcall TritanExecute(TObject *Sender);
	void __fastcall MonoChrExecute(TObject *Sender);
	void __fastcall OpenExecute(TObject *Sender);
	void __fastcall SaveExecute(TObject *Sender);
	void __fastcall ExitExecute(TObject *Sender);
	void __fastcall MAboutClick(TObject *Sender);
	void __fastcall radClick(TObject *Sender);
	void __fastcall NegativExecute(TObject *Sender);

private:	// User declarations
public:		// User declarations

	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
