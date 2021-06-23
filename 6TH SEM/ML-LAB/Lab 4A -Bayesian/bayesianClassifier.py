# To add a new cell, type '# %%'
# To add a new markdown cell, type '# %% [markdown]'
# %%
import csv
from pgmpy.inference import VariableElimination
from pgmpy.models import BayesianModel
from pgmpy.estimators import MaximumLikelihoodEstimator
import pandas as pd
import numpy as np
from IPython import get_ipython

# %%
get_ipython().system('pip install pgmpy ')


# %%


# %%
heartDisease = pd.read_csv('heart.csv')
heartDisease = heartDisease.replace('?', np.nan)

print('Sample instances from the dataset are given below')
print(heartDisease.head())

print('\n Attributes and datatypes')
print(heartDisease.dtypes)

model = BayesianModel([('age', 'heartdisease'), ('sex', 'heartdisease'), ('exang', 'heartdisease'),
                       ('cp', 'heartdisease'), ('heartdisease', 'restecg'), ('heartdisease', 'chol')])
print('\nLearning CPD using Maximum likelihood estimators')
model.fit(heartDisease, estimator=MaximumLikelihoodEstimator)

print('\n Inferencing with Bayesian Network:')
HeartDiseasetest_infer = VariableElimination(model)

print('\n 1. Probability of HeartDisease given evidence= restecg')
q1 = HeartDiseasetest_infer.query(
    variables=['heartdisease'], evidence={'restecg': 1})
print(q1)

print('\n 2. Probability of HeartDisease given evidence= cp ')
q2 = HeartDiseasetest_infer.query(
    variables=['heartdisease'], evidence={'cp': 2})
print(q2)
