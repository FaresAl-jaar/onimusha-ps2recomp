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

// Function: sub_0015A050
// Address: 0x15a050 - 0x15a354
void sub_0015A050_0x15a050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A050_0x15a050");
#endif

    switch (ctx->pc) {
        case 0x15a070u: goto label_15a070;
        case 0x15a088u: goto label_15a088;
        case 0x15a0c4u: goto label_15a0c4;
        case 0x15a154u: goto label_15a154;
        case 0x15a1e4u: goto label_15a1e4;
        case 0x15a27cu: goto label_15a27c;
        case 0x15a310u: goto label_15a310;
        case 0x15a33cu: goto label_15a33c;
        default: break;
    }

    ctx->pc = 0x15a050u;

    // 0x15a050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15a050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15a054: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x15a054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x15a058: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15a058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15a05c: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x15a05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x15a060: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15a060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15a064: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x15a064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x15a068: 0xc05e360  jal         func_178D80
    ctx->pc = 0x15A068u;
    SET_GPR_U32(ctx, 31, 0x15A070u);
    ctx->pc = 0x15A06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A068u;
    // 0x15a06c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x15A068u, 0x15A070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A070u;
label_15a070:
    // 0x15a070: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15a070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a074: 0x120000b2  beqz        $s0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x15A074u;
    {
        const bool branch_taken_0x15a074 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A074u;
        // 0x15a078: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a074) {
            ctx->pc = 0x15A340u;
            goto label_15a340;
        }
    }
    ctx->pc = 0x15A07Cu;
    // 0x15a07c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x15a07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x15a080: 0xc05e360  jal         func_178D80
    ctx->pc = 0x15A080u;
    SET_GPR_U32(ctx, 31, 0x15A088u);
    ctx->pc = 0x15A084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A080u;
    // 0x15a084: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x15A080u, 0x15A088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A088u;
label_15a088:
    // 0x15a088: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15a088u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a08c: 0x122000ac  beqz        $s1, . + 4 + (0xAC << 2)
    ctx->pc = 0x15A08Cu;
    {
        const bool branch_taken_0x15a08c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A08Cu;
        // 0x15a090: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a08c) {
            ctx->pc = 0x15A340u;
            goto label_15a340;
        }
    }
    ctx->pc = 0x15A094u;
    // 0x15a094: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x15a094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x15a098: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x15a098u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x15a09c: 0x34420047  ori         $v0, $v0, 0x47
    ctx->pc = 0x15a09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)71);
    // 0x15a0a0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x15a0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x15a0a4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x15a0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x15a0a8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x15a0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x15a0ac: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x15a0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x15a0b0: 0x344217fd  ori         $v0, $v0, 0x17FD
    ctx->pc = 0x15a0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6141);
    // 0x15a0b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15a0b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a0b8: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x15a0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x15a0bc: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x15A0BCu;
    SET_GPR_U32(ctx, 31, 0x15A0C4u);
    ctx->pc = 0x15A0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A0BCu;
    // 0x15a0c0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x15A0BCu, 0x15A0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A0C4u;
