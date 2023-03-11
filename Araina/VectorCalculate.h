#include <iostream>
#include <vector>
#include <cmath>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

float dotProduct(vector<float> x, vector<float> y){
	int sum = 0;
	for(unsigned int i = 0; i < x.size() ; i++) sum += (x.at(i)*y.at(i));	
	return sum;
}

string cross_vector(vector<float> vec1, vector<float> vec2) {
    int dim = vec1.size(); // get dimension of vectors
    string resultcross = "";
    // check if both vectors have same dimension and it is either 2 or 3
    if (dim != vec2.size() || (dim != 2 && dim != 3)) {
        cout << "Error: Vectors must have the same dimension and it must be 2 or 3." << endl;
        return resultcross;
    }

    // calculate cross product
    vector<float> cross(dim);

    if (dim == 2) { // 2D cross product
        cross[0] = 0;
        cross[1] = vec1[0] * vec2[1] - vec1[1] * vec2[0];
        resultcross = ':' + to_string(cross[0]) + ", " + to_string(cross[1]);
    }
    else { // 3D cross product
        cross[0] = vec1[1] * vec2[2] - vec1[2] * vec2[1];
        cross[1] = vec1[2] * vec2[0] - vec1[0] * vec2[2];
        cross[2] = vec1[0] * vec2[1] - vec1[1] * vec2[0];
        resultcross = ':' + to_string(cross[0]) + ", " + to_string(cross[1]) + ", " + to_string(cross[2]);
    }
    
    
    return resultcross;
}

vector<float> projection_vector(vector<float> v1, vector<float> v2) {
    
    /*proj v->u =   (u dot v) / sizeof v^2 * vector v */

    int n = v1.size(); // dimension of vectors

    // Compute the dot product of v1 and v2
    float dot_product = 0;
    for (int i = 0; i < n; i++) {
        dot_product += v1[i] * v2[i];
    }

    // Compute the sizeof v^2
    float mag_v2_squared = 0;
    for (int i = 0; i < n; i++) {
        mag_v2_squared += v2[i] * v2[i];
    }

    // Compute the projection vector
    vector<float> projection_vector(n);
    for (int i = 0; i < n; i++) {
        projection_vector[i] = (dot_product / mag_v2_squared) * v2[i];
    }

    return projection_vector;
}

float angleBetweenvectors(vector<float> vec1, vector<float> vec2) {
    
    /* angle v->u =   (u dot v) = sizeof u * sizeof v * costheta */
    
    int dim = vec1.size();

    // check if both vectors have same dimension and it is either 2 or 3
    if (dim != vec2.size() || (dim != 2 && dim != 3)) {
        cerr << "Error: Vectors must have the same dimension and it must be 2 or 3." << endl;
        return -1;
    }

    // calculate angle
    float dot = 0;
    for (int i = 0; i < dim; i++) {
        dot += vec1[i] * vec2[i];
    }

    float magnitude1 = 0;
    for (int i =0 ; i < dim ;i++) {
        magnitude1 += vec1[i] * vec1[i];
    }
    magnitude1 = sqrt(magnitude1);

    float magnitude2 = 0;
    for (int j =0 ; j < dim ;j++) {
        magnitude2 += vec2[j] * vec2[j];
    }
    magnitude2 = sqrt(magnitude2);

    float cos_theta = dot / (magnitude1 * magnitude2);
    float theta = acos(cos_theta);

    theta *= (180 / (22/7));
    return theta;
}
