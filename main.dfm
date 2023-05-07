object Form1: TForm1
  Left = 0
  Top = 0
  Align = alClient
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'Color Manager'
  ClientHeight = 731
  ClientWidth = 1392
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  Position = poDesigned
  OnCreate = FormCreate
  TextHeight = 13
  object Image1: TImage
    Left = 0
    Top = 0
    Width = 1392
    Height = 483
    Align = alClient
    AutoSize = True
    Center = True
    Proportional = True
    Stretch = True
    ExplicitLeft = -3
    ExplicitWidth = 1390
    ExplicitHeight = 693
  end
  object Panel1: TPanel
    AlignWithMargins = True
    Left = 3
    Top = 699
    Width = 1386
    Height = 29
    Align = alBottom
    AutoSize = True
    TabOrder = 0
    ExplicitTop = 696
    ExplicitWidth = 1384
    object BNorm: TButton
      Left = 33
      Top = 3
      Width = 75
      Height = 25
      Action = Norm
      TabOrder = 0
    end
    object BProtan: TButton
      Left = 114
      Top = 3
      Width = 75
      Height = 25
      Action = Protan
      TabOrder = 1
    end
    object BDeuteran: TButton
      Left = 195
      Top = 3
      Width = 75
      Height = 25
      Action = Deuteran
      TabOrder = 2
    end
    object BTritan: TButton
      Left = 276
      Top = 3
      Width = 75
      Height = 25
      Action = Tritan
      TabOrder = 3
    end
    object BMonoChr: TButton
      Left = 357
      Top = 3
      Width = 75
      Height = 25
      Action = MonoChr
      TabOrder = 4
    end
    object BOpen: TButton
      Left = 986
      Top = 3
      Width = 75
      Height = 25
      Action = Open
      TabOrder = 5
    end
    object BSave: TButton
      Left = 1067
      Top = 1
      Width = 116
      Height = 25
      Action = Save
      TabOrder = 6
    end
    object BNegative: TButton
      Left = 438
      Top = 3
      Width = 75
      Height = 25
      Action = Negativ
      TabOrder = 7
    end
  end
  object rad: TRadioGroup
    Left = 0
    Top = 483
    Width = 1392
    Height = 213
    Align = alBottom
    Caption = #1052#1086#1076#1077#1083#1080
    ItemIndex = 0
    Items.Strings = (
      #1051#1080#1085#1077#1081#1085#1072#1103' '
      'Vi'#233'not'
      'Machado (2009)'
      'Brettel'
      'Coblis v1'
      'Vi'#233'not(LMS)'
      'Meyer-Greenberg-Wolfmaier-Wickline')
    TabOrder = 1
    OnClick = radClick
    ExplicitTop = 480
    ExplicitWidth = 1390
  end
  object op1: TOpenPictureDialog
    DefaultExt = '.jpg'
    Filter = #1060#1086#1088#1084#1072#1090' JPEG(*.jpg;*.jpeg)|*.jpg;*.jpeg'
    Options = [ofHideReadOnly, ofPathMustExist, ofFileMustExist, ofEnableSizing, ofForceShowHidden]
    Left = 216
    Top = 392
  end
  object sv1: TSavePictureDialog
    DefaultExt = '.jpg'
    Filter = #1060#1086#1088#1084#1072#1090' JPEG(*.jpg;*.jpeg)|*.jpg;*.jpeg'
    Options = [ofOverwritePrompt, ofHideReadOnly, ofEnableSizing, ofForceShowHidden]
    Left = 176
    Top = 360
  end
  object lst: TActionList
    Left = 528
    Top = 440
    object Norm: TAction
      Caption = #1053#1086#1088#1084
      OnExecute = NormExecute
    end
    object Protan: TAction
      Caption = #1055#1088#1086#1090#1072#1085
      OnExecute = ProtanExecute
    end
    object Deuteran: TAction
      Caption = #1044#1077#1081#1090#1077#1088#1072#1085
      OnExecute = DeuteranExecute
    end
    object Tritan: TAction
      Caption = #1058#1088#1080#1090#1072#1085
      OnExecute = TritanExecute
    end
    object MonoChr: TAction
      Caption = #1052#1086#1085#1086#1093#1088#1086#1084
      OnExecute = MonoChrExecute
    end
    object Open: TAction
      Caption = #1054#1090#1082#1088#1099#1090#1100'...'
      OnExecute = OpenExecute
    end
    object Save: TAction
      Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100' '#1050#1072#1082'...'
      OnExecute = SaveExecute
    end
    object Exit: TAction
      Caption = #1042#1099#1093#1086#1076
      OnExecute = ExitExecute
    end
    object Negativ: TAction
      Caption = #1053#1077#1075#1072#1090#1080#1074
      OnExecute = NegativExecute
    end
  end
  object MainMenu1: TMainMenu
    Left = 712
    Top = 408
    object MFile: TMenuItem
      Caption = #1060#1072#1081#1083
      object MOpen: TMenuItem
        Action = Open
        ShortCut = 16463
      end
      object MSave: TMenuItem
        Action = Save
        ShortCut = 16467
      end
      object MExit: TMenuItem
        Action = Exit
        ShortCut = 32883
      end
    end
    object MMode: TMenuItem
      Caption = #1056#1077#1078#1080#1084
      object MNorm: TMenuItem
        Action = Norm
        AutoCheck = True
        Checked = True
        Default = True
        RadioItem = True
      end
      object MProtan: TMenuItem
        Action = Protan
        AutoCheck = True
        RadioItem = True
      end
      object MDeuteran: TMenuItem
        Action = Deuteran
        AutoCheck = True
        RadioItem = True
      end
      object MTritan: TMenuItem
        Action = Tritan
        AutoCheck = True
        RadioItem = True
      end
      object MMonoChr: TMenuItem
        Action = MonoChr
        AutoCheck = True
        RadioItem = True
      end
      object MNegativ: TMenuItem
        Action = Negativ
        RadioItem = True
      end
    end
    object MHelp: TMenuItem
      Caption = #1057#1087#1088#1072#1074#1082#1072
      object MAbout: TMenuItem
        Caption = #1054' '#1087#1088#1086#1075#1088#1072#1084#1084#1077'...'
        OnClick = MAboutClick
      end
    end
  end
end
