#include "../../MyForm.h"
System::Void Risovalka::PaintForm::pictureBoxCanvas_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	mouse_pressed = true;

	if(comboBoxInstruments->Text == "Marimba")
	{
		if (pen->Color == Color::Red)
		{
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Marimba\\MarimbaC.wav");
		}
		if (pen->Color == Color::Orange)
		{
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Marimba\\MarimbaD.wav");
		}
		if (pen->Color == Color::Yellow)
		{
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Marimba\\MarimbaE.wav");
		}
		if (pen->Color == Color::Green)
		{
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Marimba\\MarimbaF.wav");
		}
		if (pen->Color == Color::Cyan)
		{
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Marimba\\MarimbaG.wav");
		}
		if (pen->Color == Color::Blue)
		{
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Marimba\\MarimbaA.wav");
		}
		if (pen->Color == Color::Purple)
		{
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Marimba\\MarimbaB.wav");
		}
		
	}
	if (comboBoxInstruments->Text == "Piano")
	{
		if (pen->Color == Color::Red)
		{
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Piano\\PianoC.wav");
		}
		if (pen->Color == Color::Orange)
		{
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Piano\\PianoD.wav");
		}
		if (pen->Color == Color::Yellow)
		{
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Piano\\PianoE.wav");
		}
		if (pen->Color == Color::Green)
		{
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Piano\\PianoF.wav");
		}
		if (pen->Color == Color::Cyan)
		{
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Piano\\PianoG.wav");
		}
		if (pen->Color == Color::Blue)
		{
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Piano\\PianoA.wav");
		}
		if (pen->Color == Color::Purple)
		{
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Piano\\PianoB.wav");
		}
	}
	if (comboBoxInstruments->Text == "String")
	{
		if (pen->Color == Color::Red)
		{
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\String\\StringC.wav");
		}
		if (pen->Color == Color::Orange)
		{
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\String\\StringD.wav");
		}
		if (pen->Color == Color::Yellow)
		{
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\String\\StringE.wav");
		}
		if (pen->Color == Color::Green)
		{
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\String\\StringF.wav");
		}
		if (pen->Color == Color::Cyan)
		{
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\String\\StringG.wav");
		}
		if (pen->Color == Color::Blue)
		{
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\String\\StringA.wav");
		}
		if (pen->Color == Color::Purple)
		{
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\String\\StringB.wav");
		}
	}
	if (comboBoxInstruments->Text == "WoodWind")
	{
		if (pen->Color == Color::Red)
		{
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWind\\WoodWindC.wav");
		}
		if (pen->Color == Color::Orange)
		{
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWind\\WoodWindD.wav");
		}
		if (pen->Color == Color::Yellow)
		{
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWind\\WoodWindE.wav");
		}
		if (pen->Color == Color::Green)
		{
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWind\\WoodWindF.wav");
		}
		if (pen->Color == Color::Cyan)
		{
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWind\\WoodWindG.wav");
		}
		if (pen->Color == Color::Blue)
		{
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWind\\WoodWindA.wav");
		}
		if (pen->Color == Color::Purple)
		{
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\WoodWind\\WoodWindB.wav");
		}
	}
	if (comboBoxInstruments->Text == "Nature")
	{
		if (pen->Color == Color::Red)
		{
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Nature\\Lava.wav");
		}
		if (pen->Color == Color::Orange)
		{
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Nature\\Campfire.wav");
		}
		if (pen->Color == Color::Yellow)
		{
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Nature\\Lightning.wav");
		}
		if (pen->Color == Color::Green)
		{
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Nature\\Leaves.wav");
		}
		if (pen->Color == Color::Cyan)
		{
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Nature\\SnowStep.wav");
		}
		if (pen->Color == Color::Blue)
		{
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Nature\\Water.wav");
		}
		if (pen->Color == Color::Purple)
		{
			audio_feedback = gcnew SoundPlayer("..\\ColorMain\\Nature\\ThunderNRain.wav");
		}
	}
	if (comboBoxInstruments->Text != "None" && radioButtonErase->Checked != true)
	{
		audio_feedback->Play();
	}
	if(radioButtonDraw->Checked == true || radioButtonErase->Checked == true)
	{
		points->Clear();
		points->Add(e->Location);
	}
	else
	{
		X = e->Location.X;
		Y = e->Location.Y;
	}
	pictureBoxCanvas->Invalidate();
	return System::Void();
}