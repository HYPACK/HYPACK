object Form1: TForm1
  Left = 192
  Top = 96
  Width = 193
  Height = 251
  AutoSize = True
  BorderWidth = 20
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object lblSpeed: TLabel
    Left = 0
    Top = 0
    Width = 34
    Height = 13
    Caption = 'Speed '
  end
  object lblTemp: TLabel
    Left = 0
    Top = 56
    Width = 27
    Height = 13
    Caption = 'Temp'
  end
  object edtSpeed: TEdit
    Left = 8
    Top = 24
    Width = 129
    Height = 21
    TabOrder = 0
  end
  object edtTemp: TEdit
    Left = 8
    Top = 80
    Width = 129
    Height = 21
    TabOrder = 1
  end
  object btnCalc: TButton
    Left = 24
    Top = 112
    Width = 73
    Height = 25
    Caption = 'Calculate'
    TabOrder = 2
    OnClick = btnCalcClick
  end
  object Edit3: TEdit
    Left = 8
    Top = 152
    Width = 129
    Height = 21
    ReadOnly = True
    TabOrder = 3
  end
end
