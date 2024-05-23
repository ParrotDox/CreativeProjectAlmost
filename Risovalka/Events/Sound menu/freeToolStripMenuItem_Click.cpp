#include "../../MyForm.h"
System::Void Risovalka::PaintForm::freeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	groupBoxSoundDiagram->Visible = true;
	if(groupBoxCreateCanvas->Visible == true)
	{
		groupBoxCreateCanvas->Visible = false;
	}
	if(groupBoxExerciseKnowledge->Visible == true)
	{
		groupBoxExerciseKnowledge->Visible = false;
	}
	return System::Void();
}