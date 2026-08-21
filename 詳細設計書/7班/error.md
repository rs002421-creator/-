- エラーコード

|エラーコード|メッセージ|機能名|
|:---|:---|:---|
|ERR_NON_SEARCH_WORD|検索内容を入力してください|利用者用蔵書検索<br>スタッフ用蔵書検索|
|ERR_OVER_RANGE|100文字を超えた入力はできません|利用者用蔵書検索<br>スタッフ用蔵書検索|
|ERR_NON_INPUT_USER|利用者が入力されていません|貸出申請|
|ERR_NON_SEARCH_RESERVE|予約を検索してください|予約取り消し|
|ERR_NON_BOOK_INFO|蔵書の情報が入力されていません|貸出申請<br>返却申請|
|ERR_INVALID_ID|正しいIDを入力してください|スタッフログイン|
|ERR_INPUT_ALL|すべての項目に入力をしてください|蔵書登録|
|ERR_INPUT_RANGE|文字数制限以上の入力がされています|蔵書登録、利用者登録|
|ERR_NON_INPUT|未入力の項目があります|利用者登録、スタッフ登録|
|ERR_ALREADY_REGISTER|この利用者は既に登録されています|利用者登録、スタッフ登録|
|ERR_FAILURE_INPUT|読み込みに失敗しました|利用者退会|
|ERR_NON_USER_ID|利用者IDを入力してください|予約検索<br>予約申請<br>利用者退会|
|ERR_HAS_RESERVE_BOOK|すでに蔵書を予約しています|予約申請|
|ERR_HAS_BORROW_BOOK|この利用者には貸出中の蔵書が存在します|利用者退会|
|ERR_NON_STAFF_ID|スタッフIDを入力してください|スタッフ退会|
|ERR_DIFFERENT_USER|利用者が一致しません|貸出処理|
|ERR_NON_RESERVE|予約がありません|予約検索|

- バーコード読み込み時のエラーコード

|エラーコード|メッセージ|機能名|
|:---|:---|:---|
|ERR_INPUT_BARCODE|バーコードの読み込みに失敗しました|予約申請<br>予約検索<br>利用者退会<br>貸出申請<br>返却申請|
|ERR_USER_BARCODE|利用者カードのバーコードを読み込んでください|予約申請<br>予約検索<br>利用者退会|
|ERR_NON_EXIST_USER|この利用者は存在しません|予約申請<br>予約検索<br>利用者退会|
|ERR_BARCODE|利用者カードまたは蔵書のバーコードを読み込んでください|貸出申請|
|ERR_NON_EXIST|この利用者、または蔵書は存在しません|貸出申請|
|ERR_ALREADY_BORROW|この蔵書は貸出中です|貸出申請|
|ERR_BORROW_LIMIT|貸出上限に達しています|貸出申請|
|ERR_BOOK_BARCODE|蔵書のバーコードを読み込んでください|返却申請|
|ERR_NON_EXIST_BOOK|この蔵書は存在しません|返却申請|