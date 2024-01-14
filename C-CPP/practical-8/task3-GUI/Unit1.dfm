object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 442
  ClientWidth = 224
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 16
    Top = 18
    Width = 34
    Height = 15
    Caption = 'x_start'
  end
  object Label2: TLabel
    Left = 16
    Top = 77
    Width = 31
    Height = 15
    Caption = 'x_end'
  end
  object Label3: TLabel
    Left = 16
    Top = 138
    Width = 13
    Height = 15
    Caption = 'dx'
  end
  object Edit1: TEdit
    Left = 16
    Top = 39
    Width = 185
    Height = 23
    TabOrder = 0
  end
  object Edit2: TEdit
    Left = 16
    Top = 98
    Width = 185
    Height = 23
    TabOrder = 1
  end
  object Edit3: TEdit
    Left = 16
    Top = 159
    Width = 185
    Height = 23
    TabOrder = 2
  end
  object Memo1: TMemo
    Left = 16
    Top = 231
    Width = 185
    Height = 202
    Lines.Strings = (
      '')
    TabOrder = 3
  end
  object Button1: TButton
    Left = 16
    Top = 200
    Width = 185
    Height = 25
    Caption = 'Calculate'
    TabOrder = 4
    OnClick = Button1Click
  end
end
