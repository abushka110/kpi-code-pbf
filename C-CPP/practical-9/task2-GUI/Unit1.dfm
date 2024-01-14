object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 507
  ClientWidth = 277
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Memo1: TMemo
    Left = 16
    Top = 24
    Width = 241
    Height = 409
    TabOrder = 0
  end
  object CalculateBtn: TButton
    Left = 16
    Top = 456
    Width = 75
    Height = 25
    Caption = 'Calculate'
    TabOrder = 1
    OnClick = CalculateBtnClick
  end
  object CloseBtn: TButton
    Left = 182
    Top = 456
    Width = 75
    Height = 25
    Caption = 'Close'
    TabOrder = 2
    OnClick = CloseBtnClick
  end
end
