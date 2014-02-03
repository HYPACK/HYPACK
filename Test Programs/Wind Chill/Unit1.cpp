//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include <math.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnCalcClick(TObject *Sender)
{
    int V = edtSpeed->Text.ToInt();
    int T = edtTemp->Text.ToInt();

    double WC = 35.74+.6215*T-35.75*pow(V,0.16)+0.4275*T*pow(V,0.16);

    Edit3->Text = WC;

}
//---------------------------------------------------------------------------