label_15a0c4:
    // 0x15a0c4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x15a0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x15a0c8: 0x3c025030  lui         $v0, 0x5030
    ctx->pc = 0x15a0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20528 << 16));
    // 0x15a0cc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x15a0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x15a0d0: 0x3442004c  ori         $v0, $v0, 0x4C
    ctx->pc = 0x15a0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)76);
    // 0x15a0d4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x15a0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x15a0d8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x15a0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x15a0dc: 0x8e0b0004  lw          $t3, 0x4($s0)
    ctx->pc = 0x15a0dcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15a0e0: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x15a0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x15a0e4: 0x34462000  ori         $a2, $v0, 0x2000
    ctx->pc = 0x15a0e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x15a0e8: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x15a0e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15a0ec: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x15a0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x15a0f0: 0x3408fffd  ori         $t0, $zero, 0xFFFD
    ctx->pc = 0x15a0f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x15a0f4: 0x34497000  ori         $t1, $v0, 0x7000
    ctx->pc = 0x15a0f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x15a0f8: 0x34479000  ori         $a3, $v0, 0x9000
    ctx->pc = 0x15a0f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x15a0fc: 0x3c027960  lui         $v0, 0x7960
    ctx->pc = 0x15a0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31072 << 16));
    // 0x15a100: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x15a100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x15a104: 0x34437000  ori         $v1, $v0, 0x7000
    ctx->pc = 0x15a104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x15a108: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15a108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a10c: 0x1665825  or          $t3, $t3, $a2
    ctx->pc = 0x15a10cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 6));
    // 0x15a110: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x15a110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x15a114: 0xae0b0004  sw          $t3, 0x4($s0)
    ctx->pc = 0x15a114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 11));
    // 0x15a118: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x15a118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15a11c: 0xa20a000f  sb          $t2, 0xF($s0)
    ctx->pc = 0x15a11cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 10));
    // 0x15a120: 0xae090018  sw          $t1, 0x18($s0)
    ctx->pc = 0x15a120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 9));
    // 0x15a124: 0xae08001c  sw          $t0, 0x1C($s0)
    ctx->pc = 0x15a124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 8));
    // 0x15a128: 0xae070020  sw          $a3, 0x20($s0)
    ctx->pc = 0x15a128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
    // 0x15a12c: 0xae080024  sw          $t0, 0x24($s0)
    ctx->pc = 0x15a12cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 8));
    // 0x15a130: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x15a130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x15a134: 0xae080034  sw          $t0, 0x34($s0)
    ctx->pc = 0x15a134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 8));
    // 0x15a138: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x15a138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x15a13c: 0xae08003c  sw          $t0, 0x3C($s0)
    ctx->pc = 0x15a13cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 8));
    // 0x15a140: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x15a140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x15a144: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x15a144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x15a148: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x15a148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x15a14c: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x15A14Cu;
    SET_GPR_U32(ctx, 31, 0x15A154u);
    ctx->pc = 0x15A150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A14Cu;
    // 0x15a150: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x15A14Cu, 0x15A154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A154u;
label_15a154:
    // 0x15a154: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x15a154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x15a158: 0x3c025030  lui         $v0, 0x5030
    ctx->pc = 0x15a158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20528 << 16));
    // 0x15a15c: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x15a15cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x15a160: 0x3442004c  ori         $v0, $v0, 0x4C
    ctx->pc = 0x15a160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)76);
    // 0x15a164: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x15a164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x15a168: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x15a168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x15a16c: 0x8e0b0044  lw          $t3, 0x44($s0)
    ctx->pc = 0x15a16cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x15a170: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x15a170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x15a174: 0x34462000  ori         $a2, $v0, 0x2000
    ctx->pc = 0x15a174u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x15a178: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x15a178u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15a17c: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x15a17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x15a180: 0x3408fffd  ori         $t0, $zero, 0xFFFD
    ctx->pc = 0x15a180u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x15a184: 0x34497000  ori         $t1, $v0, 0x7000
    ctx->pc = 0x15a184u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x15a188: 0x34479000  ori         $a3, $v0, 0x9000
    ctx->pc = 0x15a188u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x15a18c: 0x3c0286a0  lui         $v0, 0x86A0
    ctx->pc = 0x15a18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34464 << 16));
    // 0x15a190: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x15a190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x15a194: 0x34437000  ori         $v1, $v0, 0x7000
    ctx->pc = 0x15a194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x15a198: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x15a198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x15a19c: 0x1665825  or          $t3, $t3, $a2
    ctx->pc = 0x15a19cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 6));
    // 0x15a1a0: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x15a1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x15a1a4: 0xae0b0044  sw          $t3, 0x44($s0)
    ctx->pc = 0x15a1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 11));
    // 0x15a1a8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x15a1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15a1ac: 0xa20a004f  sb          $t2, 0x4F($s0)
    ctx->pc = 0x15a1acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 79), (uint8_t)GPR_U32(ctx, 10));
    // 0x15a1b0: 0xae090058  sw          $t1, 0x58($s0)
    ctx->pc = 0x15a1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 9));
    // 0x15a1b4: 0xae08005c  sw          $t0, 0x5C($s0)
    ctx->pc = 0x15a1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 8));
    // 0x15a1b8: 0xae070060  sw          $a3, 0x60($s0)
    ctx->pc = 0x15a1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 7));
    // 0x15a1bc: 0xae080064  sw          $t0, 0x64($s0)
    ctx->pc = 0x15a1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 8));
    // 0x15a1c0: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x15a1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x15a1c4: 0xae080074  sw          $t0, 0x74($s0)
    ctx->pc = 0x15a1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 8));
    // 0x15a1c8: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x15a1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x15a1cc: 0xae08007c  sw          $t0, 0x7C($s0)
    ctx->pc = 0x15a1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 8));
    // 0x15a1d0: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x15a1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x15a1d4: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x15a1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x15a1d8: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x15a1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x15a1dc: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x15A1DCu;
    SET_GPR_U32(ctx, 31, 0x15A1E4u);
    ctx->pc = 0x15A1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A1DCu;
    // 0x15a1e0: 0xae00006c  sw          $zero, 0x6C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x15A1DCu, 0x15A1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A1E4u;
