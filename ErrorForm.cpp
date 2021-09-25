//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "ErrorForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TMyErrorForm *MyErrorForm;
//---------------------------------------------------------------------------
__fastcall TMyErrorForm::TMyErrorForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
