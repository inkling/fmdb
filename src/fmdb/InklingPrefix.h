//
//  InklingPrefix.h
//  fmdb
//
//  Created by William Green on 2015-04-10.
//
//

// Redefines _every_ symbol in FMDB
// ================================
//
// To avoid dependency collisions and duplicate symbol errors, the symbols in FMDB
// are redefined here. By redefining every symbol with an extra prefix, two copies
// of FMDB can be linked in one app.
//
// Note: if any symbols are added FMDB in updates, those symbol _must_ also be
//       refined (using this file if possible).

#define FMDatabase      INKFMDatabase
#define FMStatement     INKFMStatement
#define FMDBBlockSQLiteCallBackFunction INKFMDBBlockSQLiteCallBackFunction
#define FMResultSet     INKFMResultSet
#define FMDatabaseQueue INKFMDatabaseQueue
#define FMDatabasePool  INKFMDatabasePool

