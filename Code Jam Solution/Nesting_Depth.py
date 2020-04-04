
#taking test input
test=int(input())
dict = {'1':1,'2':2,'3':3,'4':4,'5':5,'6':6,'7':7,'8':8,'9':9,'0':0}
case=1
while test:
    query=""
    #converting string to list
    t=list(input())
    #forming array
    a=[0]*len(t)
    
    # temporary variable
    var=0

    #iterating loop
    for f in range(len(t)):
        #coverting string to number
        a[f] = dict[t[f]]-dict['0']
    
    #iterating loop
    for b in range(len(t)):
        #checking diff
        diff=abs(a[b]-var)

        # if condition
        if a[b]>var:
            while diff:
                #adding left paranthesis
                query += "(" 
                diff -= 1

        # Again if condition
        if a[b]<var:
            while(diff):

                #adding right paranthesis
                query += ")"
                diff -= 1

        #assigning to var 
        var = a[b]
        query += str(var) #concat to query
    
    # final query
    while(var):
        query += ")"
        var -= 1
    print("Case #{}:".format(case),query)
    case+=1
    test-=1