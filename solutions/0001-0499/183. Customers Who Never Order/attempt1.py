import pandas as pd

def find_customers(customers: pd.DataFrame, orders: pd.DataFrame) -> pd.DataFrame:
    merge = customers.merge(orders, left_on='id', right_on='customerId', how='left')
    result = merge[merge['customerId'].isna()][['name']].rename(columns={'name': 'Customers'})
    return result
