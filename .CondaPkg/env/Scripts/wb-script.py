#!C:\Users\menar\.julia\dev\FiatLux\.CondaPkg\env\python.exe
# -*- coding: utf-8 -*-
import re
import sys

from wandb.cli.cli import cli

if __name__ == '__main__':
    sys.argv[0] = re.sub(r'(-script\.pyw?|\.exe)?$', '', sys.argv[0])
    sys.exit(cli())
