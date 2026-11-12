pipeline {
    agent {
        docker {
            image 'gcc:latest'
        }
    }
    stages {
        stage('Configuration') {
            steps {
                sh 'cmake -B build -S .'
            }
        }
        stage('Compilation') {
            steps {
                sh 'cmake --build build'
            }
        }
        stage('Tests') {
            steps {
                sh 'ctest --test-dir build --output-on-failure'
            }
        }
    }
}