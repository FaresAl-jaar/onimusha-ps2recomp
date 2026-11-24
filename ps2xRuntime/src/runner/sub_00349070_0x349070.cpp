#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00349070
// Address: 0x349070 - 0x34924c
void sub_00349070_0x349070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349070_0x349070");
#endif

    switch (ctx->pc) {
        case 0x3491d8u: goto label_3491d8;
        default: break;
    }

    ctx->pc = 0x349070u;

    // 0x349070: 0xa085005f  sb          $a1, 0x5F($a0)
    ctx->pc = 0x349070u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 95), (uint8_t)GPR_U32(ctx, 5));
    // 0x349074: 0x3c070065  lui         $a3, 0x65
    ctx->pc = 0x349074u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)101 << 16));
    // 0x349078: 0x240505dc  addiu       $a1, $zero, 0x5DC
    ctx->pc = 0x349078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    // 0x34907c: 0x24030500  addiu       $v1, $zero, 0x500
    ctx->pc = 0x34907cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x349080: 0xa485003e  sh          $a1, 0x3E($a0)
    ctx->pc = 0x349080u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 62), (uint16_t)GPR_U32(ctx, 5));
    // 0x349084: 0x240c0008  addiu       $t4, $zero, 0x8
    ctx->pc = 0x349084u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x349088: 0xa4850002  sh          $a1, 0x2($a0)
    ctx->pc = 0x349088u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x34908c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x34908cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349090: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x349090u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x349094: 0x340affff  ori         $t2, $zero, 0xFFFF
    ctx->pc = 0x349094u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x349098: 0xa4830008  sh          $v1, 0x8($a0)
    ctx->pc = 0x349098u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x34909c: 0x3c090001  lui         $t1, 0x1
    ctx->pc = 0x34909cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1 << 16));
    // 0x3490a0: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x3490a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x3490a4: 0x3c080800  lui         $t0, 0x800
    ctx->pc = 0x3490a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2048 << 16));
    // 0x3490a8: 0xa483000c  sh          $v1, 0xC($a0)
    ctx->pc = 0x3490a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x3490ac: 0x24e77a60  addiu       $a3, $a3, 0x7A60
    ctx->pc = 0x3490acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 31328));
    // 0x3490b0: 0xa483000a  sh          $v1, 0xA($a0)
    ctx->pc = 0x3490b0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x3490b4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3490b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3490b8: 0xa08c0042  sb          $t4, 0x42($a0)
    ctx->pc = 0x3490b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 66), (uint8_t)GPR_U32(ctx, 12));
    // 0x3490bc: 0x27a30000  addiu       $v1, $sp, 0x0
    ctx->pc = 0x3490bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x3490c0: 0xa08c0041  sb          $t4, 0x41($a0)
    ctx->pc = 0x3490c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 65), (uint8_t)GPR_U32(ctx, 12));
    // 0x3490c4: 0x2406ffc0  addiu       $a2, $zero, -0x40
    ctx->pc = 0x3490c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x3490c8: 0xa08c0040  sb          $t4, 0x40($a0)
    ctx->pc = 0x3490c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 12));
    // 0x3490cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3490ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3490d0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x3490d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x3490d4: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x3490d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x3490d8: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x3490d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x3490dc: 0xa0800039  sb          $zero, 0x39($a0)
    ctx->pc = 0x3490dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 57), (uint8_t)GPR_U32(ctx, 0));
    // 0x3490e0: 0xa080003a  sb          $zero, 0x3A($a0)
    ctx->pc = 0x3490e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 58), (uint8_t)GPR_U32(ctx, 0));
    // 0x3490e4: 0xa08b0004  sb          $t3, 0x4($a0)
    ctx->pc = 0x3490e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 11));
    // 0x3490e8: 0xac8b0020  sw          $t3, 0x20($a0)
    ctx->pc = 0x3490e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 11));
    // 0x3490ec: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x3490ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x3490f0: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x3490f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x3490f4: 0xa0800043  sb          $zero, 0x43($a0)
    ctx->pc = 0x3490f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 67), (uint8_t)GPR_U32(ctx, 0));
    // 0x3490f8: 0xa080005c  sb          $zero, 0x5C($a0)
    ctx->pc = 0x3490f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 92), (uint8_t)GPR_U32(ctx, 0));
    // 0x3490fc: 0xa48a0044  sh          $t2, 0x44($a0)
    ctx->pc = 0x3490fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 68), (uint16_t)GPR_U32(ctx, 10));
    // 0x349100: 0xa48a004e  sh          $t2, 0x4E($a0)
    ctx->pc = 0x349100u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 78), (uint16_t)GPR_U32(ctx, 10));
    // 0x349104: 0xa48a0046  sh          $t2, 0x46($a0)
    ctx->pc = 0x349104u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 10));
    // 0x349108: 0xa48a0050  sh          $t2, 0x50($a0)
    ctx->pc = 0x349108u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 80), (uint16_t)GPR_U32(ctx, 10));
    // 0x34910c: 0xa48a0048  sh          $t2, 0x48($a0)
    ctx->pc = 0x34910cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 72), (uint16_t)GPR_U32(ctx, 10));
    // 0x349110: 0xa48a0052  sh          $t2, 0x52($a0)
    ctx->pc = 0x349110u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 82), (uint16_t)GPR_U32(ctx, 10));
    // 0x349114: 0xa48a004a  sh          $t2, 0x4A($a0)
    ctx->pc = 0x349114u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 74), (uint16_t)GPR_U32(ctx, 10));
    // 0x349118: 0xa48a0054  sh          $t2, 0x54($a0)
    ctx->pc = 0x349118u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 84), (uint16_t)GPR_U32(ctx, 10));
    // 0x34911c: 0xa48a004c  sh          $t2, 0x4C($a0)
    ctx->pc = 0x34911cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 76), (uint16_t)GPR_U32(ctx, 10));
    // 0x349120: 0xa48a0056  sh          $t2, 0x56($a0)
    ctx->pc = 0x349120u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 86), (uint16_t)GPR_U32(ctx, 10));
    // 0x349124: 0xa48a0058  sh          $t2, 0x58($a0)
    ctx->pc = 0x349124u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 10));
    // 0x349128: 0x8c8a0024  lw          $t2, 0x24($a0)
    ctx->pc = 0x349128u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x34912c: 0x354a0040  ori         $t2, $t2, 0x40
    ctx->pc = 0x34912cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)64);
    // 0x349130: 0xac8a0024  sw          $t2, 0x24($a0)
    ctx->pc = 0x349130u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 10));
    // 0x349134: 0x8c8a0024  lw          $t2, 0x24($a0)
    ctx->pc = 0x349134u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x349138: 0x354a0080  ori         $t2, $t2, 0x80
    ctx->pc = 0x349138u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)128);
    // 0x34913c: 0xac8a0024  sw          $t2, 0x24($a0)
    ctx->pc = 0x34913cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 10));
    // 0x349140: 0x8c8a0024  lw          $t2, 0x24($a0)
    ctx->pc = 0x349140u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x349144: 0x354a0100  ori         $t2, $t2, 0x100
    ctx->pc = 0x349144u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)256);
    // 0x349148: 0xac8a0024  sw          $t2, 0x24($a0)
    ctx->pc = 0x349148u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 10));
    // 0x34914c: 0x8c8a0024  lw          $t2, 0x24($a0)
    ctx->pc = 0x34914cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x349150: 0x354a0200  ori         $t2, $t2, 0x200
    ctx->pc = 0x349150u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)512);
    // 0x349154: 0xac8a0024  sw          $t2, 0x24($a0)
    ctx->pc = 0x349154u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 10));
    // 0x349158: 0x8c8a0024  lw          $t2, 0x24($a0)
    ctx->pc = 0x349158u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x34915c: 0x354a0400  ori         $t2, $t2, 0x400
    ctx->pc = 0x34915cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)1024);
    // 0x349160: 0xac8a0024  sw          $t2, 0x24($a0)
    ctx->pc = 0x349160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 10));
    // 0x349164: 0x8c8a0024  lw          $t2, 0x24($a0)
    ctx->pc = 0x349164u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x349168: 0x354a0800  ori         $t2, $t2, 0x800
    ctx->pc = 0x349168u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)2048);
    // 0x34916c: 0xac8a0024  sw          $t2, 0x24($a0)
    ctx->pc = 0x34916cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 10));
    // 0x349170: 0x8c8a0024  lw          $t2, 0x24($a0)
    ctx->pc = 0x349170u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x349174: 0x354a1000  ori         $t2, $t2, 0x1000
    ctx->pc = 0x349174u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)4096);
    // 0x349178: 0xac8a0024  sw          $t2, 0x24($a0)
    ctx->pc = 0x349178u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 10));
    // 0x34917c: 0x8c8a0024  lw          $t2, 0x24($a0)
    ctx->pc = 0x34917cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x349180: 0x354a2000  ori         $t2, $t2, 0x2000
    ctx->pc = 0x349180u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)8192);
    // 0x349184: 0xac8a0024  sw          $t2, 0x24($a0)
    ctx->pc = 0x349184u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 10));
    // 0x349188: 0x8c8a0024  lw          $t2, 0x24($a0)
    ctx->pc = 0x349188u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x34918c: 0x354a4000  ori         $t2, $t2, 0x4000
    ctx->pc = 0x34918cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)16384);
    // 0x349190: 0xac8a0024  sw          $t2, 0x24($a0)
    ctx->pc = 0x349190u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 10));
    // 0x349194: 0x8c8a0024  lw          $t2, 0x24($a0)
    ctx->pc = 0x349194u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x349198: 0x354a8000  ori         $t2, $t2, 0x8000
    ctx->pc = 0x349198u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32768);
    // 0x34919c: 0xac8a0024  sw          $t2, 0x24($a0)
    ctx->pc = 0x34919cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 10));
    // 0x3491a0: 0x8c8a0024  lw          $t2, 0x24($a0)
    ctx->pc = 0x3491a0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x3491a4: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x3491a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x3491a8: 0xac890024  sw          $t1, 0x24($a0)
    ctx->pc = 0x3491a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 9));
    // 0x3491ac: 0x8c890024  lw          $t1, 0x24($a0)
    ctx->pc = 0x3491acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x3491b0: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x3491b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x3491b4: 0xac880024  sw          $t0, 0x24($a0)
    ctx->pc = 0x3491b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 8));
    // 0x3491b8: 0x78e80000  lq          $t0, 0x0($a3)
    ctx->pc = 0x3491b8u;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x657A60u));
    // 0x3491bc: 0x90e70010  lbu         $a3, 0x10($a3)
    ctx->pc = 0x3491bcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x657A70u));
    // 0x3491c0: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x3491c0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
    // 0x3491c4: 0xa0670010  sb          $a3, 0x10($v1)
    ctx->pc = 0x3491c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16), (uint8_t)GPR_U32(ctx, 7));
    // 0x3491c8: 0x8c870024  lw          $a3, 0x24($a0)
    ctx->pc = 0x3491c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x3491cc: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x3491ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x3491d0: 0xac860024  sw          $a2, 0x24($a0)
    ctx->pc = 0x3491d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 6));
    // 0x3491d4: 0x0  nop
    ctx->pc = 0x3491d4u;
    // NOP
