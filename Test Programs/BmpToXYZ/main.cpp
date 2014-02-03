//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include <stdio.h>
#include "main.h"
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

void __fastcall TForm1::btnPicClick(TObject *Sender)
{
   if(!dlgOpen->Execute()) return;

   edtPic->Text = dlgOpen->FileName;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnRunClick(TObject *Sender)
{
   TPicture *pic = new TPicture();
   pic->LoadFromFile(edtPic->Text);

   FILE *fout = fopen(edtOut->Text.c_str(),"w");
   double min = edtMin->Text.ToDouble();
   double dz = edtMax->Text.ToDouble()-min;
   int width = pic->Width;
   int height = pic->Height;
   for(int w =0;w<width;w++)
   {
      for(int h = 0; h<height; h++)
      {
         int c = 0xFFFFFF-(int)pic->Bitmap->Canvas->Pixels[w][h];
         int color = c&0xFF+(c>>8)&0xFF+(c>>16)&0xFF;
         fprintf(fout,"%d,%d,%f\n", w,Height-h,(color*1./0x2FD*dz+min));
      }
   }
   fclose(fout);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnOutClick(TObject *Sender)
{
   if(!dlgSave->Execute()) return;

   edtOut->Text = dlgSave->FileName;
}
//---------------------------------------------------------------------------
