#pragma once
#include <cmath>
#include <iostream>
#include <vector>
#define _for3(x, start, end) for(int x = start; x < end; ++x)
#define _for2(x, end) for (int x = 0; x < end; ++x) 
namespace hw12 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::Drawing::Imaging;
	using namespace System::Drawing::Design;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	protected:

	private:
		System::ComponentModel::Container^ components;

	private:
		Bitmap^ ori_image;

	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
		   Bitmap^ output;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // button1
			   // 
			   this->button1->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button1->Location = System::Drawing::Point(179, 558);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(148, 63);
			   this->button1->TabIndex = 0;
			   this->button1->Text = L"Load image";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Location = System::Drawing::Point(13, 73);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(545, 479);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox1->TabIndex = 1;
			   this->pictureBox1->TabStop = false;
			   // 
			   // trackBar1
			   // 
			   this->trackBar1->LargeChange = 1;
			   this->trackBar1->Location = System::Drawing::Point(671, 558);
			   this->trackBar1->Minimum = 2;
			   this->trackBar1->Name = L"trackBar1";
			   this->trackBar1->Size = System::Drawing::Size(376, 56);
			   this->trackBar1->TabIndex = 7;
			   this->trackBar1->TickStyle = System::Windows::Forms::TickStyle::Both;
			   this->trackBar1->Value = 2;
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->Location = System::Drawing::Point(679, 598);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(21, 23);
			   this->label1->TabIndex = 4;
			   this->label1->Text = L"2";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label2->Location = System::Drawing::Point(849, 598);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(21, 23);
			   this->label2->TabIndex = 5;
			   this->label2->Text = L"6";
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label3->Location = System::Drawing::Point(1015, 598);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(32, 23);
			   this->label3->TabIndex = 6;
			   this->label3->Text = L"10";
			   // 
			   // button2
			   // 
			   this->button2->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button2->Location = System::Drawing::Point(1073, 558);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(148, 63);
			   this->button2->TabIndex = 8;
			   this->button2->Text = L"Convert";
			   this->button2->UseVisualStyleBackColor = true;
			   this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Century", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label4->Location = System::Drawing::Point(153, 37);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(186, 33);
			   this->label4->TabIndex = 10;
			   this->label4->Text = L"Origin image";
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->Font = (gcnew System::Drawing::Font(L"Century", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label7->Location = System::Drawing::Point(882, 37);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(110, 33);
			   this->label7->TabIndex = 14;
			   this->label7->Text = L"Bicubic";
			   // 
			   // pictureBox4
			   // 
			   this->pictureBox4->Location = System::Drawing::Point(676, 73);
			   this->pictureBox4->Name = L"pictureBox4";
			   this->pictureBox4->Size = System::Drawing::Size(545, 479);
			   this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			   this->pictureBox4->TabIndex = 13;
			   this->pictureBox4->TabStop = false;
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1314, 658);
			   this->Controls->Add(this->label7);
			   this->Controls->Add(this->pictureBox4);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->trackBar1);
			   this->Controls->Add(this->pictureBox1);
			   this->Controls->Add(this->button1);
			   this->Name = L"MyForm";
			   this->Text = L"homework1_2";
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ ofd = gcnew OpenFileDialog();
		ofd->FileName = "";
		ofd->Filter = "All Files(*.*)|*.*";
		ofd->FilterIndex = 1;
		if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK && ofd->FileName != "") {
			ori_image = gcnew Bitmap(ofd->FileName);
		}
		if (ori_image == nullptr) {
			return;
		}
		output = gcnew Bitmap(ori_image->Width, ori_image->Height, ori_image->PixelFormat);
		output = ori_image;
		pictureBox1->Image = output;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int k = int(trackBar1->Value);
		//=====================bicubic=====================
		Bitmap^ bicubic = gcnew Bitmap((int)output->Width * k, (int)output->Height * k, output->PixelFormat);

		Rectangle R_ori = Rectangle(0, 0, output->Width, output->Height);
		Rectangle R_bicubic = Rectangle(0, 0, bicubic->Width, bicubic->Height);

		BitmapData^ bd_ori = output->LockBits(R_ori, ImageLockMode::ReadWrite, output->PixelFormat);
		BitmapData^ bd_bicubic = bicubic->LockBits(R_bicubic, ImageLockMode::ReadWrite, bicubic->PixelFormat);

		Byte* ori_ptr = (Byte*)((Void*)bd_ori->Scan0);
		Byte* bicubic_ptr = (Byte*)((Void*)bd_bicubic->Scan0);
		float f_x, f_y;
		int x1, y1;
		int old_h = output->Height;
		int old_w = output->Width;
		int new_h = bicubic->Height;
		int new_w = bicubic->Width;
		_for3(y, 0, bicubic->Height - k + 1) {
			_for3(x, 0, bicubic->Width - k + 1) {
				f_x = float((x * old_w) % new_w / float(new_w));
				f_y = float((y * old_h) %  new_h / float(new_h));
				x1 = x * old_w / new_w;
				y1 = y * old_h / new_h;
				if (f_x == 0 && f_y == 0) {
					ori_ptr = (Byte*)((Void*)bd_ori->Scan0);
					ori_ptr += y1 * bd_ori->Stride + x1 * 3;
					bicubic_ptr = (Byte*)((Void*)bd_bicubic->Scan0);
					bicubic_ptr += (int)(y * bd_bicubic->Stride + x * 3);
					_for2(s, 3) {
						bicubic_ptr[s] = ori_ptr[s];
					}
				}
				else if (f_x == 0) {
					double p[4][3];
					_for3(i, y1 - 1, y1 + 3) {
						ori_ptr = (Byte*)((Void*)bd_ori->Scan0);
						ori_ptr += i * bd_ori->Stride + x1 * 3;
						if (i >= output->Height || x1 >= output->Width || i < 0) {
							continue;
						}
						_for2(s, 3) {
							p[i - y1 + 1][s] = (float)ori_ptr[s];
						}
					}
					double answer[3] = { 0 };
					_for2(s, 3) {
						double a = (3 * p[1][s] + p[3][s] - p[0][s] - 3 * p[2][s]) / 2;
						double b = p[0][s] + 2 * p[2][s] - (5 * p[1][s] + p[3][s]) / 2;
						double c = (p[2][s] - p[0][s]) / 2.;
						double d = p[1][s];
						answer[s] = a * pow(f_y, 3) + b * pow(f_y, 2) + c * f_y + d;
					}
					bicubic_ptr = (Byte*)((Void*)bd_bicubic->Scan0);
					bicubic_ptr += (int)(y * bd_bicubic->Stride + x * 3);
					_for2(s, 3) {
						if (answer[s] >= 255) {
							bicubic_ptr[s] = (Byte)255;
						}
						else if (answer[s] <= 0) {
							bicubic_ptr[s] = (Byte)0;
						}
						else {
							bicubic_ptr[s] = (Byte)answer[s];
						}
					}
				}
				else if (f_y == 0) {
					int p[4][3];
					_for3(j, x1 - 1, x1 + 3) {
						ori_ptr = (Byte*)((Void*)bd_ori->Scan0);
						if (y1 >= output->Height || j >= output->Width || j < 0) {
							continue;
						}
						ori_ptr += y1 * bd_ori->Stride + j * 3;
						_for2(s, 3) {
							p[j - x1 + 1][s] = ori_ptr[s];
						}
					}
					float answer[3] = { 0 };
					_for2(s, 3) {
						float a = ((3 * p[1][s] + p[3][s]) - p[0][s] - 3 * p[2][s]) / 2;
						float b = p[0][s] + 2 * p[2][s] - (5 * p[1][s] + p[3][s]) / 2;
						float c = (p[2][s] - p[0][s]) / 2;
						float d = p[1][s];
						answer[s] = a * pow(f_x, 3) + b * pow(f_x, 2) + c * f_x + d;
					}
					bicubic_ptr = (Byte*)((Void*)bd_bicubic->Scan0);
					bicubic_ptr += (int)(y * bd_bicubic->Stride + x * 3);
					_for2(s, 3) {
						if (answer[s] >= 255) {
							bicubic_ptr[s] = (Byte)255;
						}
						else if (answer[s] <= 0) {
							bicubic_ptr[s] = (Byte)0;
						}
						else {
							bicubic_ptr[s] = (Byte)answer[s];
						}
					}
				}
				else {
					int save[4][3] = {0};
					_for3(i, y1 - 1, y1 + 3) {
						int p[4][3];
						_for3(j, x1 - 1, x1 + 3) {
							ori_ptr = (Byte*)((Void*)bd_ori->Scan0);
							if (i >= output->Height || x1 >= output->Width || i < 0 || y1 >= output->Height || j >= output->Width || j < 0) {
								continue;
							}
							ori_ptr += i * bd_ori->Stride + j * 3;
							_for2(s, 3) {
								p[j - x1 + 1][s] = ori_ptr[s];
							}
							_for2(s, 3) {
								float a = ((3 * p[1][s] + p[3][s]) - p[0][s] - 3 * p[2][s]) / 2;
								float b = p[0][s] + 2 * p[2][s] - (5 * p[1][s] + p[3][s]) / 2;
								float c = (p[2][s] - p[0][s]) / 2;
								float d = p[1][s];
								save[i - y1 + 1][s] = a * pow(f_x, 3) + b * pow(f_x, 2) + c * f_x + d;
								if (save[i - y1 + 1][s] < 0) {
									save[i - y1 + 1][s] = 0;
								}
								else if (save[i - y1 + 1][s] > 255) {
									save[i - y1 + 1][s] = 255;
								}
							}
						}
					}
					float answer[3] = { 0 };
					_for2(s, 3) {
						float a = ((3 * save[1][s] + save[3][s]) - save[0][s] - 3 * save[2][s]) / 2;
						float b = save[0][s] + 2 * save[2][s] - (5 * save[1][s] + save[3][s]) / 2;
						float c = (save[2][s] - save[0][s]) / 2;
						float d = save[1][s];
						answer[s] = a * pow(f_x, 3) + b * pow(f_y, 2) + c * f_y + d;
					}
					bicubic_ptr = (Byte*)((Void*)bd_bicubic->Scan0);
					bicubic_ptr += (int)(y * bd_bicubic->Stride + x * 3);
					_for2(s, 3) {
						if (answer[s] >= 255) {
							bicubic_ptr[s] = (Byte)255;
						}
						else if (answer[s] <= 0) {
							bicubic_ptr[s] = (Byte)0;
						}
						else {
							bicubic_ptr[s] = (Byte)answer[s];
						}
					}


				}

			}
		}
		output->UnlockBits(bd_ori);
		bicubic->UnlockBits(bd_bicubic);
		pictureBox4->Image = bicubic;
		
	}
};
}
