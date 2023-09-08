#ifndef ITER_HPP
# define ITER_HPP

template<typename Addr, typename Func>
void iter(Addr *addr, int len, Func func) {
	for (int i = 0; i < len; i++) {
		func(addr[i]);
	}
}

#endif
