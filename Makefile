compile:
	gcc entropy-eater.c -o entropy-eater
	gcc entropy-watcher.c -o entropy-watcher
clean:
	rm entropy-eater
	rm entropy-watcher
