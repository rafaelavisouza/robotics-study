#!/bin/bash

# Define a data e hora atual para o log
TIMESTAMP=$(date +"%Y-%m-%d_%H-%M-%S")
LOG_FILE="experiment_$TIMESTAMP.log"

echo "Iniciando experimento em: $(date)" | tee -a "$LOG_FILE"

# Loop para criar as pastas de teste_1 a teste_5
for i in {1..5}
do
    FOLDER_NAME="teste_$i"
    
    # Cria a pasta se não existir
    if [ ! -d "$FOLDER_NAME" ]; then
        mkdir "$FOLDER_NAME"
        echo "[$TIMESTAMP] Pasta $FOLDER_NAME criada com sucesso." | tee -a "$LOG_FILE"
    else
        echo "[$TIMESTAMP] Pasta $FOLDER_NAME já existe. Pulando..." | tee -a "$LOG_FILE"
    fi
done

echo "Processo finalizado em: $(date)" | tee -a "$LOG_FILE"
