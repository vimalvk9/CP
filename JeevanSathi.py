import requests
from bs4 import BeautifulSoup as BS

url = 'https://www.jeevansathi.com/matrimonials/maharashtra-matrimonial/'
agent = {"User-Agent":'Mozilla/5.0 (Windows NT 6.3; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/59.0.3071.115 Safari/537.36'}
page = requests.get(url, headers=agent)
soup=BS(page.content, 'lxml')

obj=soup.findAll('div', attrs = {'class':'bg-white'})

print(obj)