#include "../../MyForm.h"
//Кнопочка открывает окно для создания холста 
System::Void Risovalka::PaintForm::createToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if(groupBoxCreateCanvas->Visible)
	{
		groupBoxCreateCanvas->Visible = false;
	}
	else
	{
		groupBoxCreateCanvas->Visible = true;
	}
	return System::Void();
}