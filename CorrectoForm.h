//---------------------------------------------------------------------------

#ifndef CorrectoFormH
#define CorrectoFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Objects.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Memo.hpp>
#include <FMX.Memo.Types.hpp>
#include <FMX.ScrollBox.hpp>
//---------------------------------------------------------------------------
class TMyCorrectoForm : public TForm
{
__published:	// IDE-managed Components
	TText *txtMensaje;
private:	// User declarations
public:		// User declarations
	__fastcall TMyCorrectoForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMyCorrectoForm *MyCorrectoForm;
//---------------------------------------------------------------------------
#endif
