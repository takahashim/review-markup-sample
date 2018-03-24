= ブロックのサンプル

//lead{
ブロック構文のサンプルです。

リードのブロック記法も用意しています。
//}

リード文のブロックは少しインデントされることが多いですが、この辺りはスタイルの指定によって変わります。

== 箇条書き

箇条書きは行頭に「 *」をつけます。最初にスペース(U+0020)が入れるのが重要です。

 * 1段目
 ** 2段目
 * 1段目2つ目
 * 1段目3つ目
 ** 2段目
 *** 3段目

== 番号付き箇条書き

箇条書きに連番をつけるには、行頭を「【数値】.」にします。こちらも先頭にスペースを入れます。

 1. 第1の条件
 2. 第2の条件
 3. 第3の条件

== 用語リスト

用語リストはあんまり便利ではない（とりわけLaTeXでは制約がある）のですが、いざという時に役立ちます。

行頭に「 :」を置くのが見出し行で、その下にインデントを深くつけるのが本体行になります。

 : Ruby
    https://www.ruby-lang.org
    オブジェクト指向スクリプト言語
 : Python
    https://www.python.org/
    Python is a programming language that lets you work quickly and integrate systems more effectively.
 : JavaScript
    https://developer.mozilla.org/ja/docs/Web/JavaScript
    そういえばJavaScriptって言語のホームページ的なサイトは存在しないんですね……。

場合によっては用語リストは使わず、レベルが多めの見出しを使った方が便利かもしれません。

==[nonum] 数値のない見出し

見出しに数値を省くには@<tt>{[nonum]}をつけます。

==[nodisp] 目次にしか表示されない見出し

↑この前の行に「目次にしか表示されない見出し」という見出しがあるのですが、目次にしか表示されないので見えません。

この@<tt>{[nodisp]}ですが、献辞や挿絵など、実際の紙面に文字は入れたくないけれども目次には掲載したい、という場合に使うそうです。

==[notoc] 数値がなく、目次に出ない見出し

@<tt>{[notoc]}をつけると、見出しに数値が省かれるのに加え、目次にも表示されなくなります。補足や練習問題などの変わった見出しを使いたい場合や、前付け・付録などでは見出しをつけたくない場合には便利だそうです。



====[column] コラムのサンプル

コラムも使えます。

//info{
コラムの中ではブロックが入れ子で使えます。

ブロックの中では@<b>{インライン}も@<u>{使えます}。
//}


== リスト

ソースコードなどを記述するにはリスト記法を使います。

=== 連番つきリスト

連番つきでリストを使いたいときには@<tt>{//list{...//\}}を使います。

//list[list01][連番つきリストのサンプル]{
## 適当なサンプル
class Foo
  def foo!
    "foo!!!"
  end
end
//}

//list[list02][連番つきリストのサンプル][ruby]{
## 適当なサンプル
class Foo
  def foo!
    "foo!!!"
  end
end
//}


=== 埋め込みリスト

連番なしで単純にリストを使いたいときには埋め込みリスト@<code>{//emlist{...//\}}を使います。

//emlist{
// 適当なサンプル
class Foo {
  foo1() {
    return "foo!!!"
  }
}
//}

//emlist[見出しつきサンプル][js]{
// 適当なサンプル
class Foo {
  foo1() {
    return "foo!!!"
  }
}
//}

見出しはなくても言語は指定したい、という場合は見出しを空の「@<tt>{[]}」にして言語を指摘します。

//emlist[][js]{
// 適当なサンプル
class Foo {
  foo1() {
    return "foo!!!"
  }
}
//}

== 画像

画像は@<tt>{//image{...//\}}を使います。

//image[img01][画像のサンプル:Re:VIEWのサイト http://reviewml.org/]{
//}

連番をふらない画像には@<tt>{//indepimage}を使います。

#@# ブロックは2.3.0でエラーになった
#@# //indepimage[img02]{
#@# //}

//indepimage[img02]

なお、インラインで画像を埋め込むには@<tt>{@}@<tt>{<icon>{...\}}という記法を使います。詳しくは@<hd>{ch02|その他}をどうぞ

== 数式

数式には@<tt>{//texequation{...//\}}を使います。

数式の書き方自体はLaTeXの記法を使います。

//texequation{
  \frac{\pi}{2} =
  \left( \int_{0}^{\infty} \frac{\sin x}{\sqrt{x}} dx \right)^2 =
  \sum_{k=0}^{\infty} \frac{(2k)!}{2^{2k}(k!)^2} \frac{1}{2k+1} =
  \prod_{k=1}^{\infty} \frac{4k^2}{4k^2 - 1}
//}

(@<href>{https://texwiki.texjp.org/?LaTeX%E5%85%A5%E9%96%80%2F%E7%B0%A1%E5%8D%98%E3%81%AA%E6%95%B0%E5%BC%8F%282%29}より)

== embed

文字列をそのまま埋め込むには@<tt>{//embed{...//\}}を使います。

//embed{
このままで埋め込まれている文字列です。
//}

@<tt>{[latex]}などをつけると、そのフォーマットでだけ出力されるようになります。HTMLやLaTeXの専用のタグを使った出力をするのに便利（ないと死ぬ）です。

//embed[latex]{
この部分はLaTeX用です。\textbf{\LaTeX のタグも使えます}。
//}

//embed[html]{
この部分はHTML・EPUB用です。<b>HTMLタグ</b>も使えます。
//}

似たような働きをする@<tt>{//raw{...//\}}というのもあるのですが、こちらよりは@<tt>{//embed}の方が推奨です
（エスケープのルールとかがちょっと違います。というか、エスケープのルールを整理して非互換にするべく@<tt>{//embed}ができたのでした）。
