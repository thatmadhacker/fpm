pkgname='fpm'
pkgver=1
pkgrel=1
pkgdesc="AUR build helper"
arch=('any')
license=('unknown')
source=('https://github.com/thatmadhacker/${pkgname}/')
sha1sums=('SKIP')

build() {

cd "$pkgname"

./compile

}

package() {

cd "$pkgname"
mkdir -p $pkgdir/usr/bin
install -D -m755 fpm $pkgdir/usr/bin/$pkgname

}
