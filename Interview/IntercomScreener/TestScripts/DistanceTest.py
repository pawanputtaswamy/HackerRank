import unittest
import math

class DistanceResult:

    def __init__(self, distance):
        self.distance = distance

    def matches(self, dist):
        return float(self.distance) == float(dist)
    
# Unit test to test calculated distance
def calcDistance(lat1, lon1, lat2, lon2):
    radius = 6371 # km

    dlat = math.radians(float(lat2)-float(lat1))
    dlon = math.radians(float(lon2)-float(lon1))
    a = math.sin(float(dlat)/2) * math.sin(float(dlat)/2) + math.cos(math.radians(float(lat1))) \
        * math.cos(math.radians(float(lat2))) * math.sin(float(dlon)/2) * math.sin(float(dlon)/2)
    c = 2 * math.atan2(math.sqrt(a), math.sqrt(1-a))
    dist = radius * c

    return dist

class IsDistanceMatchTests(unittest.TestCase):

    def testEqual(self):
        p = DistanceResult(38.03426888796992)
        dublinLat = float(53.3381985)
        dublinLon = float(-6.2592576)
        self.failUnless(p.matches(calcDistance(dublinLat, dublinLon, 53.008769, -6.1056711)))
        #self.assertEqual(calcDistance(dublinLat, dublinLon, 53.008769, -6.1056711), x)

    def testNotEqual(self):
        p = DistanceResult(39.03426888796992)
        dublinLat = float(53.3381985)
        dublinLon = float(-6.2592576)
        self.failUnless(p.matches(calcDistance(dublinLat, dublinLon, 53.008769, -6.1056711)))
        
def main():
    unittest.main()

if __name__ == '__main__':
    main()
