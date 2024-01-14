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
  object BtnVote: TButton
    Left = 184
    Top = 224
    Width = 81
    Height = 25
    Caption = 'Vote'
    TabOrder = 0
    OnClick = BtnVoteClick
  end
  object StringGrid1: TStringGrid
    Left = 16
    Top = 24
    Width = 417
    Height = 177
    ColCount = 6
    RowCount = 7
    TabOrder = 1
  end
  object Memo1: TMemo
    Left = 16
    Top = 272
    Width = 417
    Height = 89
    Lines.Strings = (
      '')
    TabOrder = 2
  end
end
