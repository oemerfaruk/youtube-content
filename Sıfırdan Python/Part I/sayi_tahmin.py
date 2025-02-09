import random

sayi = random.randint(0,100)

hak = 5


while hak >= 0:
    tahmin = int(input("Tahmininizi giriniz: "))

    if hak != 0:
        if tahmin == sayi:
            print("Tebrikler, doğru tahmin!")
            break
        elif tahmin < sayi:
            
            print("Daha büyük bir sayı deneyiniz. Kalan hakkınız: ", hak)
            hak -= 1
            continue
        elif tahmin > sayi:
            
            print("Daha küçük bir sayı deneyiniz. Kalan hakkınız: ", hak)
            hak -= 1
            continue
    else:
        print("Hakkınız bitti. Doğru cevap: ", sayi)
        break