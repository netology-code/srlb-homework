upstream example_app {

	server 127.0.0.1:8888 weight=3;
        server 127.0.0.1:9999;

}
