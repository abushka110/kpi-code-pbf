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
    Left = 16
    Top = 24
    Width = 64
    Height = 15
    Caption = 'Enter x_start'
  end
  object Label2: TLabel
    Left = 16
    Top = 88
    Width = 61
    Height = 15
    Caption = 'Enter x_end'
  end
  object Label3: TLabel
    Left = 168
    Top = 24
    Width = 43
    Height = 15
    Caption = 'Enter dx'
  end
  object Label4: TLabel
    Left = 168
    Top = 88
    Width = 78
    Height = 15
    Caption = 'Enter precision'
  end
  object Edit1: TEdit
    Left = 16
    Top = 45
    Width = 121
    Height = 23
    TabOrder = 0
  end
  object Edit2: TEdit
    Left = 16
    Top = 109
    Width = 121
    Height = 23
    TabOrder = 1
  end
  object Edit3: TEdit
    Left = 168
    Top = 45
    Width = 121
    Height = 23
    TabOrder = 2
  end
  object Edit4: TEdit
    Left = 168
    Top = 109
    Width = 121
    Height = 23
    TabOrder = 3
  end
  object Button1: TButton
    Left = 111
    Top = 153
    Width = 75
    Height = 25
    Caption = 'Calculate'
    TabOrder = 4
    OnClick = Button1Click
  end
  object Memo1: TMemo
    Left = 17
    Top = 192
    Width = 272
    Height = 242
    TabOrder = 5
  end
end
