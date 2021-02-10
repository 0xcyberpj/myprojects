import os
import numpy as np
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.naive_bayes import GaussianNB
from sklearn.metrics import accuracy_score
import matplotlib.pyplot as plt
import seaborn as sns

from sklearn.ensemble import RandomForestRegressor

os.chdir('/home/abhi/Downloads/PredictTheCulpret/Data/')

train = pd.read_csv("criminal_train.csv") 
test = pd.read_csv("criminal_test.csv") 

x1 = train.drop('Villain', axis=1)
y1 = train['Villain']
#x2 = test.drop(['villain'], axis=1)
#y2 = test['villain']

x1_train,x1_test,y1_train,y1_test = train_test_split(x1, y1, test_size=0.99, random_state=100)

rf = RandomForestRegressor(n_estimators = 5000, random_state = 54)# Train the model on training data

rf.fit(x1_train, y1_train)


y4_pred = rf.predict(test)

sub = pd.DataFrame({'ID': test['ID'],'Villain': y4_pred.round() })
sub.to_csv("submission.csv", index=False)


print('end')
