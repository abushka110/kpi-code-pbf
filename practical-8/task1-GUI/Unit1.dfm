object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 211
  ClientWidth = 234
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 32
    Top = 16
    Width = 115
    Height = 15
    Caption = 'Enter x (0 <= x <= 1): '
  end
  object Label2: TLabel
    Left = 33
    Top = 78
    Width = 93
    Height = 15
    Caption = 'Enter precision e: '
  end
  object Button1: TButton
    Left = 32
    Top = 137
    Width = 161
    Height = 25
    Caption = 'Calculate'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Edit1: TEdit
    Left = 33
    Top = 37
    Width = 160
    Height = 23
    TabOrder = 1
  end
  object Edit2: TEdit
    Left = 33
    Top = 99
    Width = 160
    Height = 23
    TabOrder = 2
  end
  object Panel1: TPanel
    Left = 8
    Top = 168
    Width = 218
    Height = 41
    TabOrder = 3
  end
end
