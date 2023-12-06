object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 637
  ClientWidth = 834
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object StringGrid1: TStringGrid
    Left = 16
    Top = 8
    Width = 265
    Height = 425
    ColCount = 4
    FixedCols = 0
    RowCount = 16
    FixedRows = 0
    ParentShowHint = False
    ShowHint = True
    TabOrder = 0
  end
  object BtnCalculate: TButton
    Left = 16
    Top = 448
    Width = 265
    Height = 25
    Caption = 'Calculate'
    TabOrder = 1
    OnClick = BtnCalculateClick
  end
  object StringGrid2: TStringGrid
    Left = 304
    Top = 8
    Width = 265
    Height = 553
    ColCount = 4
    RowCount = 21
    TabOrder = 2
  end
  object Memo1: TMemo
    Left = 16
    Top = 480
    Width = 265
    Height = 81
    Lines.Strings = (
      '')
    TabOrder = 3
  end
end
