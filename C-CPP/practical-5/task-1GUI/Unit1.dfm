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
    Width = 192
    Height = 33
    Caption = 'program for electrical engineering calculations'
    WordWrap = True
  end
  object Label2: TLabel
    Left = 24
    Top = 208
    Width = 41
    Height = 15
    Caption = 'R1(Om)'
  end
  object Label3: TLabel
    Left = 175
    Top = 208
    Width = 41
    Height = 15
    Caption = 'R2(Om)'
  end
  object Label4: TLabel
    Left = 24
    Top = 272
    Width = 192
    Height = 15
  end
  object RadioGroup1: TRadioGroup
    Left = 24
    Top = 85
    Width = 192
    Height = 105
    Caption = 'Specify the connection type'
    Items.Strings = (
      'parallel'
      'serial')
    TabOrder = 0
  end
  object Edit1: TEdit
    Left = 24
    Top = 229
    Width = 73
    Height = 23
    TabOrder = 1
  end
  object Edit2: TEdit
    Left = 144
    Top = 229
    Width = 72
    Height = 23
    TabOrder = 2
  end
  object Button1: TButton
    Left = 24
    Top = 304
    Width = 75
    Height = 25
    Caption = 'Calculate'
    TabOrder = 3
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 141
    Top = 304
    Width = 75
    Height = 25
    Caption = 'Quit'
    TabOrder = 4
    OnClick = Button2Click
  end
end
