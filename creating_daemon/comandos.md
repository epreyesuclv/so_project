# 1

cp checkmem.service /etc/systemd/system/checkmem.service

# 2

sudo chmod +x ./util

# 3

systemctl daemon-reload

# 4

sytemctl start checkmem.service

# Para que se inicie con el sitema
systemctl enable checkmem.service

# Para ver desde el journal
journalclt -u checkmem.service