label_15a1e4:
    // 0x15a1e4: 0x26100080  addiu       $s0, $s0, 0x80
    ctx->pc = 0x15a1e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x15a1e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x15a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x15a1ec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x15a1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x15a1f0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x15a1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x15a1f4: 0x3c025030  lui         $v0, 0x5030
    ctx->pc = 0x15a1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20528 << 16));
    // 0x15a1f8: 0x340afffd  ori         $t2, $zero, 0xFFFD
    ctx->pc = 0x15a1f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x15a1fc: 0x3443004c  ori         $v1, $v0, 0x4C
    ctx->pc = 0x15a1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)76);
    // 0x15a200: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x15a200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x15a204: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x15a204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x15a208: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x15a208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x15a20c: 0x8e0c0004  lw          $t4, 0x4($s0)
    ctx->pc = 0x15a20cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15a210: 0x34462000  ori         $a2, $v0, 0x2000
    ctx->pc = 0x15a210u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x15a214: 0x3c0284e0  lui         $v0, 0x84E0
    ctx->pc = 0x15a214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34016 << 16));
    // 0x15a218: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x15a218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x15a21c: 0x344b7000  ori         $t3, $v0, 0x7000
    ctx->pc = 0x15a21cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x15a220: 0x34499000  ori         $t1, $v0, 0x9000
    ctx->pc = 0x15a220u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x15a224: 0x3c0286a0  lui         $v0, 0x86A0
    ctx->pc = 0x15a224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34464 << 16));
    // 0x15a228: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15a228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a22c: 0x34487000  ori         $t0, $v0, 0x7000
    ctx->pc = 0x15a22cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x15a230: 0x34479000  ori         $a3, $v0, 0x9000
    ctx->pc = 0x15a230u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x15a234: 0x3c028001  lui         $v0, 0x8001
    ctx->pc = 0x15a234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32769 << 16));
    // 0x15a238: 0x1866025  or          $t4, $t4, $a2
    ctx->pc = 0x15a238u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 6));
    // 0x15a23c: 0xae0c0004  sw          $t4, 0x4($s0)
    ctx->pc = 0x15a23cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 12));
    // 0x15a240: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x15a240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15a244: 0xa200000f  sb          $zero, 0xF($s0)
    ctx->pc = 0x15a244u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x15a248: 0xae0b0018  sw          $t3, 0x18($s0)
    ctx->pc = 0x15a248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 11));
    // 0x15a24c: 0xae0a001c  sw          $t2, 0x1C($s0)
    ctx->pc = 0x15a24cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 10));
    // 0x15a250: 0xae090020  sw          $t1, 0x20($s0)
    ctx->pc = 0x15a250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 9));
    // 0x15a254: 0xae0a0024  sw          $t2, 0x24($s0)
    ctx->pc = 0x15a254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 10));
    // 0x15a258: 0xae080030  sw          $t0, 0x30($s0)
    ctx->pc = 0x15a258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 8));
    // 0x15a25c: 0xae0a0034  sw          $t2, 0x34($s0)
    ctx->pc = 0x15a25cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 10));
    // 0x15a260: 0xae070038  sw          $a3, 0x38($s0)
    ctx->pc = 0x15a260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 7));
    // 0x15a264: 0xae0a003c  sw          $t2, 0x3C($s0)
    ctx->pc = 0x15a264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 10));
    // 0x15a268: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x15a268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x15a26c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x15a26cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x15a270: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x15a270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x15a274: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x15A274u;
    SET_GPR_U32(ctx, 31, 0x15A27Cu);
    ctx->pc = 0x15A278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A274u;
    // 0x15a278: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x15A274u, 0x15A27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A27Cu;
