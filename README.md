# YMAP ROOT講習会用リポジトリ


## 概要

ROOTは欧州原子核研究機構(CERN)によって開発されているデータ解析フレームワークで、素粒子・宇宙物理に限らず、広く使われています。
YMAP ROOT講習会は、研究室配属1年目の学生を対象とし、コンピュータやROOT/C++の基礎を一通り理解してもらい、若手研究者の研究活動の促進と発展を目指しています。
今年度で7回目を迎えます。各大学・各研究室で集まることなく、各自がzoomを用いて参加する形式とします。

本リポジトリには講習会で用いるデータやマクロ例が含まれます.

2023年 YMAP [イベントページ](http://www.icrr.u-tokyo.ac.jp/YMAP/event/root2023/index.html)

## 参加方法

まず、2023年度ROOT講習会[登録フォーム](https://forms.gle/YkBFBjdqbLuwmn1B9)にて登録をお願いします。また、連絡用チャットツール[Slack](https://join.slack.com/t/ymap-workspace/shared_invite/zt-1t4nt0yev-LNFllMojTvnHupRHR5DMsg)に登録してください。
講習会は、ビデオ会議Zoomを使って行い、講習会中を含めた質問等の受付はSlackを通じて行います。
Zoomの配信情報はどなたでも確認いただけますが、質問等は全てSlack内で行いますので、必要な方は必ず登録をお願いします。

また, ROOT講習会*第2回まで*にROOTと好きなエディターのインストールをお願いします。
それぞれの環境へのインストールガイドはこちらです. [インストールガイド](./install), [エディターメモ](./install/editor.md)
うまくいかなければ, Slackの`#質問` チャンネルで質問してください。
第1回で、インストールについて解説します。

## 日程

講習会は以下の日程で行います。この日程で都合の合わない方向けに、録画した動画も後日配信します。閲覧方法は登録された方に連絡します。

### 第1回 2023/04/26 (水) 17:00--19:00 (延長あり)
* 講師 水越彗太 (JAXA)
* 計算機の基礎, ROOTのインストールフォローアップ
* [資料](./materials/root_lec_mzks_day1.pdf)
* [インストール向け資料](./materials/root_lec_mzks_install.pdf)

### 第2回 2023/05/10 (水) 17:00--19:00 (延長あり)
* 講師 水越彗太 (JAXA)
* C++, ROOTマクロ, ヒストグラムの基礎
* [資料](./materials/root_lec_mzks_day2.pdf)

### 第3回 2023/05/24 (水) 17:00--19:00 (延長あり)
 * 講師 高橋光成 (名古屋大)
 * 統計、ヒストグラム

### 第4回 2023/06/07 (水) 17:00--19:00 (延長あり)
 * 講師 中村輝石 (東北大)
 * TF1, Fitting, TGraph

### 第5回 2023/06/14 (水) 17:00--19:00 (延長あり)
 * 講師 伊藤博士 (東京理科大)
 * 乱数, TTree

### 第6回 2023/06/21 (水) 17:00--19:00 (延長あり)
 * 講師 鷲見貴生 (国立天文台), 濱田悠斗 (神戸大)
 * アニメーションプロット, pyroot


## 2022年アンケート結果
### 第0回
* ターミナルが開けた 74%
* エディタをインストールできた 66%
* ROOTのインストールで何をしているのか理解できた 39%
* ROOTをインストールできた 59%
* rootというコマンドが実行できた 63%
* 全体的に簡単だった 11%
* 全体的に難しかった 28%
* やる気が高まった 38%
* エラーの嵐に打ちひしがれた 20%
* 質問があるので後でslackで聞きます 6%

### 第1回
#### 出来た/理解できた項目を選択してください
* プログラミング言語の中でのC++の立ち位置, 処理速度, 使われる分野 83%
* ROOTを動かすためには、最低限のC++の知識が必要である。 91%
* 質問の仕方、質問する場所について 89%
* コマンド「ls」「pwd」「cd」「mkdir」「mv」「rm」「man」の意味と役割 89%
* ディレクトリ構造。「/」「..」の意味 85%
* Tabキー(補完機能)を使えた89%
* ROOTを起動した。「root」または「root -a」でROOTのスプラッシュが表示された。74%
* ROOTのマクロを作成し、実行できた 29%
* 全体的に簡単だった 38%

#### ROOT講習会への意気込みを聞かせてください
* 指導教員・先輩に勧められたのでとりあえず登録・受講した 55%
* ROOTに限らず、解析の基礎について学びたい。 56%
* 実験に必要なのでROOTの使い方を学びたい。 88%
* C++について学びたい。 77%
* Pythonについて理解したい。 36%
* ROOT等について質問できる場として講習会後も活用したい。 52%
* 博士課程(博士後期課程)への進学を検討している。 32%
* その他0%

### 第2回
* 標準偏差の定義と意味 77%
* 一回でもマクロをエディタで開けた。 89%
* 一回でもマクロをエラーなく実行できた。 82%
* ヒストグラムとは何か 93%
* ROOTでヒストグラムのクラスを呼ぶときは、名前、タイトル、Bin数、最小値、最大値が必要89%
* ヒストグラムにデータを詰める時はFill、描画するときはDraw 82%
* ヒストグラムを描画できた 86%
* ヒストグラムを重ね書きする方法 52%
* 全体的に簡単だった 14%
* 質問があるので後で聞きます 2%

### 第3回
* TF1で関数が描けた 95%
* フィッティングが出来た 95%
* likelihoodがなんとなく分かった 76%
* TGらphでグラフが描けた 82%
* 全体的に簡単だった 3%
* 質問があるので後で聞きます 0%

### 第4回
* テキストファイルからTTreeが作成できた 84%
* TTreeの内容を1次元ヒストグラムで描画できた 79%
* TTreeの内容を2次元ヒストグラムで描画できた 53%
* TTreeのエントリを選別できた 42%
* ヒストグラムの見た目を変える方法が理解できた 63%
* 全体的に簡単だった 5%
* 質問があるので後で聞きます 16%

### 第5回
* 任意のPythonスクリプトを動かすことが出来た 76%
* PyROOTでTTreeからヒストグラムを作れた 71%
* RDataFrameを使ってヒストグラムを作れた 41%
* 全体的に簡単だった 18%
* Pythonを使ってみようと思った 82%
* PyROOTを使ってみようと思った 82%
* 質問があるので後で聞きます 0%

## 問合せ先
水越彗太 (mizukoshi.keita@jaxa.jp)

