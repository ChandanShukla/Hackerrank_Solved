from collections import OrderedDict
 
def merge_the_tools(string, k):
    chunks = [string[i:i+k] for i in range(0, len(string), k)]
    for chunk in chunks:
        print ("".join(OrderedDict.fromkeys(chunk)))