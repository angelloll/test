
#ifndef sodium_H
#define sodium_H

#include "../libmultihash/windows/include/libsodium/sodium/version.h"

#include "../libmultihash/windows/include/libsodium/sodium/core.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_aead_aes256gcm.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_aead_chacha20poly1305.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_aead_xchacha20poly1305.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_auth.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_auth_hmacsha256.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_auth_hmacsha512.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_auth_hmacsha512256.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_box.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_box_curve25519xsalsa20poly1305.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_core_hsalsa20.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_core_hchacha20.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_core_salsa20.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_core_salsa2012.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_core_salsa208.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_generichash.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_generichash_blake2b.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_hash.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_hash_sha256.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_hash_sha512.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_kdf.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_kdf_blake2b.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_kx.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_onetimeauth.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_onetimeauth_poly1305.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_pwhash.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_pwhash_argon2i.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_scalarmult.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_scalarmult_curve25519.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_secretbox.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_secretbox_xsalsa20poly1305.h"
//#include "../libmultihash/windows/include/libsodium/sodium/crypto_secretstream_xchacha20poly1305.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_shorthash.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_shorthash_siphash24.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_sign.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_sign_ed25519.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_stream.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_stream_chacha20.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_stream_salsa20.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_stream_xsalsa20.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_verify_16.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_verify_32.h"
#include "../libmultihash/windows/include/libsodium/sodium/crypto_verify_64.h"
#include "../libmultihash/windows/include/libsodium/sodium/randombytes.h"
//#include "../libmultihash/windows/include/libsodium/sodium/randombytes_internal_random.h"
#include "../libmultihash/windows/include/libsodium/sodium/randombytes_sysrandom.h"
#include "../libmultihash/windows/include/libsodium/sodium/runtime.h"
#include "../libmultihash/windows/include/libsodium/sodium/utils.h"

#ifndef SODIUM_LIBRARY_MINIMAL
# include "../libmultihash/windows/include/libsodium/sodium/crypto_box_curve25519xchacha20poly1305.h"
//# include "../libmultihash/windows/include/libsodium/sodium/crypto_core_ed25519.h"
//# include "../libmultihash/windows/include/libsodium/sodium/crypto_core_ristretto255.h"
//# include "../libmultihash/windows/include/libsodium/sodium/crypto_scalarmult_ed25519.h"
//# include "../libmultihash/windows/include/libsodium/sodium/crypto_scalarmult_ristretto255.h"
# include "../libmultihash/windows/include/libsodium/sodium/crypto_secretbox_xchacha20poly1305.h"
# include "../libmultihash/windows/include/libsodium/sodium/crypto_pwhash_scryptsalsa208sha256.h"
# include "../libmultihash/windows/include/libsodium/sodium/crypto_stream_salsa2012.h"
# include "../libmultihash/windows/include/libsodium/sodium/crypto_stream_salsa208.h"
# include "../libmultihash/windows/include/libsodium/sodium/crypto_stream_xchacha20.h"
#endif

#endif
