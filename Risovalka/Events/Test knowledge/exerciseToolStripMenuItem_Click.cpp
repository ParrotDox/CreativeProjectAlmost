#include "../../MyForm.h"
System::Void Risovalka::PaintForm::exerciseToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (groupBoxExerciseKnowledge->Visible)
		groupBoxExerciseKnowledge->Visible = false;
	else
		groupBoxExerciseKnowledge->Visible = true;
	if(groupBoxCreateCanvas->Visible == true)
	{
		groupBoxCreateCanvas->Visible = false;
	}
	if(groupBoxSoundDiagram->Visible == true)
	{
		groupBoxSoundDiagram->Visible = false;
	}
	return System::Void();
}