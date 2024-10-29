import json

with open('faturamento.json') as file:
    dados = json.load(file)

faturamento_dias = [item["valor"] for item in dados if item["valor"] > 0]

menor_faturamento = min(faturamento_dias)
maior_faturamento = max(faturamento_dias)

media_mensal = sum(faturamento_dias) / len(faturamento_dias)

dias_acima_da_media = sum(1 for faturamento in faturamento_dias if faturamento > media_mensal)

print("Menor faturamento diário:", menor_faturamento)
print("Maior faturamento diário:", maior_faturamento)
print("Número de dias com faturamento acima da média mensal:", dias_acima_da_media)
