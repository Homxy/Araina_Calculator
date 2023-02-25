#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

float dot_vector(vector<float> v1, vector<float> v2) {

    /* dot v->u =   u1v1+u2v2+u3v3 */

    float result = 0;
    int dim = v1.size();

    for (int i = 0; i < dim; i++) {
    result += v1[i] * v2[i];
    }

    return result;
}