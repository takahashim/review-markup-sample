= その他の記法

== 空行

空行は「@<tt>{//blankline}」と書きます。

以下は、「あああああ」と「いいいいい」の間が空行(「@<tt>{//blankline}」)、「いいいいい」と「ううううう」の間はただの改行、「ううううう」と「えええええ」の間は「@<tt>|@<br>{}@<br>{}|」を入れています。

//blankline

あああああ

//blankline

いいいいい

ううううう
@<br>{}@<br>{}
えええええ


== コメント

コメント行は冒頭に@<tt>{#@#}と書きます。

#@# コメントです。
#@# 実際には出力されません。あしからず。

実際には@<tt>{#@ }だけでもだいたいはコメントになるのですが、一部プリプロセッサ用の特殊なコマンドがあるので@<tt>{#@#}が推奨です。
