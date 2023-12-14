//---------------------------------------------------------------------------

#ifndef SecondH
#define SecondH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TSecondForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
private:	// User declarations
public:		// User declarations
	__fastcall TSecondForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSecondForm *SecondForm;
//---------------------------------------------------------------------------
#endif
