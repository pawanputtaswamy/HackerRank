import os.path
import math
import ast

# Calculate distance between latitude and longitude
def calcDistance(lat1, lon1, lat2, lon2):
    radius = 6371 # km

    dlat = math.radians(float(lat2)-float(lat1))
    dlon = math.radians(float(lon2)-float(lon1))
    a = math.sin(float(dlat)/2) * math.sin(float(dlat)/2) + math.cos(math.radians(float(lat1))) \
        * math.cos(math.radians(float(lat2))) * math.sin(float(dlon)/2) * math.sin(float(dlon)/2)
    c = 2 * math.atan2(math.sqrt(a), math.sqrt(1-a))
    dist = radius * c

    return dist

# Read customers data from the customers.txt file
def readFile(filePath):
    arr = []
    with open(filePath) as f:
        for line in f:
            dic = {}
            # Convert the string data to dictonary data
            dic = ast.literal_eval(line)
            arr.append(dic)
    return arr

    
def main():

    filePath = "customers.txt"
    
    if os.path.exists(filePath):
        # read customer records from file
        customerRecords = readFile(filePath)

        # Dublin office coordinates (Longitude and Latitude)
        dublinLat = float(53.3381985)
        dublinLon = float(-6.2592576)

        resCustomers = {}

        # for each customer with in 100 km from Dublin office get the customer name and user id
        for customer in customerRecords:
            distCustDublin = calcDistance(dublinLat, dublinLon, customer['latitude'], customer['longitude'])
            #print "%s\t%s\t%s\t%s" % (distCustDublin,customer['user_id'], customer['latitude'], customer['longitude'])
            # get all the customers who are with in 100 KM from Dublin office
            if (distCustDublin < 100):
                resCustomers[customer['user_id']] = customer['name']

        print "User ID\t\tCustomer Name"
        print "-------\t\t----------------"

        # Sort the customers according to their user names
        for key in sorted(resCustomers):
          print "%s\t\t%s" % (key, resCustomers[key])
    else:
        print "Please provide a valid file path"

  
if __name__ == "__main__":
    main()
