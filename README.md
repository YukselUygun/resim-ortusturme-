# resim-ortusturme-
## resim örtüştürmedeki amaç:
`Resim örtüştürme probleminin amacı; birbirine benzeyen iki veya daha fazla resim arasındaki benzerlikleri belirlemek
ve bu resimlerin ortak özelliklerini birleştirerek tek bir resim oluşturmaktır.
Bu işlem, özellikle zaman içindeki değişimleri gözlemlemek için kullanılan video ve filmlerde kullanılır.
Benzer görüntülerin birleştirilmesiyle daha net ve daha ayrıntılı bir görüntü oluşturulur.
Bu, birbirine benzeyen resimleri bir araya getirerek daha yüksek kaliteli bir görüntü elde etmek için kullanılır.`
## kodun açıklamaları:
`Bu kod iki tane 3x3 lük bir kare matrisini img1,img2 şeklinde isimlendirip birinci resimdeki tüm 1 bitlerini 
sağa,sola,yukarı,aşağı şeklinde kaydırarak ikinci resime benzetmeye çalışır.`

**kod nasıl çalışır:**

`ilk olarak img1 matrisi içine {1,0,1},{1,1,0},{0,1,1} değerleri alt alta gelecek şekilde oluşturuldu.
Sonra img1 matrisinin çıktı ekranında satır ve sütunlarının görülmesi için iki tane for döngüsü içine alınıp yazdırıldı.`

`ikinci olarak img2 matrisi içine {0,0,1},{0,1,0},{1,0,0} değerleri alt alta gelecek şekilde oluşturuldu.
Sonra img2 matrisinin çıktı ekranında satır ve sütunlarının görülmesi için iki tane for döngüsü içine alınıp yazdırıldı.`

`Üçüncü olarak img2'yi img1'e benzeteceğimiz için bunun sonuçlarını atayacağımız bir başka kare matris oluşturuyoruz bunun adı da img3'tür.
Bu kodun içindeki tüm değerleri sıfır atıyoruz yani boş olsun diye atayıp yazdırıyoruz.`

`Dördüncü olarak img1 görüntüsünü sağa kaydırmak için bir kod bloğu oluşturuyoruz.Bu kod bloğu img1 matrisindeki her bir elemanı tek tek kontrol eder.
Eğer elemanın değeri 1 ise, iç içe iki for döngüsü kullanarak img2 matrisinde aynı satırda ve sağ taraftaki elemanlar kontrol edilir.
İkinci döngüde, bir "k" değişkeni kullanılarak "j" değişkeni ile toplanır ve elde edilen veri, 3'ten küçükse ve img2 matrisinde bu verideki elemanın değeri de 1 ise,
img3 matrisindeki aynı satırda ve sağ taraftaki elemanın değeri 1 olarak güncellenir.Bu işlem, img1 matrisindeki her bir 1 elemanı için yapılır.
Sonuçta, img3 matrisi, img1 matrisindeki 1 elemanlarının sağa doğru kaydırıldığı sonucunu verir.`

`Beşinci olarak img1 görüntüsünü sola kaydırmak için bir kod bloğu oluşturuyoruz.Bu kod bloğu img1 adlı matrisin her bir elemanını tek tek kontrol eder.
Eğer elemanın değeri 1 ise, iç içe iki for döngüsü kullanarak img2 matrisinde aynı satırda ve sol taraftaki elemanlar kontrol edilir.
İkinci döngüde, bir "k" değişkeni kullanılarak "j" değişkeninden çıkarılır ve elde edilen veri, 0'dan büyük veya eşitse ve img2 matrisinde bu verideki elemanın değeri de 1 ise,
img3 matrisindeki aynı satırda ve sol taraftaki elemanın değeri 1 olarak güncellenir.Bu işlem, img1 matrisindeki her bir 1 elemanı için yapılır.
Sonuçta, img3 matrisi, img1 matrisindeki 1 elemanlarının sola doğru kaydırıldığı sonucunu verir.`

`Altıncı olarak img1 görüntüsünü yukarı kaydırmak için bir kod bloğu oluşturuyoruz.Bu kod bloğu, img1 adlı matrisin her bir elemanını tek tek kontrol eder.
Eğer elemanın değeri 1 ise, iç içe iki for döngüsü daha kullanarak img2 matrisinde aynı sütunda ve yukarıdaki elemanlar kontrol edilir.
İkinci döngüde, bir "k" değişkeni kullanılarak "i" değişkeninden çıkarılır ve elde edilen veri, 0'dan büyük veya eşitse ve img2 matrisinde bu verideki elemanın değeri de 1 ise,
img3 matrisindeki aynı sütunda ve yukarıdaki elemanın değeri 1 olarak güncellenir.Bu işlem, img1 matrisindeki her bir 1 elemanı için yapılır.
Sonuçta, img3 matrisi, img1 matrisindeki 1 elemanlarının yukarı doğru kaydırıldığı sonucunu verir.`

`Yedinci olarak img1 görüntüsünü aşağı kaydırmak için bir kod bloğu oluşturuyoruz.Bu kod bloğu, img1 adlı matrisin her bir elemanını tek tek kontrol eder.
Eğer elemanın değeri 1 ise, iç içe iki for döngüsü daha kullanarak img2 matrisinde aynı sütunda ve aşağıdaki elemanlar kontrol edilir.
İkinci döngüde, bir "k" değişkeni kullanılarak "i" değişkenine eklenir ve elde edilen veri, img2 matrisinin satır sayısından küçükse ve bu indeksteki elemanın değeri de 1 ise,
img3 matrisindeki aynı sütunda ve aşağıdaki elemanın değeri 1 olarak güncellenir.Bu işlem, img1 matrisindeki her bir 1 elemanı için yapılır.
Sonuçta, img3 matrisi, img1 matrisindeki 1 elemanlarının aşağı doğru kaydırıldığı sonucunu verir.`

`Son olarak img1'deki değerlerin sağa,sola,yukarı,aşağı kaydırarak img2'ye benzettiğimiz değerleri içine atayıp img3 matrisinin çıktıda satır ve sütunlar ayarlanacak şekilde iki tane for 
döngüsü açarak yazdırma işlemi gerçekleştiriliyor.`
