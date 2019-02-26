
== 各種イベント参加感想＠nobu23
==== 自己紹介
　某メーカーのソフトウェアエンジニアをやっています。
主にオンプレのWindowsサーバ系のインフラやNET系アプリミドルウェア、アプリ開発をメインに経験してきました。

　本社は東京ですが、開発拠点は静岡県東部の田舎ということで社外のエンジニアコミュニティといったものがほぼ無い状態で、仕事以外では独学で色々と学んでいる状態です。
仕事に関しては最近はアウトソースが多く、業務でのコーディングはほぼ無く、コードを見るのはレビューやトラブル対応時がという状況。

　仕事外ではにvuejsによるSPAやAWS Lambda等を勉強中。
下記blogで自作ソフトやプログラミングに関する投稿を行っています。

 * Blog:@<href>{http://nobunobu1717.site/}
 * Twitter:@nobu23 @<href>{https://twitter.com/nobu23}

==== 参加した会の概要
　残念ながら、個人主催等の勉強会はありませんがこれまでに参加した技術カンファレンスの話をしたいと思います。
これまでに行った主なカンファレンスは下記になります。

===== de:code 
　マイクロソフト(以下MS)主催の技術者向けカンファレンス。2日間で100以上のセッションが開催される大規模なイベントです。
Windows,Azure,.NET(C#)といったMSの技術に関連するセッションが多くを占めます。
参加費は8万円ということで、一般での参加は敷居が高いです。
(そのためか、これから挙げる他のカンファレンスよりもスーツ率が高めに感じました。)

　似たようなMS主催の技術者向けカンファレンスで、インフラ系が中心のようですがTech Summitといったものも存在します。
また、多くのセッション動画はYoutubeにアップロードされるため、参加者以外も視聴可能です。

 * 2017年の動画:@<href>{https://channel9.msdn.com/Events/de-code/2017}
 * 2018年の動画:@<href>{https://www.microsoft.com/ja-jp/events/decode/2018/online/archive.aspx}

　筆者は2017,2018年に参加。

===== Google Cloud Next in Tokyo(GCN)
　Google主催による、クラウドプラットフォームのGoogle Cloud Platform(以下GCP)をテーマとした技術者向けカンファレンス。
GCPの各種サービスに関するセッションが多いですが、Googleの開発している技術(TensorFlowやkubanetesなど)に関するテーマも多く存在します。
de:codeと比較するとカンファレンス数等は減りますがそれでも十分大きい規模です。

　参加費は無料ということで、気軽に参加可能です。
de:codeと同じく、こちらもYoutubeに多くのセッションはアップロードされて視聴可能です。
 * 2017年の動画:@<href>{https://www.youtube.com/playlist?list=PLmoHjhhs3ySFRWcYi3JgN940OuBMNO1LT}
 * 2018年の動画:@<href>{https://www.youtube.com/playlist?list=PLmoHjhhs3ySEEkZnUdKglsCi0dW4ef8xu}

筆者は2017,2018年に参加。

===== Developers Summit(デブサミ)
　技術書を数多く出版している翔泳社が主催する技術者カンファレンス。
セッションのテーマとしては、特定のITベンダー主催では無いので、幅広いテーマとなっています。
雰囲気も上記カンファレンスと比較してアットホームでスーツ率も低く、まさにエンジニアのためのお祭りといった雰囲気があります。
こちらも参加費は無料で、気軽に参加可能です。

筆者は2018,2019年に参加

==== 参加しようと思ったきっかけ
　現在の会社へ新卒で入社したのは2010年と結構経ちますが、こういったカンファレンスに参加し始めたのはここ２～３年になります。
最新技術等に触れないまま、技術的にレガシーといわれるようなものを使用して開発を行う事が多く、
業務に忙殺され最新技術に興味に持つことなく、日々を過ごす事が長く続いていました。

　部署の移動を切っ掛けに、当時の上司の推薦で付き合いのあるベンダーの招待枠でde:code2017に参加。
その後すぐに、これまでのオンプレでレガシーよりではないクラウドベースの新製品の初期フェーズに関わることがあり、
その調査としてGCNに参加。味をしめてその後は隙を見てはイベントに参加を試みて現在に至ります。

==== 参加しての感想等
===== 良かった点
　何度か参加していますが、共通して良かったと思った点は下記になります。

 * 様々なセッションから選ぶ楽しさ
　基本的に複数個のセッションが同時に開催されるため、その中から興味のあるセッションを選べる楽しさがあります。
　(場合によっては、興味があるセッションが被ってしまう悩ましさもありますが。。。)

 * 最新技術を知ることができる良い機会
　最新の技術に関して業務で使用していないと、自分からアンテナを立てていない限り触れる機会がないので、知識を吸収する良い機会となりました。
個人的には、コンテナオーケストレーションやサーバレスなど、何となく聞いたことはある技術がどういったものなのか、知る良い機会となりました。
本格的に知るには自分で動かしてみたり、実装してみる必要がありますが、まずはどういったものなのかイメージを掴んだり知るのに最適な入門セッションが多く開催されているので興味があれば参加することをお勧めします。
また、初日などに開催されるKeyNoteではこれからの技術動向や最新技術などを包括的に説明してくれるので、浅く広く全体を知れるため個別のセッションとは違う形で勉強になります。

　外に公開等はしていないのですが、こういった機会がきっかけとなり、Xamarinでスマホアプリを作ってみたり、
AWSやAzure上でサーバレスSPAを作ったりといった個人で色々と最新技術を試すきっかけとなりました。

 * 比較的ニッチな分野の技術者が沢山いる安心感
Webで流行している以外の技術のセッションでも、大量の人が参加しているのを見て妙な安心感や連帯感を感じました。
実際には十分メジャーなのですが、Web系の技術者からはあまり人気が無い.NETやC#がde:codeでは大量に取り上げられて、多くの人が集まっていることに感動しました。

 * 経験談など参考になる話が多く聞ける
　最新技術などに関するセッション以外にも、登壇者の方の経験談や知見などを共有するセッションが参考になります。
デブサミは特にこういったセッションが多くあります。社内ではこういった話をなかなか聞く機会が無いため、個人的には貴重な機会となりました。
その他にまつもとゆきひろ氏やちょまどさん、ホリエモンなど、(エンジニアには)有名な人の話を直接聞ける機会もあり楽しめます。
それ以外にも、大概のセッションでは登壇者に直接質問等ができるブースが用意されて登壇後に直接会話することができるので、気になる内容などがあれば後から詳細を聞くこともできます。
(私は聞いたことが無いのですが、大概は長蛇の列ができていて凄いことになっています。)

 * ノベルティ
　企業の展示スペースやセッション内でのアンケートに答えたりすると、その企業のノベルティをもらえたりします。
シールや缶バッチ,トートバッグなどが定番です。(個人的にはデブサミ2019で配っていた言語別缶バッチが良かったです。)
de:codeやGCNではイベント用のスマホアプリが用意されていて、そこでスタンプラリーやアンケートに答えるとリッチな景品がもらえたりします。

//indepimage[mag][de:code2017でもらった愛用のマグカップ][scale=0.25]
//indepimage[item][デブサミ2019の戦利品たち][scale=0.25]

 * 食事
　各カンファレンスでは、お昼の時間帯のセッションではお弁当とお茶が付いてきて食べながら聞くことができます。
de:codeとGCNですと、大企業だけあって展示会場で無料のコーヒーやパン、ドーナツなどが振舞われたり、
セッション終了後の夜においしい料理やお酒が飲める立食パーティが行われて大盤振る舞いです。
無料で色々とおいしい思いができるので結構楽しみであったりします。

//indepimage[bento][de:code2018の豪華弁当][scale=0.25]

 * 技術書
　各カンファレンスには物販があって技術書を売っていたりします。まだ発売前の本が先行販売されていたり、定価の10~30％引きで買えたりとお得です。
デブサミが翔泳社主催だけあって品揃え等も豊富に感じました。（オライリーの本が売っているのもうれしい）
翔泳社はデブサミに合わせて、技術電子書籍の50％OFFセールを行っているので、新刊を会場で安く買い、
それ以外の興味がある本をKindleで購入して散財してしまいます。

===== 反省点や課題
　基本的に良い点ばかりなのですが、参加した上で個人的な反省点や気になった点などを記載します。

 * セッションの選択ミス
　セッションの種類によっては中級～上級者向けのセッションもあり、良く調べずに参加して内容が把握できずに後悔することがありました。
de:codeやGCNですと、セッションごとにレベルが数値で設定されており、その値で判断することが可能ですので、参加するセッションのレベルを見ておくと良いです。

 * 予約満席
　GCNとデブサミは各セッションが予約制なので、気になっているセッションが満席になっている事が多々あります。
スケジュールも徐々に追加されていくため、忘れた頃に気になるセッションが追加されている事に気が付き、既に満席といった事も。
予約開始したら、とりあえず仮押さえした上で、気になるセッションが追加されていないか、こまめにチェックすることが望ましいと思います。
ただ、予約で満席でも当日には立ち見や空席で見れたりする事が殆どなので、当日に諦めずに並べば入れたりします。

 * 混雑
　基本的にこれらイベントは参加者が多く、各セッション間で会場の移動が発生するため大混雑になります。
人気のセッションがある部屋の前などは、待機列で通路がほぼ埋まって詰まったりすることも。
入場も基本的にバーコードや二次元コードでチェックを行っていくので時間がかかり、結構待ちます。
将来的に非接触や無線での認証が行われるようになればスムーズになりそうなので期待。

 * ボッチによる寂しさ
　地方から一人で参加しているため、基本的に知り合いもおらず、ただ一人でセッションを聞いていることが多く、その場で誰かと共有や議論をするといった事がありません。
立食パーティも寂しく、料理を食べてそそくさと退散したりします。
これは私の個人的な気質が関係するため、逆に知り合いが多い人、こういった場で知り合いを増やせる人には多くの人と交流が可能な良い機会になると思います。

 * 現実との落差
最新技術や凄いエンジニアの話を聞いて希望を持っても、それらを使ったり実践することのできない現実の仕事にフラストレーションを感じたりします。
ここは個人でのアウトプットに活かしたり、カイゼンジャーニーよろしく、小さなことからでも個人で改善していく必要がある所だと思っています。

==== 個人的に記憶に残ったセッション
　既にかなり前になっているものもあり、記憶があいまいになっていますが特に印象に残っているセッションの感想や紹介などを記載します。

 * 『ダサいはバグだ！』を実践するモノづくり(de:code 2017)
　「弥生会計」といった会計ソフトなどを開発している弥生株式会社の、自社開発製品への取り組みに関して紹介するセッションでした。
開発している製品や会社名と合わせて、スーツを着たお堅い会社のイメージがありましたが、実際にはエンジニアは私服であったり、先進的な開発方法にチャレンジしていたりなど
イメージと180度違う事に驚きました。(このイメージのことは自虐ネタとして披露していました。)

　俺のUX(エンジニアが自分で作成したUXのこだわりをマネージャ等にレビューとして説明する仕組み)や
全社員テスト(条件がバラバラな全従業員の環境に最新版をインストールしてのテスト)など部署を横断して全社的に製品を良くしていこうと姿勢に感銘を受けました。

 * 「どこでコードを走らせるべきか ?」Compute Engine / Container Engine / App Engine / etc（GCN2017)
　GCPにおける各コンピューティングサービスの位置づけと説明。初心者向けに各種サービスが何なのか丁寧に説明があり、
クラウド技術に関して殆ど知らなかった当時の私には非常に助かりました。

　今までクラウドというと、なんとなくHyper-VやVMWareでやっている仮想OSをクラウド上で動かせるだけといったイメージしかありませんでしたが、
コードを書いてデプロイするだけで、インフラやOSを意識しなくてよいPaaSやFaaS、コンテナといったものに関してメリットやどういったものなのかを知ることができました。
この辺りのサービスは基本的にAWSもAzureも似たようなものを提供しているので、クラウドサービスにおける基礎教養として有用でした。

    動画Link:@<href>{https://www.youtube.com/watch?v=GnDpv3HT-LU}


 * ゲーミフィケーションエバンジェリストが説く、アプリ開発で見落としがちな「おもてなし」とは～面白さを伝える × 面白く魅せる～(デブサミ2019)
　ゲーミフィケーションとは、ゲームデザイン要素やゲームの原則をゲーム以外の物事に応用することで、これらをどう実際のアプリ開発に落とし込めば良いのかといった事を
実際に何個かの要素を例に説明していました。

　セッション自体も、ゲーミフィケーションを応用した形となっており、
参加者のリアルタイム投票結果をスライドに表示しつつ、臨機応変に話をするなど飽きさせない、非常に面白いものとなっていました。

 * アウトプットのすすめ ～技術同人誌・LT登壇・Podcast～(デブサミ2019)
　今回、この文章を書くきっかけになったセッションです。
エンジニアが仕事以外にアウトプットを行う大切さやメリットを、様々な立場や経歴の方々が熱く語ってくれて感動しました。
実際に技術同人誌の出版やPodcastの配信などでアウトプットを行っている方々の経緯や説明には説得力があり、自分もやってみたいと思わせるものでした。

　以前から個人的にblogを作っており、断片的にですが技術的な投稿をしたり、フリーソフトとソースを公開していたりはしていたものの、
アウトプットといった形でしっかりやっているわけではなく、何となくずるずると一方的に公開して実感等も無かったのが正直なところでした。

　このセッションを機に、もう少し外に向かってアウトプットしたいと思い、まずは小さな一歩からといった言葉を受けて久しぶりにTwitterを投稿したところ登壇者の一人の
おやかた氏に声をかけて頂き、驚きとともに外に向かってアウトプットする大切さを実感しました。

  スライドショーLink:@<href>{https://speakerdeck.com/oyakata2438/devsumi-15-e-8-output}
  TogetterのまとめLink:@<href>{https://togetter.com/li/1319557}
  
==== 最後に
　今回、自分が過去に参加した技術カンファレンスの感想や思い出を書いてみました。
稚拙で読みづらい文章で申し訳ないですが、読んでくれた方が居たならば幸いです。

　個人的にはこういった技術カンファレンスに参加し始めたことで、最新技術に関して最低限知ることができ、いままでとまっていた時計が動き始めたような感覚を感じました。
無料で参加できるイベントが多いので、参加したことのない方はまずは登録だけでもして、興味があるセッションに参加して雰囲気を感じるだけでも良いのではないかと思います。

　個人的な目標として、地方在住といったハンデはあるものの、今後は大規模なカンファレンス以外にも小規模な勉強会等に今後は参加してみたいと思いました。
また、テーマ等が浮かばないのですが、いずれは技術書典で売れるような本が書けたらと思います。

　最後に、このような自分が少しでも変化するきっかけを与えてくださった、おやかた氏およびアウトプットのすすめに登壇された方々に感謝いたします。