import pandas as pd

def find_patients(patients: pd.DataFrame) -> pd.DataFrame:
    mask = patients['conditions'].str.contains('^DIAB1|\sDIAB1')
    return patients[mask]
