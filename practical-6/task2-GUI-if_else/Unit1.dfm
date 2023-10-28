object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 442
  ClientWidth = 628
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 24
    Top = 24
    Width = 266
    Height = 15
    Caption = 'Program for calculating profit by various divisions:'
  end
  object Label2: TLabel
    Left = 24
    Top = 184
    Width = 266
    Height = 97
    Caption = 'Label2'
  end
  object RadioGroup1: TRadioGroup
    Left = 24
    Top = 64
    Width = 266
    Height = 105
    Caption = 'Choose division:'
    Items.Strings = (
      'Alpha'
      'Betta'
      'Lamda')
    TabOrder = 0
  end
  object Button1: TButton
    Left = 24
    Top = 304
    Width = 75
    Height = 25
    Caption = 'Calculate'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 215
    Top = 304
    Width = 75
    Height = 25
    Caption = 'Close'
    TabOrder = 2
    OnClick = Button2Click
  end
end
