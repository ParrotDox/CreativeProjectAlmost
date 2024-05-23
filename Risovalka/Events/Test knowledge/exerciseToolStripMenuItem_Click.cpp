#include "../../MyForm.h"
System::Void Risovalka::PaintForm::exerciseToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (groupBoxExerciseKnowledge->Visible)
		groupBoxExerciseKnowledge->Visible = false;
	else
		groupBoxExerciseKnowledge->Visible = true;
	return System::Void();
}