import os

class Config(object):
    """ Parent configuration class."""

    DEBUG = False
    CSRF_ENABLED = True
    SECRET = os.getenv('SECRET')
    SQLALCHEMY_DATABASE_URI = os.getenv('DATABASE_URL')
    JSONIFY_PRETTYPRINT_REGULAR = False

class DevelopmentConfig(Config):
    """ Development configuration."""
    DEBUD = True

class TestingConfig(Config):
    """ Testing configuration class."""
    TESTING = True
    SQLALCHEMY_DATABASE_URI = 'mysql://localhost/test_db'
    DEBUT = True

class StagingConfig(Config):
    """Staging configuration class"""
    DEBUG = True

class ProductionConfig(Config):
    """ Production configuration class. """
    DEBUG = False
    TESTING = False

app_config = {
    'development' : DevelopmentConfig,
    'testing' : TestingConfig,
    'staging' : StagingConfig,
    'production' : ProductionConfig
}

if __name__ == '__main__':

    print(app_config['development'].SQLALCHEMY_DATABASE_URI)
