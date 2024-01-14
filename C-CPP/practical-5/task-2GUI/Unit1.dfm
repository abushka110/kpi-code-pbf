object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Season of the year'
  ClientHeight = 150
  ClientWidth = 200
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 16
    Top = 56
    Width = 3
    Height = 15
  end
  object Edit1: TEdit
    Left = 40
    Top = 16
    Width = 121
    Height = 23
    TabOrder = 0
    Text = 'Edit1'
  end
  object Button1: TButton
    Left = 56
    Top = 88
    Width = 75
    Height = 25
    Caption = 'Determinate'
    TabOrder = 1
    OnClick = Button1Click
  end
end