label_3491d8:
    // 0x3491d8: 0x80670000  lb          $a3, 0x0($v1)
    ctx->pc = 0x3491d8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3491dc: 0x854021  addu        $t0, $a0, $a1
    ctx->pc = 0x3491dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3491e0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3491e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3491e4: 0x28a60009  slti        $a2, $a1, 0x9
    ctx->pc = 0x3491e4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3491e8: 0xa1070028  sb          $a3, 0x28($t0)
    ctx->pc = 0x3491e8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 40), (uint8_t)GPR_U32(ctx, 7));
    // 0x3491ec: 0x80670001  lb          $a3, 0x1($v1)
    ctx->pc = 0x3491ecu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x3491f0: 0xa1070029  sb          $a3, 0x29($t0)
    ctx->pc = 0x3491f0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 41), (uint8_t)GPR_U32(ctx, 7));
    // 0x3491f4: 0x80670002  lb          $a3, 0x2($v1)
    ctx->pc = 0x3491f4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3491f8: 0xa107002a  sb          $a3, 0x2A($t0)
    ctx->pc = 0x3491f8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 42), (uint8_t)GPR_U32(ctx, 7));
    // 0x3491fc: 0x80670003  lb          $a3, 0x3($v1)
    ctx->pc = 0x3491fcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x349200: 0xa107002b  sb          $a3, 0x2B($t0)
    ctx->pc = 0x349200u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 43), (uint8_t)GPR_U32(ctx, 7));
    // 0x349204: 0x80670004  lb          $a3, 0x4($v1)
    ctx->pc = 0x349204u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x349208: 0xa107002c  sb          $a3, 0x2C($t0)
    ctx->pc = 0x349208u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 44), (uint8_t)GPR_U32(ctx, 7));
    // 0x34920c: 0x80670005  lb          $a3, 0x5($v1)
    ctx->pc = 0x34920cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
    // 0x349210: 0xa107002d  sb          $a3, 0x2D($t0)
    ctx->pc = 0x349210u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 45), (uint8_t)GPR_U32(ctx, 7));
    // 0x349214: 0x80670006  lb          $a3, 0x6($v1)
    ctx->pc = 0x349214u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x349218: 0xa107002e  sb          $a3, 0x2E($t0)
    ctx->pc = 0x349218u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 46), (uint8_t)GPR_U32(ctx, 7));
    // 0x34921c: 0x80670007  lb          $a3, 0x7($v1)
    ctx->pc = 0x34921cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 7)));
    // 0x349220: 0xa107002f  sb          $a3, 0x2F($t0)
    ctx->pc = 0x349220u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 47), (uint8_t)GPR_U32(ctx, 7));
    // 0x349224: 0x14c0ffec  bnez        $a2, . + 4 + (-0x14 << 2)
    ctx->pc = 0x349224u;
    {
        const bool branch_taken_0x349224 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x349228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349224u;
        // 0x349228: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349224) {
            ctx->pc = 0x3491D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3491d8;
        }
    }
    ctx->pc = 0x34922Cu;
    // 0x34922c: 0xbd3021  addu        $a2, $a1, $sp
    ctx->pc = 0x34922cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x349230: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x349230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x349234: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x349234u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x349238: 0xa0650028  sb          $a1, 0x28($v1)
    ctx->pc = 0x349238u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 5));
    // 0x34923c: 0xa480003c  sh          $zero, 0x3C($a0)
    ctx->pc = 0x34923cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 60), (uint16_t)GPR_U32(ctx, 0));
    // 0x349240: 0xa0800060  sb          $zero, 0x60($a0)
    ctx->pc = 0x349240u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 96), (uint8_t)GPR_U32(ctx, 0));
    // 0x349244: 0x3e00008  jr          $ra
    ctx->pc = 0x349244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349244u;
        // 0x349248: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34924Cu;
}
