//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Dialogs.hpp>
#include <ExtDlgs.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
   TEdit *edtPic;
   TButton *btnPic;
   TOpenPictureDialog *dlgOpen;
   TEdit *edtMin;
   TLabel *Label1;
   TLabel *Label2;
   TEdit *edtMax;
   TButton *btnRun;
   TEdit *edtOut;
   TButton *btnOut;
   TLabel *Label3;
   TLabel *Label4;
   TSaveDialog *dlgSave;
   void __fastcall btnPicClick(TObject *Sender);
   void __fastcall btnRunClick(TObject *Sender);
   void __fastcall btnOutClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
   __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