label_15a27c:
    // 0x15a27c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x15a27cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x15a280: 0x3c025030  lui         $v0, 0x5030
    ctx->pc = 0x15a280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20528 << 16));
    // 0x15a284: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x15a284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x15a288: 0x3442004c  ori         $v0, $v0, 0x4C
    ctx->pc = 0x15a288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)76);
    // 0x15a28c: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x15a28cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x15a290: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x15a290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x15a294: 0x8e060044  lw          $a2, 0x44($s0)
    ctx->pc = 0x15a294u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x15a298: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x15a298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x15a29c: 0x34452000  ori         $a1, $v0, 0x2000
    ctx->pc = 0x15a29cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x15a2a0: 0x340afffd  ori         $t2, $zero, 0xFFFD
    ctx->pc = 0x15a2a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x15a2a4: 0x3c027960  lui         $v0, 0x7960
    ctx->pc = 0x15a2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31072 << 16));
    // 0x15a2a8: 0x3c038001  lui         $v1, 0x8001
    ctx->pc = 0x15a2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32769 << 16));
    // 0x15a2ac: 0x344b7000  ori         $t3, $v0, 0x7000
    ctx->pc = 0x15a2acu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x15a2b0: 0x34499000  ori         $t1, $v0, 0x9000
    ctx->pc = 0x15a2b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x15a2b4: 0x3c027b20  lui         $v0, 0x7B20
    ctx->pc = 0x15a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31520 << 16));
    // 0x15a2b8: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x15a2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x15a2bc: 0x34487000  ori         $t0, $v0, 0x7000
    ctx->pc = 0x15a2bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x15a2c0: 0x34479000  ori         $a3, $v0, 0x9000
    ctx->pc = 0x15a2c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x15a2c4: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x15a2c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x15a2c8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x15a2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x15a2cc: 0xae060044  sw          $a2, 0x44($s0)
    ctx->pc = 0x15a2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 6));
    // 0x15a2d0: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x15a2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x15a2d4: 0xa200004f  sb          $zero, 0x4F($s0)
    ctx->pc = 0x15a2d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 79), (uint8_t)GPR_U32(ctx, 0));
    // 0x15a2d8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x15a2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15a2dc: 0xae0b0058  sw          $t3, 0x58($s0)
    ctx->pc = 0x15a2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 11));
    // 0x15a2e0: 0xae0a005c  sw          $t2, 0x5C($s0)
    ctx->pc = 0x15a2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 10));
    // 0x15a2e4: 0xae090060  sw          $t1, 0x60($s0)
    ctx->pc = 0x15a2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 9));
    // 0x15a2e8: 0xae0a0064  sw          $t2, 0x64($s0)
    ctx->pc = 0x15a2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 10));
    // 0x15a2ec: 0xae080070  sw          $t0, 0x70($s0)
    ctx->pc = 0x15a2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 8));
    // 0x15a2f0: 0xae0a0074  sw          $t2, 0x74($s0)
    ctx->pc = 0x15a2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 10));
    // 0x15a2f4: 0xae070078  sw          $a3, 0x78($s0)
    ctx->pc = 0x15a2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 7));
    // 0x15a2f8: 0xae0a007c  sw          $t2, 0x7C($s0)
    ctx->pc = 0x15a2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 10));
    // 0x15a2fc: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x15a2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x15a300: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x15a300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x15a304: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x15a304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x15a308: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x15A308u;
    SET_GPR_U32(ctx, 31, 0x15A310u);
    ctx->pc = 0x15A30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A308u;
    // 0x15a30c: 0xae02006c  sw          $v0, 0x6C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x15A308u, 0x15A310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A310u;
label_15a310:
    // 0x15a310: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x15a310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x15a314: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x15a314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x15a318: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x15a318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x15a31c: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x15a31cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x15a320: 0x34420047  ori         $v0, $v0, 0x47
    ctx->pc = 0x15a320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)71);
    // 0x15a324: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x15a324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x15a328: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x15a328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x15a32c: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x15a32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x15a330: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x15a330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15a334: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x15A334u;
    SET_GPR_U32(ctx, 31, 0x15A33Cu);
    ctx->pc = 0x15A338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A334u;
    // 0x15a338: 0xfe200018  sd          $zero, 0x18($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x15A334u, 0x15A33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A33Cu;
label_15a33c:
    // 0x15a33c: 0x0  nop
    ctx->pc = 0x15a33cu;
    // NOP
label_15a340:
    // 0x15a340: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15a340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a344: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15a344u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a348: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15a348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a34c: 0x3e00008  jr          $ra
    ctx->pc = 0x15A34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A34Cu;
        // 0x15a350: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A34Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A354u;
}
