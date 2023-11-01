object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 441
  ClientWidth = 624
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
    Width = 127
    Height = 15
    Caption = 'Enter the standard value'
  end
  object Label2: TLabel
    Left = 16
    Top = 88
    Width = 114
    Height = 15
    Caption = 'Enter the change step'
  end
  object Label3: TLabel
    Left = 16
    Top = 152
    Width = 163
    Height = 15
    Caption = 'Enter the number of table rows'
  end
  object Memo1: TMemo
    Left = 16
    Top = 233
    Width = 449
    Height = 176
    Lines.Strings = (
      'Memo1')
    TabOrder = 0
  end
  object Edit1: TEdit
    Left = 16
    Top = 45
    Width = 185
    Height = 23
    TabOrder = 1
  end
  object Edit2: TEdit
    Left = 16
    Top = 109
    Width = 185
    Height = 23
    TabOrder = 2
  end
  object Edit3: TEdit
    Left = 16
    Top = 173
    Width = 185
    Height = 23
    TabOrder = 3
  end
  object Button1: TButton
    Left = 68
    Top = 202
    Width = 75
    Height = 25
    Caption = 'Calculate'
    TabOrder = 4
    OnClick = Button1Click
  end
end
