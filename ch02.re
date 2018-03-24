= インラインのサンプル

インライン記法のサンプルです。

== 装飾用インライン

 * 太字: @<b>{太字太字太字太字太字太字}
 * キーワード: @<kw>{キーワード, 補足}
 * 傍点: @<bou>{傍点傍点傍点傍点傍点}
 * 網かけ: @<ami>{網かけ網かけ網かけ網かけ網かけ}
 * 下線: @<u>{下線下線下線下線下線下線}
 * イタリック: @<i>{普通のイタリック普通のイタリック普通のイタリック}
 * 強調: @<em>{強調強調強調強調強調}
 * 強い強調: @<strong>{強調（太字）強調（太字）強調（太字）強調（太字）}
 * 等幅: @<tt>{等幅等幅等幅等幅等幅}
 * 等幅イタリック: @<tti>{等幅イタリック等幅イタリック等幅イタリック}
 * 等幅と太字: @<ttb>{等幅と太字等幅と太字等幅と太字等幅と太字}
 * コード: @<code>{def foo; a = b; end}
#@# * 縦中横: @<tcy>{ab}@<tcy>{12}@<tcy>{34}

=== インライン記法にインライン記法を埋め込む

現在のRe:VIEWではインライン記法の入れ子はできません。

しかしながら、装飾系のインライン記法の中にインライン記法のタグを埋め込みたい! ということがごくまれにあります。
@<tt>{@}@<tt>{<br>{\}}をコードとして書きたい場合とかですね。

そのような場合、このサンプルのように、「@<tt>{@}」と「@<tt>{<foo>{...\}}」で分割するという技があります。
絵に描いたようなバッドノウハウですね。でもまあ便利です。

なお、最後の「@<tt>{\}}」はエスケープが必要で、@<tt>{\\\}}と書きます。ご注意ください。

なお、これ以外の方法としては、@<tt>$@<tt>|@<tt>{...}|$とか@<tt>|@<tt>$@<tt>{...}$|のように書く方法もあります。こちらは中で任意の文字を使うかもしれない（具体的には「@<tt>{$}」や「@<tt>{|}」を使うかもしれない）場合にはご注意ください。

== 参照用インライン

 * 章番号: @<chap>{ch01}
 * 章タイトル: @<title>{ch01}
 * 章番号と章タイトル: @<chapref>{ch01}
 * リスト: @<list>{list01}
 * 画像: @<img>{img01}
 * テーブル: @<table>{tbl01}
 * 見出し: @<hd>{装飾用インライン}
 * コラム見出し: @<column>{コラムのサンプル}

== その他

 * ルビ: @<ruby>{親文字, ルビルビ}、@<ruby>{親文字が長い場合, ルビ}、@<ruby>{親文字, ルビの方が圧倒的に長くて親文字からはみ出る場合}、
 * Unicode文字参照: @<uchar>{2603}@<uchar>{2603}@<uchar>{2603}
 * リンク: @<href>{https://github.com/kmut/review}, @<href>{http://reviewml.org, Re:VIEWのホームページ}
 * インライン画像: @<icon>{icon01}@<icon>{icon01}@<icon>{icon01}
 * インライン数式: @<m>{x = a x ^ 2 + b x + c},
   @<m>|\frac{\pi}{2} = \left( \int_{0}^{\infty} \frac{\sin x}{\sqrt{x}} dx \right)^2 = \prod_{k=1}^{\infty} \frac{4k^2}{4k^2 - 1}|
 * 文字列埋め込み: @<raw>{|html| 生の<b>HTML</b>文字列}@<raw>{|latex| 生の\LaTeX 文字列}
 * 文字列埋め込みその2: @<embed>{|html| 生の<b>HTML</b>文字列} @<embed>{|latex| 生の\LaTeX 文字列}

=== 数式記法でエスケープを減らす

インラインの数式記法@<tt>{@}@<tt>{<m>{...\}}は「{}」も「\」も多用するので、Re:VIEWのエスケープとは全面的に衝突します。つらい。

というわけで、最近のRe:VIEWでは数式記法の拡張として@<tt>{@}@<tt>{<m>|...|}と@<tt>{@}@<tt>{<m>$...$}という謎の記法が爆誕しました。
これを使えば、@<m>|\frac{\pi}{2} = \left( \int_{0}^{\infty} \frac{\sin x}{\sqrt{x}} dx \right)^2 = \prod_{k=1}^{\infty} \frac{4k^2}{4k^2 - 1}|みたいな
すごい数式も（LaTeXが使えるひとには）簡単に書けるようになります（書き方はこのファイルのソースを見て下さい）。べんり！

== 強制改行

強制改行には@<tt>{@}@<tt>{<br>{\}}を使います。

改行のサンプルです。@<br>{}改行のサンプルです。@<br>{}改行のサンプルです。@<br>{}改行のサンプルです。

先頭がインデントされるのに注意です。インデントしたくない場合には@<tt>{//noindent}を使います。

//noindent
改行のサンプルです。@<br>{}改行のサンプルです。@<br>{}改行のサンプルです。@<br>{}改行のサンプルです。


== インラインとエスケープ

インライン記法では「}」と「\」は特別な意味を持つため、自由に書けないのに注意です。

「}」は「\}」と、「\」は「\\」と書いて下さい。

== インライン参照用のサンプル

上で使っている参照系のインラインで使っているものです。

====[column] コラムのサンプル

コラムのサンプルです。

=== リストのサンプル

//list[list01][リスト参照のサンプル]{
/* 適当なリスト */
const char s[] = "foo!!!";

int foo(void) {
  return s;
}
//}


=== 画像のサンプル

//image[img01][画像のサンプル]{
サンプル
//}

=== 表のサンプル

//table[tbl01][テーブルのサンプル]{
1	2	3
------------------------------
4	5	6
7	8	9
//}
