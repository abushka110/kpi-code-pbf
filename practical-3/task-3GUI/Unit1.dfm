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
    Top = 18
    Width = 185
    Height = 15
    Caption = 'Label1'
  end
  object Label2: TLabel
    Left = 16
    Top = 77
    Width = 185
    Height = 15
    Caption = 'Label2'
  end
  object Label3: TLabel
    Left = 16
    Top = 138
    Width = 185
    Height = 15
    Caption = 'Label3'
  end
  object Edit1: TEdit
    Left = 16
    Top = 39
    Width = 185
    Height = 23
    TabOrder = 0
    Text = 'Edit1'
  end
  object Edit2: TEdit
    Left = 16
    Top = 98
    Width = 185
    Height = 23
    TabOrder = 1
    Text = 'Edit2'
  end
  object Edit3: TEdit
    Left = 16
    Top = 159
    Width = 185
    Height = 23
    TabOrder = 2
    Text = 'Edit3'
  end
  object Memo1: TMemo
    Left = 16
    Top = 231
    Width = 185
    Height = 89
    Lines.Strings = (
      '')
    TabOrder = 3
  end
  object Button1: TButton
    Left = 16
    Top = 200
    Width = 185
    Height = 25
    Caption = 'Button1'
    TabOrder = 4
    OnClick = Button1Click
  end
end
