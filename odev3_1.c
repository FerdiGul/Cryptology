#2.sorudan elde edilen sonuçlara göre çözüm

n=3599
e=31
d=3031
r=3480

msg = 2019  #kullanıcıdan int(input="....") diye de mesaj alınabilir.
encrypt = (msg**e)%n
print("Mesajın şifreli hali : ", encrypt)

c = 2020
decrypt = (c**d)%n
print("Şifreli mesajın deşifre hali : ", decrypt)
