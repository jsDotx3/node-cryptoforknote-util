#pragma once

#define CURRENT_TRANSACTION_VERSION 1

enum BLOB_TYPE {
  BLOB_TYPE_CRYPTONOTE         = 0,
  BLOB_TYPE_FORKNOTE1          = 1,
  BLOB_TYPE_FORKNOTE2          = 2,
  BLOB_TYPE_CRYPTONOTE2        = 3, // Masari
  BLOB_TYPE_CRYPTONOTE_RYO     = 4, // Ryo
  BLOB_TYPE_CRYPTONOTE_LOKI    = 5, // Loki
  BLOB_TYPE_CRYPTONOTE3        = 6, // Masari
  BLOB_TYPE_AEON               = 7, // Aeon
  BLOB_TYPE_CRYPTONOTE_CUCKOO8 = 8, // MoneroV / Swap
  BLOB_TYPE_CRYPTONOTE_CUCKOO  = 9, // XTNC
};
