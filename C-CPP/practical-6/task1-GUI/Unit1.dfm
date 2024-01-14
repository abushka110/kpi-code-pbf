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
    Width = 89
    Height = 15
    Caption = 'Cost of the order'
  end
  object Label2: TLabel
    Left = 184
    Top = 24
    Width = 128
    Height = 15
  end
  object Button1: TButton
    Left = 24
    Top = 208
    Width = 115
    Height = 25
    Caption = 'check please'
    TabOrder = 0
    OnClick = Button1Click
  end
  object CheckBox1: TCheckBox
    Left = 24
    Top = 52
    Width = 115
    Height = 17
    Caption = 'Drink(34UAH)'
    TabOrder = 1
  end
  object CheckBox2: TCheckBox
    Left = 24
    Top = 75
    Width = 115
    Height = 17
    Caption = 'Ice Cream(63UAH)'
    TabOrder = 2
  end
  object CheckBox3: TCheckBox
    Left = 24
    Top = 98
    Width = 115
    Height = 17
    Caption = 'Fries(51UAH)'
    TabOrder = 3
    OnClick = CheckBox3Click
  end
  object CheckBox4: TCheckBox
    Left = 24
    Top = 124
    Width = 115
    Height = 17
    Caption = 'Sauce(16UAH)'
    TabOrder = 4
  end
  object CheckBox5: TCheckBox
    Left = 24
    Top = 147
    Width = 115
    Height = 17
    Caption = 'Burger(70UAH)'
    TabOrder = 5
    OnClick = CheckBox5Click
  end
end
