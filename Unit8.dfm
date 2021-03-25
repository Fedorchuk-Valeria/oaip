object Form8: TForm8
  Left = 0
  Top = 0
  Caption = 'Form8'
  ClientHeight = 242
  ClientWidth = 527
  Color = clWhite
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Button1: TButton
    Left = 400
    Top = 24
    Width = 75
    Height = 25
    Caption = #1054#1090#1086#1073#1088#1072#1079#1080#1090#1100
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 400
    Top = 71
    Width = 75
    Height = 25
    Caption = #1057#1087#1088#1103#1090#1072#1090#1100
    TabOrder = 1
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 400
    Top = 111
    Width = 75
    Height = 25
    Caption = #1055#1077#1088#1077#1076#1074#1080#1085#1091#1090#1100
    TabOrder = 2
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 400
    Top = 151
    Width = 75
    Height = 25
    Caption = #1044#1074#1080#1078#1077#1085#1080#1077
    TabOrder = 3
    OnClick = Button4Click
  end
  object Timer1: TTimer
    Enabled = False
    Interval = 50
    OnTimer = Timer1Timer
    Left = 424
    Top = 184
  end
end
