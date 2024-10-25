#include <iostream>
#include <vector>
#include <list>
#include <set>


std::list<int> initList(int n) {
	std::list<int> a;
	for (int i = 1; i <= n; i++) {
		a.push_back(i);
	}
	return a;
}

void Display(std::list<int> &a) {
	std::list<int>::iterator it;
	for( it = a.begin(); it != a.end(); it++) {
		std::cout << *it << " ";
	}

	std::cout << std::endl;
}

void Display(std::list<std::string> &a) {
	std::list<std::string>::iterator it;
	for( it = a.begin(); it != a.end(); it++) {
		std::cout << *it << " ";
	}	
	std::cout << std::endl;
}

void Display(std::set<int> &a) {
	std::set<int>::iterator it;
	
	for (it = a.begin(); it != a.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void Display(std::vector<int> &a) {
	for(int i = 0; i < a.size(); i++) {
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
}


int sumOfFirstAndLastElement(std::list<int> &linkedList)
{
   int sum = 0;
   if(linkedList.empty()) {
    return -1;
   } else if(linkedList.size() == 1) {
    return linkedList.front();
   } else {
    return linkedList.front() + linkedList.back();
   }
}

std::list<int> changeValue(std::list<int> &l, int k, int x) {
	std::list<int>::iterator it = l.begin();
    advance(it,k - 1); // dich con tro k lan
    *it = x;
    return l;
}

std::list<int> eraseValue(std::list<int> &l, int first, int last) {
	std::list<int>::iterator it = l.begin();
    advance(it, first - 1); // do bat dau tu 0 nen phan tu co stt first o vtri first - 1
    std::list<int>::iterator it2 = l.begin();
    advance(it2, last);
    l.erase(it, it2); // xoa phan tu tu it den it2 - 1
    return l;
}


int sumOfAllElements(std::list<int> &linkedList)
{
    int sum = 0;
    std::list<int>::iterator it ;
	for(it = linkedList.begin(); it != linkedList.end(); it++ ) {
        sum += *it;
    }   
    return sum;
}

std::list<int> initList1(int n)
{
	std::list<int> res;
    for (int i = n; i >= 1; i--) {
		res.push_front(i);
	}
	return res;
}


std::list<int> removeElements(std::list<int> &linkedList, int n) {
    std::list<int>::iterator it1;
    for (it1 = linkedList.begin(); it1 != linkedList.end(); it1 ++) {
        if( *it1 >= n) {
        	it1 = linkedList.erase(it1);
        	it1--;
        }
        
    }


    // list<int>::iterator i = linkedList.begin(), j;
    // for (; i != linkedList.end(); i++) {
    //    if (*i >= n) {
    //        j = i;
    //        i--;
    //        linkedList.erase(j);
    //    }
    //}

    return linkedList;
}

std::list<int> sortLinkedList(std::list<int> &l) {
    std::list<int>::iterator i,j;
    for (i = l.begin(); i != l.end(); i++) {
        for (j = i; i != l.end() && j != l.end(); j++) {
            if(*i > *j) {
                int temp = *i;
                *i = *j;
                *j = temp;
            }
        }
    }

    //l.sort();
    return l;
}


struct cmp { 
	bool operator() (int a, int b) { return a > b;}
};

int differentNumbers(std::vector<int> &inputVector ) {
		std::set<int> s;
		for( int i = 0; i < inputVector.size(); i++) {
	        s.insert(inputVector[i]);
	    }
		return s.size();	
	}


std::vector<std::vector<int> > uniqueRows(std::vector<std::vector<int> > matrix)
{
    std::set<std::vector<int> > s;
    std::vector<std::vector<int> > result;

    for (std::vector<std::vector<int> >::iterator it = matrix.begin(); it != matrix.end(); it++) {
        if(!s.count(*it)) {
            s.insert(*it);
            result.push_back(*it);
        }
    }
    return result;
}

std::string secondOrder(std::vector<int> arr)
{
    std::set<int> s;
    for(int i = 0; i < arr.size(); i++) {
        s.insert(arr[i]);
    }
    //std::set<int> s(arr.begin(), arr.end());
    std::set<int>::iterator it = s.begin();
    advance(it, 1);
    if(s.size() > 1) {
        return std::to_string(*it);
    } else {
        return "NO";
    }
}

std::vector<int> setFunction(std::vector<int> arr, int k)
{
    int m,n;
    std::set<int> result1, result2;
    std::set<int> s(arr.begin(), arr.end());
    std::set<int>:: iterator it;
    for (it = s.begin(); it != s.end(); it++) {
    	if( *it > k)
    	result1.insert(*it);
    }
    for (it = s.begin(); it != s.end(); it++) {
    	if( *it >= k)
    	result2.insert(*it);
    }

    if(result1.empty()){
    	m =  -1;
    } else {
    	it = result1.begin();
	    m = *it;

    }
    
   	if(result2.empty()){
    	n =  -1;
    } else {
    	it = result2.begin();
	    n = *it;

    }

    std::vector<int> result;
    result.push_back(m);
    result.push_back(n);
    return result;
}

int verifyFunction(std::vector<int> v)
{
	std::list<int> l(v.begin(), v.end());
	return sumOfFirstAndLastElement(l);
}

int main(int argc, char *argv[]) {
	
	std::list<int> a = initList(5);
	Display(a);

	std::list<std::string> b(3, "hehe");
	Display(b);

	std::vector<int> c(1,1);
	std::cout << verifyFunction(c) << std::endl;

	changeValue(a,3,9);
	Display(a);

	std::cout << sumOfAllElements(a) << std::endl;

	std::list<int> d = initList1(9);
	Display(d);

	removeElements(d, 4);
	Display(d);

	a.sort();
	Display(a);

	// std::list<int>::iterator it = a.begin();
	// std::cout << *it << std::endl;

	
	std::set<int,cmp> s;
	s.insert(1);
	s.insert(4);
	for(std::set<int>::iterator it = s.begin(); it != s.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	std::vector<int> e(10,3);
	e.push_back(2);
	e.push_back(1);
	e.push_back(5);
	std::cout << differentNumbers(e) << std::endl;

	std::vector< std::vector<int> > f(10,e);
	uniqueRows(f);
	

	std::vector<int> result = setFunction(e,3);
	Display(result);


	return 0;
}