//---------------------------------------------------------------------------

#ifndef ErrorFormH
#define ErrorFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Objects.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TMyErrorForm : public TForm
{
__published:	// IDE-managed Components
	TText *txtMensaje;
private:	// User declarations
public:		// User declarations
	__fastcall TMyErrorForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMyErrorForm *MyErrorForm;
//---------------------------------------------------------------------------
#endif
