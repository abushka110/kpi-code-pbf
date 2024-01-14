object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 442
  ClientWidth = 391
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Memo1: TMemo
    Left = 16
    Top = 16
    Width = 353
    Height = 297
    TabOrder = 0
  end
  object CalculateBtn: TButton
    Left = 16
    Top = 336
    Width = 75
    Height = 25
    Caption = 'Calculate'
    TabOrder = 1
    OnClick = CalculateBtnClick
  end
  object CloseBtn: TButton
    Left = 294
    Top = 336
    Width = 75
    Height = 25
    Caption = 'Close'
    TabOrder = 2
    OnClick = CloseBtnClick
  end
end
