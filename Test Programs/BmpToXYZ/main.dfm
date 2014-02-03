object Form1: TForm1
  Left = 192
  Top = 96
  Width = 294
  Height = 274
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
  object Label1: TLabel
    Left = 16
    Top = 104
    Width = 49
    Height = 13
    Caption = 'Min Depth'
  end
  object Label2: TLabel
    Left = 112
    Top = 104
    Width = 52
    Height = 13
    Caption = 'Max Depth'
  end
  object Label3: TLabel
    Left = 16
    Top = 56
    Width = 51
    Height = 13
    Caption = 'Output File'
  end
  object Label4: TLabel
    Left = 16
    Top = 8
    Width = 43
    Height = 13
    Caption = 'Input File'
  end
  object edtPic: TEdit
    Left = 16
    Top = 24
    Width = 177
    Height = 21
    TabOrder = 0
  end
  object btnPic: TButton
    Left = 200
    Top = 24
    Width = 25
    Height = 25
    Caption = '...'
    TabOrder = 1
    OnClick = btnPicClick
  end
  object edtMin: TEdit
    Left = 32
    Top = 120
    Width = 57
    Height = 21
    TabOrder = 4
  end
  object edtMax: TEdit
    Left = 128
    Top = 120
    Width = 57
    Height = 21
    TabOrder = 5
  end
  object btnRun: TButton
    Left = 72
    Top = 160
    Width = 75
    Height = 25
    Caption = 'Run'
    TabOrder = 6
    OnClick = btnRunClick
  end
  object edtOut: TEdit
    Left = 16
    Top = 72
    Width = 177
    Height = 21
    TabOrder = 2
  end
  object btnOut: TButton
    Left = 200
    Top = 72
    Width = 25
    Height = 25
    Caption = '...'
    TabOrder = 3
    OnClick = btnOutClick
  end
  object dlgOpen: TOpenPictureDialog
    Left = 40
    Top = 24
  end
  object dlgSave: TSaveDialog
    Left = 40
    Top = 72
  end
end
