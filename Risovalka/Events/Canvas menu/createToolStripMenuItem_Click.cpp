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
	if (groupBoxExerciseKnowledge->Visible == true)
	{
		groupBoxExerciseKnowledge->Visible = false;
		groupBoxExerciseKnowledge->Refresh();
	}
	if (groupBoxSoundDiagram->Visible == true)
	{
		groupBoxSoundDiagram->Visible = false;
		groupBoxSoundDiagram->Refresh();
	}
	return System::Void();
}