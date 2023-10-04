object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 247
  ClientWidth = 217
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
    Width = 171
    Height = 17
    AutoSize = False
    Caption = 'Enter the angle value in radians'
    WordWrap = True
  end
  object Label2: TLabel
    Left = 24
    Top = 136
    Width = 171
    Height = 49
    AutoSize = False
    WordWrap = True
  end
  object Label3: TLabel
    Left = 24
    Top = 200
    Width = 171
    Height = 49
    AutoSize = False
    WordWrap = True
  end
  object Label4: TLabel
    Left = 24
    Top = 264
    Width = 171
    Height = 25
    AutoSize = False
    WordWrap = True
  end
  object Edit1: TEdit
    Left = 24
    Top = 56
    Width = 171
    Height = 23
    TabOrder = 0
    Text = 'Edit1'
  end
  object Button1: TButton
    Left = 72
    Top = 93
    Width = 75
    Height = 25
    Caption = 'Calculate'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 72
    Top = 312
    Width = 75
    Height = 25
    Caption = 'Exit'
    TabOrder = 2
    OnClick = Button2Click
  end
end
