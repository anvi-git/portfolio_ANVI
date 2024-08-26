# Dati
import numpy as np

# Input
GOV = 0
NOGOV = 1
#stato = NOGOV
stato = GOV
valore_nominale = 1000  # Euro
prezzo_acquisto = 99.85  # Eur
importo_investito = (valore_nominale * prezzo_acquisto) / 100 # Euro
percentuale_interesse = 0.034 # in percentuale
if (stato == GOV):
  tassazione_interessi = 0.125
elif (stato == NOGOV):
  tassazione_interessi = 0.26
periodicità = (1/12) * 12 # - semestrale
            #(1/12)*12 # - annuale
            # (3/12) * 12 - quadrimestrale
            # (4/12) * 12 - trimestrale
anno_scadenza = 2024
anno_sottoscrizione = 2024
durata = anno_scadenza - anno_sottoscrizione # Numero di anni fino alla scadenza
interesse_totale = 0

# Numero di obbligazioni acquistate
for i in range(1,durata+1):
  interesse = (percentuale_interesse * valore_nominale) / periodicità
  interesse_netto = interesse * (1 - tassazione_interessi)
  interesse_totale += interesse_netto * periodicità
  

# Guadagno di capitale alla scadenza
saldo_finale = valore_nominale + (valore_nominale - importo_investito) + interesse_totale
guadagno_netto = saldo_finale - importo_investito

saldo_finale
print("importo investito = ", importo_investito , "euro")
print("saldo finale = ", saldo_finale, " euro")
print("guadagno finale = ", guadagno_netto, " euro")
print("rendimento percentuale = ", guadagno_netto/importo_investito*100, "%")
print("rendimento annuale = ", guadagno_netto/(importo_investito*durata)*100, "%")