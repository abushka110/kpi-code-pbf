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
  object BtnCalc: TButton
    Left = 24
    Top = 25
    Width = 75
    Height = 25
    Caption = 'Calculate'
    TabOrder = 0
    OnClick = BtnCalcClick
  end
  object Memo1: TMemo
    Left = 24
    Top = 184
    Width = 265
    Height = 89
    Lines.Strings = (
      'Memo1')
    TabOrder = 1
  end
  object StringGrid1: TStringGrid
    Left = 24
    Top = 56
    Width = 265
    Height = 113
    ColCount = 4
    FixedCols = 0
    RowCount = 4
    FixedRows = 0
    TabOrder = 2
  end
end
