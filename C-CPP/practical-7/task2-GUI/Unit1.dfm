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
    Left = 32
    Top = 16
    Width = 170
    Height = 30
    Caption = 
      'Let'#39's calculate the values of the sums and products of the serie' +
      's:'
    WordWrap = True
  end
  object Memo1: TMemo
    Left = 32
    Top = 72
    Width = 185
    Height = 89
    TabOrder = 0
  end
  object Button1: TButton
    Left = 142
    Top = 176
    Width = 75
    Height = 25
    Caption = 'Close'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 32
    Top = 176
    Width = 75
    Height = 25
    Caption = 'Calculate'
    TabOrder = 2
    OnClick = Button2Click
  end
end
