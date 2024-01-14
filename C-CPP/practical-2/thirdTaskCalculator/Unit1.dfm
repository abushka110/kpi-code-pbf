object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 248
  ClientWidth = 345
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 128
    Top = 155
    Width = 53
    Height = 15
    Caption = #1056#1077#1079#1091#1083#1100#1090#1072#1090
  end
  object LabeledEdit1: TLabeledEdit
    Left = 16
    Top = 32
    Width = 121
    Height = 23
    EditLabel.Width = 46
    EditLabel.Height = 15
    EditLabel.Caption = #1063#1080#1089#1083#1086' '#1040
    TabOrder = 0
    Text = ''
  end
  object LabeledEdit2: TLabeledEdit
    Left = 176
    Top = 32
    Width = 121
    Height = 23
    EditLabel.Width = 67
    EditLabel.Height = 15
    EditLabel.Caption = 'LabeledEdit2'
    TabOrder = 1
    Text = ''
  end
  object Panel1: TPanel
    Left = 16
    Top = 176
    Width = 281
    Height = 41
    BevelInner = bvRaised
    BevelOuter = bvSpace
    TabOrder = 2
  end
  object Button1: TButton
    Left = 16
    Top = 96
    Width = 49
    Height = 25
    Caption = '+'
    TabOrder = 3
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 92
    Top = 96
    Width = 45
    Height = 25
    Caption = '-'
    TabOrder = 4
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 176
    Top = 96
    Width = 41
    Height = 25
    Caption = '*'
    TabOrder = 5
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 248
    Top = 96
    Width = 49
    Height = 25
    Caption = '/'
    TabOrder = 6
    OnClick = Button4Click
  end
end
