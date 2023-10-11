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
    Top = 19
    Width = 273
    Height = 15
    Caption = 'Enter the amount of butter (kg) (price =40,9 per kg):'
  end
  object Label2: TLabel
    Left = 16
    Top = 80
    Width = 308
    Height = 15
    Caption = 'Enter the amount of mayonnaise (kg) (price = 62,4 per kg):'
  end
  object Label3: TLabel
    Left = 16
    Top = 136
    Width = 283
    Height = 15
    Caption = 'Enter the amount of cream (kg) (price = 144,1 per kg):'
  end
  object Label4: TLabel
    Left = 16
    Top = 200
    Width = 34
    Height = 15
    Caption = 'Label4'
  end
  object Label5: TLabel
    Left = 16
    Top = 221
    Width = 34
    Height = 15
    Caption = 'Label5'
  end
  object Label6: TLabel
    Left = 16
    Top = 242
    Width = 34
    Height = 15
    Caption = 'Label6'
  end
  object Label7: TLabel
    Left = 16
    Top = 272
    Width = 34
    Height = 15
    Caption = 'Label7'
  end
  object Edit1: TEdit
    Left = 16
    Top = 40
    Width = 121
    Height = 23
    TabOrder = 0
    Text = 'butter (kg)'
  end
  object Edit2: TEdit
    Left = 16
    Top = 96
    Width = 121
    Height = 23
    TabOrder = 1
    Text = 'mayonnaise (kg)'
  end
  object Edit3: TEdit
    Left = 16
    Top = 149
    Width = 121
    Height = 23
    TabOrder = 2
    Text = 'cream (kg)'
  end
  object Button1: TButton
    Left = 16
    Top = 312
    Width = 75
    Height = 25
    Caption = 'Calculate'
    TabOrder = 3
    OnClick = Button1Click
  end
end
