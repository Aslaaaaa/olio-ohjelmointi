# Kahviautomaatti

Kahviautomaatti on laite, joka valmistaa käyttäjälle kahvia. Automaatissa on tietty määrä vettä ja kahvipapuja. Käyttäjä voi valita haluamnsa kahvityypin, esimerkiksi tavallisen kahvin tai espresson.

Automaatilla on seuraavat ominaisuudet:

- Vesisäiliön tilavuus ja senhetkinen vesimäärä.
- Kahvipapusäiliön kapasiteetti ja senhetkinen papujen määrä.
- Valmistettujen kahviannosten lukumäärä.
- Automaatin tila (oäälllä tai pois päältä)

Automaatilla voidaan suorittaa seuraavia toimitoja:

- Käynnistää ja samuttaa automaatti.
- Lisätä vettä vesisäiliöön.
- Valmistaa kahviannos, jos vettä ja kahvipapuja on riittävästi.
- Näyttää automaatin tämänhetkiset tiedot.
- Palauttaa tieto siitä, kuinka monta kahviannosta automaatilla on valmistettu.

Kahvin valmistaminen kuluttaa vettä ja kahvipapuja. Jos automaatissa ei ole riittävästi raaka-aineita tai automaatti ei ole päällä, kahvia ei voi valmistaa.

## Luokkakaavio CoffeeMaker luokalle

```mermaid
classDiagram
    class CoffeeMaker {
        - float v_tilavuus
        - float v_maara
        - float papu_kapasiteetti
        - float papu_maara
        - int valmistetut
        - bool tila

        +CoffeeMaker(float vt, float pk)
        +start() void
        +stop() void
        +lisaaVetta(float vm) void
        +lisaaPapuja(float pa) void
        +makeCoffee() void
        +showStatus() void
        +showMade() void
        }
```