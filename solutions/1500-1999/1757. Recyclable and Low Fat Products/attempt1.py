import pandas as pd

def find_products(products: pd.DataFrame) -> pd.DataFrame:
    RLF = products[(products['low_fats'] == "Y") & (products['recyclable'] == "Y")]
    result = RLF[['product_id']]

    return result
