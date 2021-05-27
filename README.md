# CSGO-Mission

System misji przeznaczony dla serwerów CS:GO. W łatwy sposób pozwala ustalić kategorie z misjami dla danych typów misji wraz z nagrodami.

## Limity
Maksymalnie 32 kategorie i 32 misje

## Ogólne ustawienia
```
"min_players"	"2"		// Minimalna ilość graczy potrzebna do działania
"skip_type"	"2"		// Typ pominięcie: 0 - brak możliwości | 1 - punkty pominięć | 2 - kara za pominięcie (% danej nagrody)
"skip_amount"	"5"		// Jeżeli skip_type ustawiłeś na 1, to tutaj podajesz ilość pominięć na start
"skip_punish" 	"0.2"		// Jeżeli skip ustawiłeś na 2, to tutaj podajesz procent kary, np 0.2 to 20% nagrody będzie w formie kary
"xp_type"	"1"		// XP: Działa tylko z qCall of Duty | 0 - wyłączone
"coins_type"	"2"		// Waluta, którą się otrzymuje: 1 - qCall of Duty | 2 - pShop | 3 - Store by Zephyrus | 4 - NCRPG
```

## Zapis
Mysql/sqlite
```
"qMission"
{
	"driver"			"mysql"
	"host"				"host"
	"database"			"nazwa_bazy"
	"user"				"nazwa_uzytkownika"
	"pass"				"haslo"
	"port"				"3306"
}
```

## Waluta
Wsparcie dla
- [x] Call of Duty by Qesik
- [x] pShop by Paweł
- [x] Store by Zephyrus
- [x] NCRPG

## XP
Wsparcie tylko i wyłącznie dla Call of Duty by Qesik (można wyłączyć, nie musi działać)

## Pomijanie misji
Możliwość udostępnienia graczom pomijania misji na dwa sposoby
- Domyślna ilość pominięć
- Kara za pominięcie misji (dany % nagrody)

**W przypadku ilości pominięć, można je dowolnie nadawać za pomocą natywu w innym pluginie. **

## Kategorie - możliwości
- Zwykła
- Uaktywnia się po skończeniu poprzedniej
- Dostępna dla VIP
- Dostępna od danej do danej godziny

Dokładny opis struktury i przykłady
```
"Nazwa_kategori"
{
	"order"		"0"		// Pierwszy rozdział
	"Nazwa misji"
	{
		"Requirements"	"ilosc"
		"Type"		"typ_misji"
		"Addition"	"dodatek_do_misji"
		"Xp"		"ilosc_xp"
		"Coins"		"ilosc_waluty"
		"block_skip"	"1"
	}
}
"Nazwa_kategori 2"
{
	"order"		"1"		// Drugi rozdział
	"Nazwa misji"
	{
		"Requirements"	"ilosc"
		"Type"		"typ_misji"
		"Addition"	"dodatek_do_misji"
		"Xp"		"ilosc_xp"
		"Coins"		"ilosc_waluty"
		"block_skip"	"1"
	}
}
"Nazwa_kategori 3"
{
	"flags"		"o"		// Kategoria dostępna dla osób z flagą o
	"Nazwa misji"
	{
		"Requirements"	"ilosc"
		"Type"		"typ_misji"
		"Addition"	"dodatek_do_misji"
		"Xp"		"ilosc_xp"
		"Coins"		"ilosc_waluty"
		"block_skip"	"1"
	}
}
"Nazwa_kategori 4"
{
	"hours"		"22-11"		// Kategoria dostępna od 22 do 11
	"Nazwa misji"
	{
		"Requirements"	"ilosc"
		"Type"		"typ_misji"
		"Addition"	"dodatek_do_misji"
		"Xp"		"ilosc_xp"
		"Coins"		"ilosc_waluty"
		"block_skip"	"1"
	}
}
"Nazwa_kategori 5"
{
	"flags"		"o"		// Kategoria dostępna dla osób z flagą o
	"hours"		"22-11"		// Kategoria dostępna od 22 do 11
	"Nazwa misji"
	{
		"Requirements"	"ilosc"
		"Type"		"typ_misji"
		"Addition"	"dodatek_do_misji"
		"Xp"		"ilosc_xp"
		"Coins"		"ilosc_waluty"
		"block_skip"	"1"
	}
}
```

## Misje - możliwości
Przykład
```
"Nazwa misji"
{
	"Requirements"	"ilosc"
	"Type"		"typ_misji"
	"Addition"	"dodatek_do_misji"
	"Xp"		"ilosc_xp"
	"Coins"		"ilosc_waluty"
	"block_skip"	"1"
}
```
1. Requirements - wymagania dla misji, czyli ilość np: zabić
2. Type - Typ misji z pliku qMissionList.txt
3. Addition - dodatek z pliku qMissionList.txt, np: nazwa mapy gdy misja ma wsparcie dla misji, albo dana broń, etc. Zgodnie z plikiem qMissionList.txt
4. Xp - ilość XP jeśli uruchomiliśmy coś takiego
5. Coins - ilość danej waluty, którą ustaliliśmy
6. block_skip - blokada pomijania misji

Nie musimy podawać tego co nam nie potrzebne, np: 
1. nie używamy XP? No to nie dodajemy po prostu przy misjach Xp.
2. Nie będziemy blokować pomijania misji? To olewamy to
Najważniejsza jest ilość do misji, typ oraz waluta, którą chcemy dodawać jako nagrodę

Oczywiście plugin wspiera mapy z WorkShop. Nie trzeba podawać jej pełnej nazwy, czyli workshop/<id>/nazwa_mapy. Wystarcza sama nazwa mapy


## Pliki konfiguracyjny
[Plik konfiguracyjny dla misji](qMission.cfg)

[Lista typów misji](qMissionList.txt)

## Wsparcie
Oferuje pełne wsparcie: https://steamcommunity.com/id/classicowiecCSC/

Jeżeli czegoś brakuje, a chciałbyś by się znalazło - DAJ ZNAĆ!
