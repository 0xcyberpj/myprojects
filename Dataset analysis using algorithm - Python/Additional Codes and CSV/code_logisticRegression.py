import os
import numpy as np
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.naive_bayes import GaussianNB
from sklearn.metrics import accuracy_score
import matplotlib.pyplot as plt
import seaborn as sns

from sklearn.linear_model import LogisticRegression

os.chdir('/home/abhi/Downloads/PredictTheCulpret/Data/')

train = pd.read_csv("criminal_train.csv") 
test = pd.read_csv("criminal_test.csv") 

x1 = train.drop('Villain', axis=1)
y1 = train['Villain']
#x2 = test.drop(['villain'], axis=1)
#y2 = test['villain']

x1_train,x1_test,y1_train,y1_test = train_test_split(x1, y1, test_size=0.99, random_state=100)

lr = LogisticRegression()
lr.fit(x1_train, y1_train)

y3_pred = lr.predict(test)
#y1_pred = lr.predict(x1_test) --> accuracy 93%

sub = pd.DataFrame({'ID': test['ID'],
                           'Villain': y3_pred
                           })
sub.to_csv("subfinallinearRegression.csv", index=False)

print('end')

